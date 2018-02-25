#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int a[111],n;
    while(t--){
        map < int,map<int,int> > mp;
        scanf("%d",&n);
        for(int i = 0;i < n;i++){
            int x;
            scanf("%d",&x);
            ++mp[x][a[i]];
            for(int j = 0;j < n;j++){
                mp[x][a[j]];
            }
        }
        for(map< int,map<int,int> >::iterator it = mp.begin();it != mp.end();++it){
            printf("%d={",it->first);
            bool first = true;
            for(map<int,int>::iterator jt = it -> second.begin();jt != it -> second.end();++jt){
                if(first) first = false;
                else printf(",");
                printf("%d=%d",jt -> first,jt -> second);
                puts("}");
            }
        }
    }
    return 0;
}
