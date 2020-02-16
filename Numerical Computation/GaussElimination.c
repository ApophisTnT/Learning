////
//// Created by Deserve on 2019/4/11.
////
//#include <stdio.h>
//
//float Elminate(int Row, int Column, float array[][100]) {
//    //消元过程
//    //col-1意味着只循环系数
//    float l;
//    for (int k = 0; k < Column - 1; ++k) {
//        for (int i = k + 1; i < Row; ++i) {
//
//            //求顺序主子式
//            l = array[i][k] / array[k][k];
//
//            for (int j = 0; j < Column; ++j) {
//                //各行的各项都要减
//                array[i][j] = array[i][j] - l * array[k][j];
//
//            }
//        }
//    }
//    return **array;
//
//}
//
//
//float Substitute(int Row, float x[], float array[][100]) {
//    //回代过程
//    //直接解出的x值
//    int n = Row - 1;
//    x[n] = array[n][n + 1] / array[n][n];
//    for (int k = n - 1; k >= 0; --k) {
//        float sumtemp = 0;
//        for (int j = k + 1; j <= n; ++j) {
//            sumtemp = sumtemp + array[k][j] * x[j];
//
//        }
//        //其余x值
//        x[k] = (array[k][n + 1] - sumtemp) / array[k][k];
//
//
//    }
//    return *x;
//}
//
//
//int main() {
//    int row, col;
//    float A[100][100] = {}, x[100];
//    printf("请输入增广矩阵的行数和列数:");
//    scanf("%d%d", &row, &col);
//    printf("请输入增广矩阵:\n");
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            scanf("%f", &A[i][j]);
//        }
//    }
//
//    Elminate(row, col, A);
//    Substitute(row, x, A);
//
//    printf("线性方程组的解为:\n");
//    for (int m = 0; m < 3; ++m) {
//        printf("x(%d)=%.3f\t", m, x[m]);
//    }
//
//}
//
//
