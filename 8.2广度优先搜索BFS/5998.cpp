//https://blog.csdn.net/ikechan/article/details/81708030
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int matrix[2][4] = {{1, 2, 3, 4}, {8, 7, 6, 5}};
int final[2][4];
struct node{
    int M[2][4];  //进行当前操作后的魔板
    vector<char> bef;  //进行当前操作后的总操作步骤
} Node;
bool same(int a[2][4]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(a[i][j] != final[i][j])
                return false;
        }
    }
    return true;
}
bool Hash[16500000] = {false};
int conv(int a[2][4]){ //八进制转十进制
    int b[8];
    for(int i = 0; i < 4; i++){
        b[i] = a[0][i] - 1;
    }
    for(int i = 4; i < 8; i++){
        b[i] = a[1][i - 4] - 1;
    }
    int num = 0;
    for(int i = 0; i < 8; i++){
        num = num * 8 + b[i];
    }
    return num;
}
void BFS(){
    queue<node> Q;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            Node.M[i][j] = matrix[i][j];
        }
    }
    if(same(Node.M)){   //如果在这不判断，原封不动的结果会是：操作AA，步数为2
        cout << '0' << endl;
        cout << endl;
        return ;
    }
    Q.push(Node);
    while(!Q.empty()){
        node top = Q.front();
        Q.pop();
        //A
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                Node.M[i][j] = top.M[1 - i][j];
            }
        }
        if(!Hash[conv(Node.M)]){
            Hash[conv(Node.M)] = true;
            Node.bef = top.bef;
            Node.bef.push_back('A');
            if(same(Node.M)){
                cout << Node.bef.size() << endl;
                for(int i =  0; i < Node.bef.size(); i++){
                    if(i > 0 && i % 60 == 0)
                        cout << endl;
                    cout << Node.bef[i];
                }
                Node.bef.clear();// 不清空会导致下一组数据是接在前一组后面的，下面BC同理
                cout << endl;
                return;
            }
            Q.push(Node);
        }
        //B
        for(int i = 0; i < 2; i++){
            for(int j = 1; j < 4; j++){
                Node.M[i][j] = top.M[i][j - 1];
            }
        }
        Node.M[0][0] = top.M[0][3];
        Node.M[1][0] = top.M[1][3];
        if(!Hash[conv(Node.M)]) {
            Hash[conv(Node.M)] = true;
            Node.bef = top.bef;
            Node.bef.push_back('B');
            if(same(Node.M)){
                cout << Node.bef.size() << endl;
                for(int i =  0; i < Node.bef.size(); i++){
                    if(i > 0 && i % 60 == 0)
                        cout << endl;
                    cout << Node.bef[i];
                }
                Node.bef.clear();
                cout << endl;
                return;
            }
            Q.push(Node);
        }
        //C
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                Node.M[i][j] = top.M[i][j];
            }
        }
        Node.M[0][1] = top.M[1][1];
        Node.M[0][2] = top.M[0][1];
        Node.M[1][1] = top.M[1][2];
        Node.M[1][2] = top.M[0][2];
        if(!Hash[conv(Node.M)]){
            Hash[conv(Node.M)] = true;
            Node.bef = top.bef;
            Node.bef.push_back('C');
            if(same(Node.M)){
                cout << Node.bef.size() << endl;
                for(int i =  0; i < Node.bef.size(); i++){
                    if(i > 0 && i % 60 == 0)
                        cout << endl;
                    cout << Node.bef[i];
                }
                Node.bef.clear();
                cout << endl;
                return;
            }
            Q.push(Node);
        }
    }
}
int main(){
    while(cin >> final[0][0]){
        for(int i = 0; i < 16500000; i++){
            Hash[i] = false;
        }
        for(int i = 1; i < 4; i++){
            cin >> final[0][i];
        }
        for(int i = 0; i < 4; i++){
            cin >> final[1][3 - i];
        }
        BFS();
    }

    return 0;
}
