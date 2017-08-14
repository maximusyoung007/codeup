#include <iostream>
using namespace std;
int main()
{
    char *a="I love China!";
    int n;
    cin>>n;
    if(n>=0&&n<13){
            a=a+n;
            cout<<a;
    }
    else cout<<"wrong!"<<endl;
    return 0;
}
