import numpy as np
import matplotlib.pyplot as plt

# 数据
X = np.array([1, 2, 3, 4, 5])
Y = np.array([50, 55, 60, 65, 70])

# 计算平均值
X_mean = np.mean(X)
Y_mean = np.mean(Y)

# 计算斜率 beta1
beta1 = np.sum((X - X_mean) * (Y - Y_mean)) / np.sum((X - X_mean) ** 2)

# 计算截距 beta0
beta0 = Y_mean - beta1 * X_mean

print("斜率 β1 =", beta1)
print("截距 β0 =", beta0)

# 预测值
Y_pred = beta0 + beta1 * X

# 计算损失函数 MSE
loss = np.mean((Y - Y_pred) ** 2)
print("Loss =", loss)

# 预测学习6小时的成绩
x_new = 6
y_new = beta0 + beta1 * x_new
print("学习6小时预测成绩 =", y_new)

plt.figure(figsize = (8,6))
plt.scatter(X,Y,color = 'blue',label = '原始数据')
plt.plot(X,Y_pred,color = 'red',label = '拟合直线')
plt.title("chat")
plt.xlabel("X")
plt.ylabel("Y")
plt.legend()
plt.show()