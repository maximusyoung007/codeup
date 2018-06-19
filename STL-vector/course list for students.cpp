/**vector
1.define a vector: vector<typename> name;
example:vector<int> name;
        vector<double>name;
        vector<char> name;
if typename is vector,then we define vector like it:
    vector<vector<int> > name;blank is necessary
define vector array:
vector<typename> Arrayname[arraysize]
example vector<int> vi[100]
2.visit elements
Access by subscript or access by iterator
define:vector<typename>::iterator it;
example:vector<int>::iterator it
        vector<double>::iterator it

vector<int> vi;
for(int i = 0;i <= 5;i++)
    vi.push_back(i)
vector<int>::iterator it = vi.begin();
for(int i = 0;i < 5;i++)
    print("%d ",*(it + i));

vi[i]is equal with *(vi.begin()+i)
another way to traversal
for(vector<int>::iterator it = vi.begin();it != vi.end();it++)
    printf("%d ",*it);
vector<typename> vi;
add elements :vi.push_back(i)
delete the last element : vi.pop_back()
get the number of elements :vi.size()
delete all elements :vi.clear()
add element into some place in vector :vi.insert(vi.begin + 2,-1)add at vi[2]
delete elements an any position :vi.erase(vi.begin() + 3)
delete all the elements in the interval :vi.erase(vi.begin() + 1,vi.begin() + 4)
**/
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int getId(char name[])
{
    int id = 0;
    for(int i = 0;i < 3;i++){
        id = id * 26 + (name[i] - 'A');
    }
    id = id * 10 + (name[3] - '0');
    return id;
}
const int maxnum = 26 * 26 * 26 * 10;
vector<int> vi[maxnum];
int main()
{
    int stu_num,total_course_num;
    int course_id,stu_num2;
    int stu_id;
    char name[5];
    scanf("%d%d",&stu_num,&total_course_num);
    for(int i = 0;i < total_course_num;i++){
        scanf("%d%d",&course_id,&stu_num2);
        for(int i = 0;i < stu_num2;i++){
            scanf("%s",name);
            stu_id = getId(name);
            vi[stu_id].push_back(course_id);
        }
    }
    for(int i = 0;i < stu_num;i++){
        scanf("%s",name);
        int id = getId(name);
        sort(vi[id].begin(),vi[id].end());
        printf("%s %d",name,vi[id].size());
        for(vector<int>::iterator it = vi[id].begin();it != vi[id].end();it++){
            printf(" %d",*it);
        }
        printf("\n");

    }
}



