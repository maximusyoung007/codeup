#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
bool cmp(double a,double b)
{
    return a < b;
}
int main()
{
    int c;
    cin >> c;
    while(c--){
        int n,v,i;
        double w,sum = 0,p = 0,an[105];
		scanf("%d%d%lf",&n,&v,&w);
		for(i = 0;i < n;i++)
		{
			scanf("%lf",&an[i]);
		}
		sort(an,an+n,cmp);
		for(i = 0;i < n;i++)
		{
			sum += an[i];
			if(sum / (double)(i+1) <= w)
			{
				p = sum / (double)(i+1);
			}
			else
				break;
		}
		if(i == 0)
			printf("0 0.00\n");
		else
			printf("%d %.2f\n",i * v,p / (double)100);
    }
}
