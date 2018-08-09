#include<iostream>
#include<stdio.h>
using namespace std;
struct engine
{
    char serial[3];
    int year;
    char material[10];
    int quantity;
};

int main()
{
    int i,j,p,q,r;
    engine arr[60];
    for(i=65;i<70;i++)
    {
      for(j=0;j<=9;j++)
      {
          p=0;
          arr[p].serial[0]=i;
          arr[p].serial[1]=i;
          arr[p].serial[2]='j';
          cout<<"enter the year material and quantity respectively"<<endl;
          cin>>arr[p].year;

           scanf("%s",arr[p].material);
          cin>>arr[p].quantity;
          p++;
      }
    }
    for(r=12;r<=27;r++)
    {
        printf("%s",arr[r].serial);
        cout<<" "<<arr[r].year<<" ";
        printf("%s ",arr[r].material);
        cout<<arr[r].quantity<<endl;

    }


    return 0;
}
