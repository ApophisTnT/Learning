#!/usr/bin/env python
#-*- coding:utf-8 -*-
# Author:ApophisTnT


from sklearn import  datasets
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

#引入波士顿房价数据集
boston = datasets.load_boston()
x=boston.data
y=boston.target
x=x[y<50.0]
y=y[y<50.0]

#划分训练集和测试集
x_train,x_test,y_train,y_test = train_test_split(x,y,train_size=0.8,random_state=666)

lin_reg = LinearRegression()
lin_reg.fit(x_train,y_train)


#斜率
print(lin_reg.coef_)
#截距
print(lin_reg.intercept_)
#评价
print(lin_reg.score(x_test,y_test))
