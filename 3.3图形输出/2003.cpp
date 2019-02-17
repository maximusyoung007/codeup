#include<cstdio>
int main(){
	int h,n;
	scanf("%d",&n);
	while(n--){
        scanf("%d",&h);
		for(int i = 1;i <= h;i++){
            int j;
			for(j = 0;j < h - i;j++){
				printf(" ");
			}
			for(j = 0;j < h + (i - 1) * 2;j++){
				printf("*");
			}
			for(j = 0;j < h - i;j++){
				printf(" ");
			}
				printf("\n");
		}
	}
	return 0;
}
