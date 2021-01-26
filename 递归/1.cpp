#include <iostream>
using namespace std;
int f(int m, int n) //m个球中取n个有多少种方式 m>n
//假设求中有1个特殊球，任一种的取法包含特殊球或不包含特殊球
//包含特殊球:在m-1个球中取得n-1个，不包含特殊球:在m-1个球中取n个，这两种情况作为递归条件
{
    if (n > m)
        return 0;
    if (m == n)
        return 1;
    if (n == 0)
        return 1;
    return f(m - 1, n - 1) + f(m - 1, n);
}
int main()
{
    int x = f(10, 3);
    cout << x;
}
