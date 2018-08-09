#include<iostream>
using namespace std;
int length(char *);
int main()
{

    char s[15];
    int a;
    cout<<"enter the string"<<endl;
    cin>>s;
    a=length(s);
    cout<<"length of string is "<<a;
    return 0;

}
int length(char *p)
{
    int i,a=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        a++;
    }
    return a;
}
