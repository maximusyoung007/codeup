//https://blog.csdn.net/zjfclh/article/details/21128903
#include<stdio.h>
#include<string.h>

#define times 1000

double num[30];
int d[30];
int dp[3000000];

int maxM(int a, int b) {
	return a > b ? a : b;
}

int main() {
	double Q, ans;
	int N, k;
    while(scanf("%lf %d",&Q,&N) != EOF && N != 0) {
        int i, j, m;
        k = 0; //可以报销的发票数
        for(i = 0; i < N; i++){
            scanf("%d",&m);
            double total = 0; //单张发票的总额
            bool flag = true; //标志发票是否有效
            for(j = 0;j < m;j++){
                char c;
                double temp;
                scanf(" %c:%lf",&c,&temp);
                if(flag && (c == 'A' || c == 'B' || c == 'C') && temp <= 600)
					total += temp;
                else
					flag = false;
            }
            if(flag && total <= 1000){
                num[k++] = total;
            }
        }

        for(i = 0;i < k;i++)
            d[i] = num[i] * times;
        int q = Q * times; //将小数转化为整数，即化为0-1背包问题

        memset(dp,0,sizeof(dp)); //dp初始化
		ans = 0; //最大报销额初始化
		for(i = 0; i < k; i++) {
			for(j = q; j >= d[i]; j--) {
				dp[j] = maxM(dp[j],dp[j - d[i]] + d[i]); //背包公式
				ans = maxM(ans,dp[j]);
			}
		}
        ans /= times; //还原为整数
        printf("%.2lf\n",ans);
    }
    return 0;
}
