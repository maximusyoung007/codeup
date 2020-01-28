//TK题库答案
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int a[64];
int t[1 << 15];
int n;
char str[1024];

int cmp(const void *a,const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int i,j,k,n1,n2,l,r,m,s,ret;
	char *p;
	while(gets(str)) {
		for(i = 0;str[i];i++)
            if (!isdigit(str[i]) && str[i] != ' ')
                break;
		if (str[i]) {
			puts("ERROR");
			continue;
		}
		for(p = strtok(str," "),s = n = 0;p;n++,p = strtok(NULL," ")) {
			sscanf(p,"%d",&a[n]);
			s += a[n];
		}

		n1 = n - n / 2,n2 = n - n1,ret = s;
		for(i = 0;i < (1 << n1);i++) {
			for(j = k = 0;j < n1;j++) if (i & (1 << j)) k += a[j];
			t[i] = k;
		}
		qsort(t,m = 1 << n1,sizeof(t[0]),cmp);
		for(i = 0;i < (1 << n2);i++) {
			for(j = k = 0;j < n2;j++)
                if (i & (1 << j))
                    k += a[n1 + j];
			for(l = 0,r = m;l<r;) {
				int tt = k + t[(l + r) / 2];
				if (tt < s - tt)
                    l = (l + r) / 2 + 1;
                else
                    r = (l + r) / 2;
			}
			if (l < m && k + t[l] - (s - k - t[l]) < ret)
                ret = k + t[l] - (s - k - t[l]);
			if (l > 0 && s - k - t[l - 1] - k - t[l - 1] < ret)
                ret = s - k - t[l - 1] - k - t[l - 1];
		}
		printf("%d %d\n",(s + ret) / 2,(s - ret) / 2);
	}
	return 0;
}
