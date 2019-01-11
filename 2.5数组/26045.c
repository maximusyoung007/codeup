#include<stdio.h>
int main ()
{
	int i = 0;
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	while((str1[i] == str2[i]) && (str1[i] != '\0')){
		i++;
	}
	if((str1[i] == '\0') && (str2[i]== '\0')){
		printf("0\n");
	}
	else{
		printf("%d\n",str1[i] - str2[i]);
	}
	return 0;
}
