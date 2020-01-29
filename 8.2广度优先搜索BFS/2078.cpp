//TK题库答案
#include<iostream>
using namespace std;

int step[1000],sp;//历史步骤及其当前步骤指针
int rstep[1000],rp;
int N;//目标水量
int temp;
int bpa,bpb;//存储执行pour之前的A,B水量
int flag,minstep;

class CupClass
{
public:
    int cx;//最大容量
    int now;//当前水量
    int name;//jug名字（A－0 or B－1）

    int fill()//装满，返回装满前水量
    {
        temp = now;
        now = cx;
        if(name == 0)
        {
            step[sp++] = 1;
        }
        else
        {
            step[sp++] = 2;
        }
        return temp;
    };

    int empty()//清空，返回装满前水量
    {
        temp = now;
        now = 0;
        if(name == 0)
        {
            step[sp++] = 3;
        }
        else
        {
            step[sp++] = 4;
        }
        return temp;
    };
};

////////////////////公共函数声明////////////////////////////
void PrintStep(int target[],int tp);//根据step内容，输出步骤
void pour(CupClass &x,CupClass &y);//从x向y倒水
void solve();//递归&回溯解决，输出至rstep
////////////////////////////////////////////////////////////

CupClass a,b;//建立a,b两个水杯（罐）全局对象

void PrintStep(int target[],int tp)
{
    int i;
    for(i = 0;i < tp;i++)
    {
        switch(target[i])
        {
        case 1: cout << "fill A" << endl;break;
        case 2: cout << "fill B" << endl;break;
        case 3: cout << "empty A" << endl;break;
        case 4: cout << "empty B" << endl;break;
        case 5: cout << "pour A B" << endl;break;
        case 6: cout << "pour B A" << endl;break;
        }
    }
}

void pour(CupClass &x,CupClass &y)
{
    int diff;
    bpa = x.now;
    bpb = y.now;

    diff = y.cx - y.now;
    if(x.now <= diff)
    {

        y.now += x.now;
        x.now = 0;
    }
    else
    {
        x.now -= diff;
        y.now = y.cx;
    }

    if(x.name == 0 && y.name == 1)
    {
        step[sp++] = 5;
    }
    else
    {
        step[sp++] = 6;
    }
}

void solve()
{
    int t,i;
    if(!flag)
    {
        if(b.now == N)
        {
            if(sp < minstep && minstep != 0)
            {
                if(sp == 0 || sp == 1 || sp == 2)
                    flag = 1;
                minstep = sp;
                rp = sp;
                for(i = 0;i < rp;i++)
                {
                    rstep[i] = step[i];
                }
            }
        }
    }

    if(!flag)
    {

        if(a.now < a.cx && (step[sp-1] != 3) && (b.now != b.cx) && !(a.now != 0 && b.now == 0) && b.now != b.cx)
        {/////填满a
            t = a.fill();
            solve();
            sp--;
            a.now = t;
        }

        if(b.now < b.cx && (step[sp-1] != 4) && (a.now != a.cx) && !(b.now != 0 && a.now == 0) && a.now != b.cx)
        {//////填满b
            t = b.fill();
            solve();
            sp--;
            b.now = t;
        }

        if(a.now > 0 && b.now < b.cx && (step[sp-1] != 6) && (step[sp-1] != 5) && sp != 0)
        {////从a倒给b
            pour(a,b);
            solve();
            sp--;
            a.now = bpa;
            b.now = bpb;
        }

        if(b.now > 0 && a.now < a.cx && (step[sp-1] != 5) && (step[sp-1] != 6) && sp != 0)
        {////从b倒给a
            pour(b,a);
            solve();
            sp--;
            a.now = bpa;
            b.now = bpb;
        }

        if(a.now > 0 && (step[sp-1] != 1) && b.now != 0 && !(a.now == N) && sp != 0)
        {//////清空a
            t=a.empty();
            solve();
            sp--;
            a.now=t;
        }

        if(b.now>0 && (step[sp-1]!=2) && a.now!=0 && sp!=0 || (b.now==b.cx && a.now==N))
        {/////清空b
            t=b.empty();
            solve();
            sp--;
            b.now=t;
        }
    }
}

int main()
{
    while(cin >> a.cx >> b.cx >> N)
    {
        a.now = 0;
        b.now = 0;
        a.name = 0;
        b.name = 1;
        sp = 0;
        flag = 0;
        minstep = 99999;
        rp = 0;
        if(N > 0)
            solve();
        if(N != 0)
            PrintStep(rstep,rp);
        cout << "success" << endl;
    }
        return 0;
}
