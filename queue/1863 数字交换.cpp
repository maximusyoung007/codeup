#include<iostream>
using namespace std;

int main()
{
    int a[10],min = 0,max = 0;
    for(int i = 0;i < 10;i++){
        cin >> a[i];
        if(a[i] < a[min])min = i;
    }
    swap(a[0],a[min]);
    for(int i = 0;i < 10;i++){
        if(a[i] > a[max])max = i;
    }
    swap(a[max],a[9]);
    for(int i = 0;i < 10;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
