#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum1=0;
    int sum2=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=60){
            sum1++;
        }
        if(a[i]>=85){
            sum2++;
        }
    }
    cout<<(int)(((double)sum1*100/n)+0.5)<<"%"<<endl;
    cout<<(int)(((double)sum2*100/n)+0.5)<<"%";
    return 0;
}