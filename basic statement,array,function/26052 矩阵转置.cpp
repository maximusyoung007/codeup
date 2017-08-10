#include <iostream>
using namespace std;
int main()
{
    int array[2][3];

    int i,j;

    //获取用户的输入来填充数组A
    for(i = 0;i < 2;i++){
        for(j = 0;j < 3;j++){


            cin>>array[i][j];
        }
    }

    //定义数组B
    int MatrixB[3][2];

    //进行转置
    /**
     *  两个数组如果相互转置的话，
     *  则一个数组的行等于另一个数组的列
     *  一个数组的列等于另一个数组的行
     *  注意：
     *  转置之后的矩阵的行数和列数为转置之前的列数和行数
     */
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            MatrixB[i][j] = array[j][i];
        }
    }

    //输出矩阵B
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            cout<<MatrixB[i][j]<<" ";
        }

        cout<<'\n';
    }

    return 0;
}
