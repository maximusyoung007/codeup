#include <cstdio>

int main() {

    int n;
    int m;
    int buf[101];
    int search[101];

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &buf[i]);
        }
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &search[i]);
        }
        for (int i = 0; i < m; i++) {
            int j;
            for (j = 0; j < n; j++) {
                if (buf[j] == search[i]) {
                    printf("YES\n");
                    break;
                }
            }
            if (j == n) {
                printf("NO\n");
            }
        }

    }
    return 0;
}
