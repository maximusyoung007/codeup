#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int result[210];
int num[210];

int main()
{
	int n, m;
	while(cin >> n >> m){
        int a;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            result[i] = a;
            num[a]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(num[result[i]] == 1)
                cout << "BeiJu" << endl;
            else
                cout << num[result[i]-1] << endl;
        }
        //
        memset(result,0,sizeof(int)*210);
        memset(num,0,sizeof(int)*210);
    }
	return 0;
}
