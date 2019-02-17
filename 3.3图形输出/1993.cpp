#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    gets(str);
    int N = strlen(str);
    int n1 = (N + 2) / 3, n3 = n1,n2 = N + 2 - n1 - n3;
    for (int i = 0; i < n1 - 1; i++){
        printf("%c", str[i]);
        for (int j = 0; j < n2 - 2; j++){
            printf(" ");
        }
        printf("%c\n", str[N - i - 1]);
    }
    for (int i = n1 - 1; i <= n2 + n1 - 2; i++){
        printf("%c", str[i]);
  }
    return 0;
}
