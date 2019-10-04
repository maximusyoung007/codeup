#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
stack<char> symbol;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            string s;
            cin >> s;
            bool result;
            while(!symbol.empty())
                symbol.pop();
            for(int j = 0;j < s.length();j++){
                if(s[j] == '(' || s[j] == '[' || s[j] == '{'){
                    symbol.push(s[j]);
                }
                else if(s[j] == ')' && !symbol.empty()){
                    if(symbol.top() == '('){
                        symbol.pop();
                        result = true;
                    }
                    else if(symbol.top() != '('){
                        result = false;
                        break;
                    }
                }
                else if(s[j] == ']' && !symbol.empty()){
                    if(symbol.top() == '['){
                        symbol.pop();
                        result = true;
                    }
                    else if(symbol.top() != '['){
                        result = false;
                        break;
                    }
                }
                else if(s[j] == '}' && !symbol.empty()){
                    if(symbol.top() == '{'){
                        symbol.pop();
                        result = true;
                    }
                    else if(symbol.top() != '{'){
                        result = false;
                        break;
                    }
                }
                else if((s[i] == '}' || s[i] == ']' || s[i] == ')') && symbol.empty())
                    result = false;
            }
            if(result)
                printf("yes\n");
            else if(!result)
                printf("no\n");
        }
    }
}
