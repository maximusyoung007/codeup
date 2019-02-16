#include<cstdio>
#include<string.h>
int main()
{
    char num1[20],num2[20];
	while(scanf("%s%s",num1,num2) != EOF)
	{
		int sum1 = 0,sum2 = 0;
		int len1 = strlen(num1);
		int len2 = strlen(num2);
		for(int i = 0; i < len1; i++){
			if(num1[i]  >= '0' && num1[i] <= '9')
				sum1 = sum1 * 10 + num1[i] - '0';
		}
		if(num1[0] == '-')
			sum1 = -sum1;
		for(int j = 0;j < len2;j++){
			if(num2[j] >= '0' && num2[j] <= '9')
				sum2 = sum2 * 10 + num2[j] - '0';
		}

		if(num2[0] == '-')
			sum2 = -sum2;
		printf("%d\n",sum1 + sum2);
	}
	return 0;
}
