#include <iostream>
using namespace std;
//��a�����д�begin��������Ԫ�غ�
//1.a[begin]+(begin+1->����)
//2.(a[0]->end-1)+a[end]
//3.�۰����,mid=(begin+end)/2,[begin,mid)+[mid,end)
int f(int *a,int begin, int length)
{
    if (begin == length)
        return 0;
    //��Ƥ��.[.[...]]��������n-1��Ȼ������Լ����Ǹ���
    int x = f(a, begin + 1,6);
    return x + a[begin];
}
int f2(int *a,int end)
{
    if(end==-1)
        return 0;
    int x=f2(a,end-1);
    return x+a[end];
}
int main()
{
    int a[] = {6, 6, 6, 6, 6, 6};
    //int sum = f(a,0,6);
    int sum=f2(a,5);
    cout << sum;
}
