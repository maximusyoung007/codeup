#include<cstdio>
int main()
{
    int y,n;
    int i;
    char month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d%d",&y,&n) != EOF){
        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))month[1] = 29;
        else month[1] = 28;
        int month_num = 1;
        for(i = 0;i < 12;i++){
        if(n > month[i]){
            n = n- month[i];
            month_num++;
        }
        else break;
    }
    printf("%.4d-%.2d-%.2d\n",y,month_num,n);
  }
}
