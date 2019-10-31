#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int arr[1000],countn = 0;
bool flag[20];
int n;
void DFS(int index)
{
    if(index == n + 1){
        for(int i = 1;i <= n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        countn++;
        return;
    }
    for(int i = 1;i <= n;i++){
        if(!flag[i]){
            bool judge = true;
            for(int j = 1;j < index;j++){
                if(abs(index - j) == abs(i - arr[j])){
                    judge = false;
                    break;
                }
            }
            if(judge){
                arr[index] = i;
                flag[i] = true;
                DFS(index + 1);
                flag[i] = false;
            }
        }
    }
}
int main()
{
    scanf("%d",&n);
    DFS(1);
    if(countn == 0){
        printf("no solute!\n");
    }
    return 0;
}
