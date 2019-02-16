#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,num;
    int a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5 = 0;
    bool existA1 = false,existA2 = false;
    int countA4 = 0,count = 1;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d", &num);
        if(num % 5 == 0){
            if(num % 2 == 0){
                existA1 = true;
                a1 += num;
            }
        }
        else if(num % 5 == 1){
            existA2 = true;
            if(count % 2 == 0)
                num = -num;
            a2 += num;
            count++;
        }
        else if(num % 5 == 2){
            a3++;
        }
        else if(num % 5 == 3){
            a4 += num;
            countA4++;
        }
        else
            a5 = (num > a5 ? num : a5);
    }
    if(existA1)
        printf("%d", a1);
    else
        printf("%c", 'N');
    if(existA2)
        printf(" %d", a2);
    else
        printf(" %c", 'N');
    if(a3 != 0)
        printf(" %d", a3);
    else
        printf(" %c", 'N');
    if(countA4 != 0)
        printf(" %.1f",(double)a4 / countA4);
    else
        printf(" %c", 'N');
    if(a5 != 0)
        printf(" %d\n", a5);
    else
        printf(" %c\n", 'N');
    return 0;
}
