#include <stdio.h>

 int in[1000];


 int main()
 {
    int n,t;
    int a1=0,a2=0,a3=0,a5=0,c4=0,c2=0,c1=0;
    double a4=0;
    scanf("%d",&n);

    for(int i=0; i < n;i++ ){
        scanf("%d",&in[i]);
        t = in[i] % 5;
        switch(t){
            case 0:
                if( in[i] %2 == 0 ) {c1++;a1+=in[i];}
            break;
            case 1:
                if(c2%2 == 0)
                a2 += in[i];
                else
                a2 -= in[i];
                c2++;
            break;
            case 2:
                a3++;
            break;
            case 3:
                a4 += in[i];
                c4++;
            break;
            case 4:
                if(a5 < in[i])
                a5 = in[i];
            break;
    }
 }

            if(c1)
                printf("%d ",a1);
            else
                printf("N ");

            if(c2)
                printf("%d ",a2);
            else
                printf("N ");

            if(a3)
                printf("%d ",a3);
            else
                printf("N ");
            if(a4)
                printf("%.1f ",a4/c4);
            else
                printf("N ");
            if(a5)
                printf("%d",a5);
            else
                printf("N\n");

            return 0;
 }
