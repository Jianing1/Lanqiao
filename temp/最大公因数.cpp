#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //�����Լ������С������
    int a=15;
    int b=40;
    for(int i=a;i>=1;i--){
        if(a%i==0&&b%i==0){
            cout<<i<<" ";//���Լ��
            break;
        }
    }

    return 0;
}