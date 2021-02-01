#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
bool isSameString(char* s1,char* s2)
{
    if(strlen(s1)!=strlen(s2))
        return false;
    if(strlen(s1)==0)//比较成功
        return true;
    if(s1[0]!=s2[0])
        return false;
    return isSameString(substr(s1,1),substr(s2,1));
}
int main()
{
    char s1[]="abc";
    char s2[]="abcd";
    cout<<isSameString(s1,s2);
    return 0;
}
