#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num[10];
    for(int i=0;i<=9;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<9-i;i++)
    {
        int temp=num[i];
        num[i]=num[9-i];
        num[9-i]=temp;
    }
   for(int i=0;i<=9;i++)
   {
       cout<<num[i]<<'\n';
   }
    return 0;

}
