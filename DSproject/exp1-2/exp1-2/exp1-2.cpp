#include <iostream>
#include <cmath>
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

    cout << "请输入n的最大值: ";
    cin >> n;

    cout << "n\tlog2(n)\tsqrt(n)\tn\tnlog2(n)\tn^2\t2^n\tn!" << endl;

    for (int i = 1; i <= n; i++)
    {
        double logn = log2(i);
        double sqrtn = sqrt(i);
        double nlogn = i * log2(i);
        double square = i * i;
        double power = pow(2, i);
        long long fact = factorial(i);

        cout << i << "\t"
            << logn << "\t"
            << sqrtn << "\t"
            << i << "\t"
            << nlogn << "\t"
            << square << "\t"
            << power << "\t"
            << fact << endl;
    }

    return 0;
}