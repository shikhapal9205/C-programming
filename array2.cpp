#include<iostream>
using namespace std;
int main()
{
   int max,min;
   int a[10];
   for(int i=0;i<10;i++)
   {
   cin>>a[i];
   }
   max=a[0];
   for(int i=0;i<10;i++)
   {
    if(a[i]>max)
    {
        max=a[i];
    }
   }
    min =a[0];
    for(int i=0;i<10;i++)
    {
    if(a[i]<min)
    {
        min=a[i];
    }
    }
    cout<<max;
    cout<<min;
}





