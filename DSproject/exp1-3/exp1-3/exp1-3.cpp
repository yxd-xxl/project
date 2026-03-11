#include <iostream>
using namespace std;

// 判断是否为素数
bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    int count = 0;

    cout << "请输入n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    cout << "1到" << n << "之间的素数个数为: " << count << endl;

    return 0;
}