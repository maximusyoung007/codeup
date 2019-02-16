#include<stdio.h>
int main(){
    int l,m;
    while(scanf("%d %d",&l,&m) != EOF){
        if(l == 0 && m == 0)break;
        else{
                int countn = 0;
                int trees[100010] = {0};
                for(int i = 0;i < m;i++){
                    int left,right;
                    scanf("%d %d",&left,&right);
                    for(int j = left;j <= right;j++){
                        trees[j] = 1;
                }
            }
                for(int i = 0;i <= l;i++){
                    if(trees[i] == 0)countn++;
                }
                printf("%d\n",countn);
        }
    }
    return 0;
}
