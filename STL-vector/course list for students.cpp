/*first of all,it is a copy*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MaxK 2500
#define MaxS 200
#define MaxName 4
#define MaxHashName 26426
#define MaxD 10
typedef struct ListNode *List;
struct ListNode {
    int cNo;
    List Next;
};
struct StudentNode {
    int cnt;
    List crs, tail;
}student[MaxHashName][MaxD];
struct CourseNode{
    int cnt;
    int stu[MaxS];
}course[MaxK];
void Initialize()
{
    int i, j;
 for (i = 0; i < MaxHashName; i++)
    for (j = 0; j < MaxD; j++) {
        student[i][j].cnt = 0;
        student[i][j].crs = student[i][j].tail = NULL;
    }
}
List NewNode( int cn )
{
    List temp;
    temp = (List)malloc(sizeof(struct ListNode));
    temp->cNo = cn;
    temp->Next = NULL;
    return temp;
}
int NameHash( char name[] )
{
    int i, j;
    i = name[0] - 'A';
    for (j = 1; j < 3; j++)
        i = (i<<5) + name[j] - 'A';
    return i;
}
void Read_Insert( int N, int K )
{
    int i, j, cn, sn1, sn2;
    char name[MaxName + 1];
    List tmp;
    for (i = 0; i < K; i++){
        scanf("%d", &cn);
        scanf("%d", &course[cn - 1].cnt);
        for (j = course[cn - 1].cnt - 1; j >= 0; j--) {
            scanf("%s", name);
            course[cn - 1].stu[j] = (NameHash(name)<<5) + name[3] - '0';
        }
    }
    for (i = 0; i < K; i++){
        for (j = course[i].cnt - 1; j >= 0; j--) {
            sn2 = course[i].stu[j] % 32;
            sn1 = course[i].stu[j] >> 5;
            student[sn1][sn2].cnt ++;
            tmp = NewNode(i + 1);
            if (student[sn1][sn2].cnt == 1) {
                student[sn1][sn2].crs = student[sn1][sn2].tail = tmp;
            }
            else {
                student[sn1][sn2].tail->Next = tmp; student[sn1][sn2].tail = tmp;
            }
        }
    }
}
void Output ( int N )
{
    int i, j, sn1, sn2;
    char name[MaxName + 1];
    for (i = 0; i < N; i++) {
        scanf("%s", name);
        printf("%s", name);
        sn1 = NameHash(name);
        sn2 = name[3] - '0';
        printf(" %d", student[sn1][sn2].cnt);
        student[sn1][sn2].tail = student[sn1][sn2].crs;
        for (j = student[sn1][sn2].cnt; j > 0; j--) {
            printf(" %d", student[sn1][sn2].tail->cNo);
            student[sn1][sn2].tail = student[sn1][sn2].tail->Next;
        }
    printf("\n");
    }
}
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    Initialize();
    Read_Insert(N, K);
    Output(N);
    return 0;
}
