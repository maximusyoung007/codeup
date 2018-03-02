#include<stdio.h>
#include<string.h>

char a[10001],b[10001],sum[10001];

int BigIntegerAdd(){
    //两个数的长度
    int lena = strlen(a);
    int lenb = strlen(b);
    //进位标记
    int c = 0;
    int i,j,k;
    //初始化数组sum
    memset(sum,0,10001);
    //倒序相加
    k = 0;
    for(i = lena-1,j = lenb-1;i >= 0 && j >= 0;i--,j--){
        sum[k] = a[i] + b[j] - '0' + c;
        c = 0;
        //如果相加大于等于10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
    }
    //a > b
    while(i >= 0){
        sum[k] = a[i] + c;
        c = 0;
        //如果相加大于等于10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
        i--;
    }
    //b > a
    while(j >= 0){
        sum[k] = b[j] + c;
        c = 0;
        //如果相加大于等于10
        if(sum[k] > '9'){
            sum[k] -= 10;
            c = 1;
        }
        k++;
        j--;
    }
    //如果最后两个数相加有进位的情况
    //例如：67 + 51：5+6有进位
    if(c == 1){
        sum[k++] = '1';
    }
    //翻转
    char temp;
    for(i = 0,j = k-1;i < j;i++,j--){
        temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
    }
    return 0;
}

int main(){
    while(scanf("%s %s",a,b) != EOF){
        BigIntegerAdd();
        puts(sum);
    }
}
