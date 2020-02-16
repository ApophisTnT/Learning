////
//// Created by Deserve on 2019/5/15.
////
//#include <stdio.h>
//#include <malloc.h>
//int main(){
//    int num=0;
//    float needx=0,result=0;
//    float *x =(float*)malloc(num* sizeof(float));
//    float *y =(float*)malloc(num* sizeof(float));
//
//
//    printf("请输入插值点的个数:\n");
//    scanf("%d",&num);
//    printf("请输入插值点的横坐标:\n");
//    for (int i = 0; i <num ; ++i) {
//        scanf("%f",&x[i]);
//    }
//    printf("请输入插值点的纵坐标:\n");
//    for (int i = 0; i <num ; ++i) {
//        scanf("%f",&y[i]);
//    }
//    printf("请输入待求函数值的自变量值:\n");
//    scanf("%f",&needx);
//
//
//
//    //求拉格朗日多项式
//
//    for (int i = 0; i <num ; ++i) {
//        float temp=1;
//        for (int j = 0; j < num; ++j) {
//            if(i!=j)
//                temp=temp*((needx-x[j])/(x[i]-x[j]));
//        }
//     result=result+y[i]*temp;
//    }
//    printf("result=%f",result);
//
//
//}
