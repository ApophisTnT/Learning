////
//// Created by Deserve on 2019/3/27.
////
//#include <stdio.h>
//#include <math.h>
//
//double f(double x) {
//    double result;
//    //牛顿迭代公式
//    result = x - (pow(x, 3) + 4 * pow(x, 2) - 10 )/ (3 * pow(x, 2) + 8 * x);
//    return result;
//}
//
//int main() {
//    double x = 10, y;
//    int p = 0;
//    do {
//        y = x;
//        x = f(x);
//        p++;
//    } while (fabs(x - y) > 0.5e-5);
//    printf("结果为%.5lf\n迭代次数为%d", y, p);
//
//}
//
//
