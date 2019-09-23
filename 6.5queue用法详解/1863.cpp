#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[15];
	for(int i = 0;i < 10;i++){
		scanf("%d",&a[i]);
	}
	int index_min = 0;
	int index_max = 0;
	int min = a[0];
	int max = a[0];
	for(int i = 0;i < 10;i++){
		if(a[i] < min){
			min = a[i];
			index_min = i;
		}
		if(a[i] > max){
			max = a[i];
			index_max = i;
		}
	}
	
	int temp1 = a[index_min];
	a[index_min] = a[0];
	a[0] = temp1;
	//如果第一个数是最大的，则交换完最小数后，最大数的位置为最小数原来的位置
	if(index_max == 0)
		index_max = index_min;
	int temp2 = a[index_max];
	a[index_max] = a[9];
	a[9] = temp2;
	
	for(int i = 0;i < 10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}