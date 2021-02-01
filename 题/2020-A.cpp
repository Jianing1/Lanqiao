#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for(int i=1; i<=2020; i++)
    {
        int a=i;
        while (a != 0)
        {
            if (a % 10 == 2)
                sum++;
            a = a / 10;
        }
    }
    cout<<sum;
    return 0;
}
