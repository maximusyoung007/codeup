#include<iostream>
using namespace std;
void input(int *a)
{
    int i;
    for(i = 0;i < 10;i++){
        cin >> *(a + i);
    }
}
void find(int *a)
{
    int *i,*max = a,*min = a,temp;
    for(i = a + 1;i < a + 10;i++){
        if(*i > *max){
            max = i;
        }
        if(*i < *min){
            min = i;
        }
    }
    temp = *a;
    *a = *min;
    *min = temp;
    temp = *(a + 9);
    *(a + 9) = *max;
    *max = temp;
}
void output(int *a)
{
    int i;
    for(i = 0;i < 10;i++){
        cout << *(a + i) << ' ';
    }
    cout << '\n';
}
int main()
{
    int a[20];
    input(a);
    find(a);
    output(a);
    return 0;
}
