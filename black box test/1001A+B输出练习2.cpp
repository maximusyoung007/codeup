#include <iostream>
int main()
{
    int num,a,b;
    std::cin>>num;
    while((num--)>0)//给出了测试数据的组数，while((num--)>0)等同于while(num--)
    {
        std::cin>>a>>b;
        std::cout<<a+b<<'\n';
    }
    return 0;
}
