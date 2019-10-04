#include<iostream>
#include<cstdio>
#include<utility>
#include<iomanip>
using namespace std;
int main()
{
    pair<double,double> p1;
    pair<double,double> p2;
    pair<double,double> p3;
    pair<double,double> result;
    int n;
    while(cin >> n && n != 0){
        for(int i = 0;i < n;i++){
            cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second;
            result.first = (p1.first + p2.first + p3.first) / 3;
            result.second = (p1.second + p2.second + p3.second) / 3;
            printf("%.1f %.1f\n",result.first,result.second);
        }
    }
    return 0;
}
