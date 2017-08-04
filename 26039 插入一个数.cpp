#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int input_num;
    for(int i=0;i<=8;i++)
    {
        cin>>a[i];
    }
    cin>>input_num;
    //从最大的数开始遍历，如果插入的数小于当前数，就把当前数填到下一个位置，如果大于当前数，就把插入的数填到下一个位置
    for(int j=8;j>=0;j--)
    {
        if(input_num<a[j])
            a[j+1]=a[j];
        else if(input_num>=a[j])
            {
                a[j+1]=input_num;
                break;
            }
    }
    for(int n=0;n<=9;n++)
    {
        cout<<a[n]<<'\n';
    }
    return 0;
}
