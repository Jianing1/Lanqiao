#include <iostream>
using namespace std;
int f(int m, int n) //m������ȡn���ж����ַ�ʽ m>n
//����������1����������һ�ֵ�ȡ������������򲻰���������
//����������:��m-1������ȡ��n-1����������������:��m-1������ȡn���������������Ϊ�ݹ�����
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
