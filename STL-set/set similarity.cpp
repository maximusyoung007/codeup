/**STL-set:Automatically ordered without repeating elements

define:set<typename> name;
examples:set<int> name;set<double> name;set<char> name;char<node>name

define array:set<typename> Arrayname[arraySize]
example:set<int> a[100]

set<typename>::iterator it;
examples:set<int>::iterator it;
        set<char>::iterator it;
STL don't support *(it + i) to visit except vector and string

set<int> st;
insert():st.insert(100);automatically ordered and delete the repeating elements
find elements:st.find(2)

delete elements:
1.st.erase(st.find(100));find 100 and erase it,O(1)
2.st.erase(100);find elements which values 100.O(logN),N is number of elements in set
1 is equal to 2
3.st.erase(first,last);example:set<int>iterator it = st.find(300)
st.erase(it,st.end())

get numbers of elements in set:
st.size();

delete all the elements:
st.clear()

**/
#include<set>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
set<int> st[51];
int main()
{
    int n,m,e;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&m);
        for(int j = 0;j < m;j++){
            scanf("%d",&e);
            st[i].insert(e);
        }
    }
    int k;
    int s1,s2;
    scanf("%d",&k);
    for(int i = 0;i < k;i++){
        scanf("%d%d",&s1,&s2);
        int count1 = 0;
        int count2 = st[s2].size();
        for(set<int>::iterator it = st[s1].begin();it != st[s1].end();it++){
            if(st[s2].find(*it) != st[s2].end())count1++;
            else count2++;
        }
        printf("%.1f%%\n",count1 * 100.0 / count2);
    }
    return 0;
}
