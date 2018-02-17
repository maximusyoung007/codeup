#include <cstdio>

int main(void){
    char str[100];
    long long data;
    long long tmp;
    int a, b;
    int i;

    while (scanf ("%d %s %d", &a, str, &b) != EOF){
        data = 0;
        for (i=0; str[i]; ++i){
            if (str[i] >= 'a')
                str[i] -= 32;
            tmp = (str[i] <= '9' && str[i] >= '0') ? str[i] - '0' : str[i] - 'A' + 10;
            data = data * a + tmp;
        }
        if (data == 0){
            puts ("0");
            continue;
        }
        i = 0;
        while (data != 0){
            tmp = data % b;
            str[i] = (tmp >= 10) ? tmp - 10 + 'A' : tmp + '0';
            ++i;
            data /= b;
        }
        --i;
        while (i >= 0){
            putchar(str[i]);
            --i;
        }
        putchar('\n');
    }
   return 0;
}
