#include <cstdio>
#include <iostream>
#include <cstring>
#define MAX 110
using namespace std;
int a1[MAX],a2[MAX],b1[MAX],b2[MAX];

string a,b;
int main(){
	int m;
	while(scanf("%d",&m) != EOF){
		while(m-- > 0){
			cin >> a >> b;
			int pos1 = a.find('.');
			int pos2 = b.find('.');

			int a1_size = 0;
			for(int i = pos1-1;i >= 0;i--){
				a1[a1_size++] = a[i]-'0';
			}
			int b1_size = 0;
			for(int i = pos2-1;i >= 0;i--){
				b1[b1_size++] = b[i]-'0';
			}
			int a2_size = 0;
			for(int i = pos1 + 1;i < a.size();i++){
				a2[a2_size++] = a[i]-'0';
			}
			int b2_size = 0;
			for(int i = pos2+1;i < b.size();i++){
				b2[b2_size++] = b[i]-'0';
			}

			int maxd,maxi,carry=0;
			if(a2_size >= b2_size){
				maxd = a2_size;
			} else{
				maxd = b2_size;
			}
			for(int i = maxd - 1;i >= 0;i--){
				int temp = a2[i] + b2[i] + carry;
				a2[i] = temp % 10;
				carry = temp / 10;
			}
			int real_max = maxd;
			for(int i = maxd-1;i >= 0;i--){
				if(a2[i] == 0){
					real_max--;
				}else{
					break;
				}
			}
			if(a1_size >= b1_size){
				maxi = a1_size;
			}else{
				maxi = b1_size;
			}

			for(int i = 0;i < maxi;i++){
				int temp = a1[i] + b1[i] + carry;
				a1[i] = temp % 10;
				carry = temp / 10;
			}
			if(carry != 0){
				a1[maxi++] = carry;
			}

			for(int i = maxi - 1;i >= 0;i--){
				cout << a1[i];
			}
			cout << ".";

			for(int i = 0;i < real_max;i++){
				cout << a2[i];
			}
			cout << endl;
			memset(a1,0,sizeof(a1));
			memset(a2,0,sizeof(a2));
			memset(b1,0,sizeof(b1));
			memset(b2,0,sizeof(b2));
		}
	}
	return 0;
}
