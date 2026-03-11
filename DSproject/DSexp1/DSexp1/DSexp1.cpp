#include <iostream>
#include <ctime>
using namespace std;

// 方法1：循环累加
long long sum_loop(long long n)
{
    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// 方法2：公式计算
long long sum_formula(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    long long n;
    cout << "请输入n: ";
    cin >> n;

    long long result;

    // 记录循环算法时间
    clock_t start1 = clock();
    result = sum_loop(n);
    clock_t end1 = clock();

    cout << "循环算法结果: " << result << endl;
    cout << "循环算法时间: "
        << (double)(end1 - start1) / CLOCKS_PER_SEC
        << " 秒" << endl;

    // 记录公式算法时间
    clock_t start2 = clock();
    result = sum_formula(n);
    clock_t end2 = clock();

    cout << "公式算法结果: " << result << endl;
    cout << "公式算法时间: "
        << (double)(end2 - start2) / CLOCKS_PER_SEC
        << " 秒" << endl;

    return 0;
}