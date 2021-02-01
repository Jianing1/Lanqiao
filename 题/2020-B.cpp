#include<iostream>
using namespace std;
int f(int a,int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    int sum=0;
    for(int i=1; i<=2020; i++)
    {
        for(int j=1; j<=2020; j++)
        {
            if(f(i,j)==1)
            {
                sum++;
            }
        }
    }
   cout<<sum;
    return 0;
}
