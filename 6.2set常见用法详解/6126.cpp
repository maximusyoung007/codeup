#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<set<int> > sets;
    for(int i = 0;i < n;i++){
        int m;
        scanf("%d",&m);
        set<int> temp;
        for(int j = 0;j < m;j++){
            int a;
            scanf("%d",&a);
            temp.insert(a);
        }
        sets.push_back(temp);
    }
    int k;
    scanf("%d",&k);
    set<int> all;
    set<int> distinct;
    for(int i = 0;i < k;i++){
        all.clear();
        distinct.clear();
        int b,c;
        scanf("%d %d",&b,&c);
        for(set<int> :: iterator it = sets[b - 1].begin();it != sets[b - 1].end();it++){
            all.insert(*it);
        }
        for(set<int> :: iterator it = sets[c - 1].begin();it != sets[c - 1].end();it++){
            all.insert(*it);
        }
        for(set<int> :: iterator it1 = sets[b - 1].begin();it1 != sets[b - 1].end();it1++){
            //如果在最后一位之前找到，就表示sets2里有sets1的元素
            if(sets[c - 1].find(*it1) != sets[c - 1].end()){
                distinct.insert(*it1);
            }
        }
        double size1 = all.size();
        double size2 = distinct.size();
        double result = size2 / size1 * 100;
        printf("%.1f%%\n",result);
    }
    return 0;
}
