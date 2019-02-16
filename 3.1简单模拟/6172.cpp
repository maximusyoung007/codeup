//答案错误43%，不知道哪里错了...
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int aWin = 0,bWin = 0,noWin = 0;
    int aWinC = 0,aWinB = 0,aWinJ = 0;
    int bWinC = 0,bWinB = 0,bWinJ = 0;
    for(int i = 0;i < n;i++){
        char a,b;
        cin >> a >> b;
        if(a == 'C' && b == 'J'){
            aWin++;
            aWinC++;
        }
        else if(a == 'J' && b == 'B'){
            aWin++;
            aWinJ++;
        }
        else if(a == 'B' && b == 'C'){
            aWin++;
            aWinB++;
        }
        else if(b == 'C' && a == 'J'){
            bWin++;
            bWinC++;
        }
        else if(b == 'J' && a == 'B'){
            bWin++;
            bWinJ++;
        }
        else if(b == 'B' && a == 'C'){
            bWin++;
            bWinB++;
        }
        else if((a == 'C' && b == 'C') || (a == 'J' && b == 'J') || (a == 'B' && b == 'B'))
            noWin++;
    }
    printf("%d %d %d\n",aWin,noWin,bWin);
    printf("%d %d %d\n",bWin,noWin,aWin);
    if(aWinB >= aWinC)
        printf("B ");
    else if(aWinC >= aWinJ)
        printf("C ");
    else printf("J ");
    if(bWinB >= bWinC)
        printf("B");
    else if(bWinC >= bWinJ)
        printf("C");
    else
        printf("J");
    return 0;
}
