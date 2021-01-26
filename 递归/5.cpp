#include <iostream>
using namespace std;
//求a数组中从begin到结束的元素和
//1.a[begin]+(begin+1->结束)
//2.(a[0]->end-1)+a[end]
//3.折半求和,mid=(begin+end)/2,[begin,mid)+[mid,end)
int f(int *a,int begin, int length)
{
    if (begin == length)
        return 0;
    //踢皮球【.[.[...]]】找人求n-1项然后加上自己的那个项
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
