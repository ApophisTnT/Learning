#!/usr/bin/env python
# -*- coding:utf-8 -*-
# Author:ApophisTnT
import numpy as np


def precision_score(y_true, y_predict):
    #初始化
    numerator = 0
    denominator = 0

    #统计
    for i, j in zip(y_true, y_predict):
        if i == j == 1:
            numerator += 1
            denominator += 1
        if i != j == 1:
            denominator += 1

    result = numerator / denominator
    print(round(result,6))



def recall_score( y_true ,y_predict):
    numerator = 0
    denominator = 0
    for i, j in zip(y_true, y_predict):
        if i == j == 1:
            numerator += 1
            denominator += 1
        if i == 1 != j:
            denominator += 1
    result = numerator / denominator
    print(round(result,6))


if __name__ == '__main__':
    # 输入操作
    y_true_input = input().split(",")
    y_predict_input = input().split(",")

    # 将输入数据转换为列表
    y_true_input = [int(y_true_input[i]) for i in range(len(y_true_input))]
    y_predict_input = [int(y_predict_input[i]) for i in range(len(y_predict_input))]

    # 将列表转化为ndarray数组
    y_true_input = np.array(y_true_input)
    y_predict_input = np.array(y_predict_input)

    #计算准确率和召回率
    precision_score(y_true_input,y_predict_input)
    recall_score(y_true_input,y_predict_input)
