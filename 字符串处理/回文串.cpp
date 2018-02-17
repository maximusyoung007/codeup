#include<cstdio>
#include<string.h>
bool judge(char s[])
{
    int len = strlen(s);
    for(int i = 0;i < len / 2;i++){
        if(s[i] == s[len - 1 - i])
            return true;
        else if(s[i] != s[len - 1 - i])
            return false;
    }
}
int main()
{
    char a[257];
    while(gets(a))
    {
        bool compare = judge(a);
        if(compare == false)printf("NO");
        else if(compare == true)printf("YES");
    }
    return 0;
}
