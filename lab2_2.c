#include<iostream.h>
int length(char*);
void main()
{

    char s[15];
    int a;
    a=length(&s);
    cout<<"length of string is"<<a;

}
int length(char *p)
{
    int i,a;
    for(i=0;i<15;i++)
    {
        if(*(p+i)!='\0')
            a++;
    }
    return a;
}
