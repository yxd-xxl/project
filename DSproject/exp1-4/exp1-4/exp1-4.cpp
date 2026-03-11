#include <iostream>
using namespace std;

// 计算阶乘
long long factorial(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int n;
    long long sum = 0;

    cout << "请输入n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }

    cout << "1!+2!+...+" << n << "! = " << sum << endl;

    return 0;
}