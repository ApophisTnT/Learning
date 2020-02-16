////
//// Created by Deserve on 2019/4/12.
////
//
//
//#include <stdio.h>
//#include <malloc.h>
//float Substitute1(int Row, float x[], float *array[]) {
//    //回代过程
//    //直接解出的x值
//    int n = 0;
//    x[n] = array[n][Row] / array[n][n];
//    for (int k = 1; k <Row; ++k) {
//        float sumtemp = 0;
//        for (int j = 0; j <k; ++j) {
//            sumtemp = sumtemp + array[k][j] * x[j];
//
//        }
//        //其余x值
//        x[k] = (array[k][Row] - sumtemp) / array[k][k];
//
//
//    }
//    return *x;
//}
//float Substitute2(int Row, float x[], float *array[]) {
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
//int main() {
//    int row,col;
//
//    printf("请输入系数矩阵的行数和列数:");
//    scanf("%d%d",&row,&col);
//    float **A=(float**)malloc(row* sizeof(float));
//    for(int i=0;i<row;++i){
//        A[i] = (float*)malloc(col*sizeof(float));
//    }
//    printf("请输入系数矩阵:\n");
//    for (int i = 0; i <row ; ++i) {
//        for (int j = 0; j < col; ++j) {
//            scanf("%f",&A[i][j]);
//        }
//    }
//
//
//    float  **L=(float**)malloc(row* sizeof(float)), **U=(float**)malloc(row* sizeof(float)),b[row],x[row];
//    for (int n = 0; n < row; ++n) {
//        L[n]=(float*)malloc((col+1)* sizeof(float));
//        U[n]=(float*)malloc((col+1)* sizeof(float));
//
//    }
//    printf("请输入方程式的值:");
//    for (int i = 0; i <row ; ++i) {
//        scanf("%f",&b[i]);
//    }
//
//    //U矩阵的第一行与L矩阵的第一列相对固定，先将其求出
//    for (int i = 0; i < row; ++i) {
//        U[0][i] = A[0][i];
//    }
//    for (int i = 0; i < row; ++i) {
//        L[i][0] = A[i][0] / U[0][0];
//    }
//
//
//
//    //矩阵分解过程
//    for (int k = 1; k < row; ++k) {
//        //求U矩阵
//        for (int j = k; j < col; ++j) {
//            float sum = 0;
//            for (int i = 0; i < k; ++i) {
//                sum = sum + L[k][i] * U[i][j];
//
//            }
//            U[k][j] = A[k][j] - sum;
//
//        }
//
//        //求L矩阵
//        for (int i = k + 1; i < row; ++i) {
//            float sum = 0;
//            for (int j = 0; j < k; ++j) {
//                sum = sum + L[i][j] * U[j][k];
//            }
//            L[i][k] = (A[i][k] - sum) / U[k][k];
//        }
//
//
//    }
//
//
//    //根据L矩阵和U矩阵的不同特点调整其值
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            if(i>j) U[i][j]=0;
//            if(i<j) L[i][j]=0;
//            if(i==j) L[i][j]=1;
//        }
//    }
//
//    //求解
//    for (int i = 0; i < col; ++i) {
//        L[i][col]=b[i];
//    }
//    Substitute1(row,x,L);
//
//    for (int i = 0; i < col; ++i) {
//        U[i][col]=x[i];
//    }
//    Substitute2(row,x,U);
//
//
//
//
//
//    //输出L矩阵和U矩阵
//    printf("L矩阵为:\n");
//    for (int l = 0; l <row; ++l) {
//        for (int i = 0; i < col; ++i) {
//            printf("%f\t", L[l][i]);
//        }
//        printf("\n");
//    }
//    printf("U矩阵为:\n");
//    for (int l = 0; l <row; ++l) {
//        for (int i = 0; i < col; ++i) {
//            printf("%f\t", U[l][i]);
//        }
//        printf("\n");
//    }
//
//    //输出结果
//    for (int m = 0; m <row ; ++m) {
//        printf("x%d=%f\t",m+1,x[m]);
//    }
//
//
//}
//
//
