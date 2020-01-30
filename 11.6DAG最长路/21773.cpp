/*
版权声明：本文为CSDN博主「晨子衿」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/qq_36502291/article/details/88875468
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int INF = 1e9;
struct Node {
    int a, b;
    Node(int x, int y) : a(x), b(y) {}
};
int dp[1050], n;
vector<Node> G;

int DP(int i) {
    if (dp[i] > 0) return dp[i];
    for (int j = 0; j < n; j++) {
        if (G[i].a > G[j].a&&G[i].b > G[j].b) {
            dp[i] = max(dp[i], DP(j) + 1);
        }
    }
    return dp[i];
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        cin >> n;
        fill(dp, dp + n, 0);//勿忘初始化
        G.clear();
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x < y) swap(x, y);
            G.push_back(Node(x, y));
        }
        int len = -INF;
        for (int i = 0; i < n; i++) {
            dp[i] = DP(i);
            len = max(len, dp[i]);
        }
        cout << len + 1 << endl;
    }
    return 0;
}
