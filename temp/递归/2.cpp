#include <iostream>
using namespace std;
//��n��Ԫ�ص�ȫ����
void f(char *a, int k, int length)
{

    if (k == length - 1)
    {
        for (int i = 0; i < length; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    for (int i = k; i < length; i++)
    {
        {
            char temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
        f(a, k + 1, 3);
        {
            char temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
        
    }
}
int main()
{
    char a[] = "abc";
    f(a, 0, 3);
    return 0;
}