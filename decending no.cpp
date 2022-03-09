#include<iostream>
using namespace std;
main()
{
    int i,j,t,u,a[4];
    for(j=0;j<=3;j++)
    {
        cout<<"enter value "<<j<<"=";
        cin>>a[j];
    }
    for(u=3;u>=0;u--)
    for(i=0;i<=3;i++)
    if(a[i]<a[i+1])
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
     for(i=0;i<=3;i++)
     {
         cout<<a[i]<<endl;;
     }

}

