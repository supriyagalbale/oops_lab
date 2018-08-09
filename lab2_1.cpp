#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char *p[5];
    int i;
    cout<<"enter the names"<<endl;
    for (i=0;i<5;i++)
    {
        char arr[10];
        p[i]=arr;
        scanf("%s",arr);
    }
    cout<<"enter your choice"<<endl<<"1.insert 2.delete 3.print";
    int p;
    cin>>p;
    switch(p)
    {
    case 1:

    case 2:

    case 3:
    }
    return 0;
}
