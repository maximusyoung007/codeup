#include <stdio.h>
#include <string.h>
int main(){
	char str[260];
	scanf("%s",str);
	int len = strlen(str);
	int i,tag = 1;
	for(i = 0;i < len / 2;i++)
		if(str[i] != str[len - i - 1]){
			tag = 0;
			break;
		}
	if(tag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
