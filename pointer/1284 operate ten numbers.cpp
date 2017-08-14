#include <iostream>
using namespace std;
int in_put(int *a)
{
    int i;
    for(i=0;i<10;i++)
        cin>>a[i];
}
int out_put(int *a)
{
    int i;
    for(i=0;i<10;i++)
        {
            cout<<a[i]<<" ";
        }
}
void exchange(int a[])
{
	int i,t;
	int *min_pos,*max_pos;
	min_pos=a;
	for(i=0;i<10;i++)
    {
        if(a[i]<*min_pos) min_pos=a+i;
    }
    max_pos=a;
    for(int i=0;i<10;i++)
    {
        if(a[i]>*max_pos)max_pos=a+i;
    }
    t=a[0];a[0]=*min_pos;*min_pos=t;
    t=a[9];a[9]=*max_pos;*max_pos=t;
}

int main()
{
    int a[10];
    in_put(a);
    exchange(a);
    out_put(a);
    cout<<'\n';
    return 0;
}
