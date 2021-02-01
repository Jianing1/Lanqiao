#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //求最大公约数和最小公倍数
    int a=15;
    int b=40;
    for(int i=a;i>=1;i--){
        if(a%i==0&&b%i==0){
            cout<<i<<" ";//最大公约数
            break;
        }
    }

    return 0;
}