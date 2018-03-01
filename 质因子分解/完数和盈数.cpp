#include<cstdio>
int judge(int n)
{
    int i;
    int divisor[100];
    int num = 0,sum = 0;
    for(i = 1;i < n;i++){
        if(n % i == 0)divisor[num++] = i;
    }
    for(i = 0;i < num;i++){
        sum += divisor[i];
    }
    if(n == sum) return 1;
    if(n < sum)return 2;
}
int main()
{
    int n;
    int countn = 0;
    int pn[100],an[100];
    int num1 = 0,num2 = 0;
    for(int i = 2;i <= 60;i++){
        if(judge(i) == 1)
            pn[num1++] = i;
        if(judge(i) == 2)
            an[num2++] = i;
    }
    printf("E: ");
    for(int i = 0;i < num1;i++)
        printf("%d ",pn[i]);
    printf("G: ");
    for(int i = 0;i < num2;i++)
        printf("%d ",an[i]);
    return 0;
}
