#!/usr/bin/env python
# -*- coding:utf-8 -*-
# Author:ApophisTnT
import numpy as np


def confusion_matrix(y_true,y_predict):

    #初始化混淆矩阵
    result = np.array([[0, 0], [0, 0]])

    #判断过程
    for i,j in zip(y_true,y_predict):
        if i == j == 0: result[0][0] += 1
        if i == 1 != j: result[0][1] += 1
        if i == 0 != j: result[1][0] += 1
        if i == j == 1: result[1][1] += 1

    #输出混淆矩阵
    print(result)


if __name__ == '__main__':

    #输入操作
    y_true_input=input().split(",")
    y_predict_input=input().split(",")

    #将输入数据转换为列表
    y_true_input=[int(y_true_input[i]) for i in range(len(y_true_input))]
    y_predict_input=[int(y_predict_input[i]) for i in range(len(y_predict_input))]

    #将列表转化为ndarray数组
    y_true_input = np.array(y_true_input)
    y_predict_input = np.array(y_predict_input)

    #构建混淆矩阵
    confusion_matrix(y_true_input,y_predict_input)
