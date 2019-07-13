#include<iostream>
using namespace std;
int arry[8][8],result[100];
int map = 0,index = 0;
void findQueen(int i);
bool check(int k,int j);
void print();
int main() {
    int n;
    findQueen(0);
    while(cin >> n){
        for(int i = 0;i < n;i++){
            int s;
            cin >> s;
            cout << result[s-1] << endl;
        }
    }
}

void findQueen(int i){//寻找皇后节点
    if(i > 7){//八皇后的解
        map++;
        print();//打印八皇后的解
        return;
    }

    for(int m = 0;m < 8;m++){//深度回溯,递归算法
        if(check(i,m)){//检查皇后摆放是否合适
            arry[i][m] = 1;
            findQueen(i+1);
            arry[i][m] = 0;//清零，以免回溯的时候出现脏数据
        }
    }
}

bool check(int k,int j){//判断节点是否合适
    for(int i = 0;i < 8;i++){//检查行列冲突
         if(arry[i][j] == 1){
            return false;
         }
    }
    for(int i = k-1,m = j-1; i >= 0 && m >= 0; i--,m--){//检查左对角线
        if(arry[i][m] == 1){
            return false;
        }
    }
    for(int i = k-1,m = j+1; i >= 0 && m <= 7; i--,m++){//检查右对角线
        if(arry[i][m] == 1){
            return false;
        }
    }
    return true;
}

void print(){
    //cout << "方案" << map << ":" << endl;
    int temp = 0;
    for(int i = 0;i < 8;i++){
        for(int m = 0;m < 8;m++){
            if(arry[i][m] == 1)
                temp = temp * 10 + (m+1);
        }
    }
    result[index++] = temp;
    temp = 0;
}
