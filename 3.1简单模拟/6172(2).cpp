//right
#include <stdio.h>
char most_gesture(int j, int c, int b);
int main(int argc, const char * argv[]) {
    int n, i, jia_sheng=0, jia_ping=0, jia_j=0, jia_c=0, jia_b=0, yi_sheng=0, yi_j=0, yi_c=0, yi_b=0;
    char jia, yi;
    char jia_zui, yi_zui;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        getchar();
        scanf("%c %c", &jia, &yi);
        if(jia==yi){
            jia_ping++;
        }
        else if(((jia=='C')&&(yi=='J'))||((jia=='J')&&(yi=='B'))||((jia=='B')&&(yi=='C'))){
            jia_sheng++;
            switch(jia){
                case 'C': jia_c++; break;
                case 'J': jia_j++; break;
                case 'B': jia_b++; break;
                default: break;
            }
        }
        else{
            yi_sheng++;
            switch(yi){
                case 'C': yi_c++; break;
                case 'J': yi_j++; break;
                case 'B': yi_b++; break;
                default: break;
            }
        }
    }
    jia_zui=most_gesture(jia_j, jia_c, jia_b);
    yi_zui=most_gesture(yi_j, yi_c, yi_b);
     printf("%d %d %d\n%d %d %d\n%c %c", jia_sheng, jia_ping, yi_sheng
                                      , yi_sheng, jia_ping, jia_sheng
                                      , jia_zui, yi_zui);
    return 0;
}

char most_gesture(int j, int c, int b){
    if(j>c){
        if(j>b){
            return 'J';
        }
        else{
            return 'B';
        }
    }
    else if(j==c){
        if(j>b){
            return 'C';
        }
        else{
            return 'B';
        }
    }
    else{
        if(c<=b){
            return 'B';
        }
        else{
            return 'C';
        }
    }
}
