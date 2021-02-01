#include <iostream>
using namespace std;
bool isRunYear(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
        return true;
    }
    return false;
}
int getday(int year, int month)
{
    int a[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isRunYear(year))
    {
        return 29;
    }
    return a[month];
}
int changeweek(int &week)
{
    week++;
    if (week == 8)
        week = 1;
}
int main()
{
    int week = 6;
    int sum1=0;//天数
    int sum2=0;//额外跑的数量
    for (int i = 2000; i <= 2020; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            for (int k = 1; k <= getday(i, j); k++)
            {
                if (k==1||week==1)
                {
                    sum2++;
                }//要先判断
                sum1++;
                changeweek(week);
                if(i==2020&&j==10&&k==1)
                {
                    cout<<sum1+sum2;
                    break;
                }
            }
        }
    }
    return 0;
}
