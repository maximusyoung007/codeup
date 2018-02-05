#include<cstdio>
int change(char a)
{
    if(a == 'B')return 0;
    if(a == 'C')return 1;
    if(a == 'J')return 2;
}
int main()
{
   char a[3] = {'B','C','J'};
   char b[3] = {'B','C','J'};
   int k1,k2;
   int timea[3] = {0},timeb[3] = {0};
   int resulta[3] ={0},resultb[3] = {0};
   int n;
   scanf("%d",&n);
   char c1,c2;
   for(int i = 0;i < n;i++)
   {
       getchar();//Ïû³ı»»ĞĞ·û
       scanf("%c %c",&c1,&c2);
       k1 = change(c1);
       k2 = change(c2);
       if((k1 + 1) % 3 == k2){
            timea[0]++;
            timeb[2]++;
            resulta[k1]++;
       }
        else if(k1 == k2){
            timea[1]++;
            timeb[1]++;
       }
       else {
            timea[2]++;
            timeb[0]++;
            resultb[k2]++;
       }
   }
   printf("%d %d %d\n",timea[0],timea[1],timea[2]);
   printf("%d %d %d\n",timeb[0],timeb[1],timeb[2]);
   int max1 = 0,max2 = 0;
   for(int i = 0;i < 3;i++){
        if(resulta[i] > resulta[max1])
            max1 = i;
        if(resultb[i] > resultb[max2])
            max2 = i;
   }
        printf("%c %c\n",a[max1],b[max2]);
        return 0;
}
