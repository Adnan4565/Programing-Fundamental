#include<iostream>
using namespace std;
main()
{
    int a[10],i,j,sum=0;
    float avg;
    cout<<"enter no 10=";
     for(i=0;i<=9;i++)
    cin>>a[i];
    for(i=0;i<=9;i++)
        sum=sum+a[i];
        cout<<"sum="<<sum<<'\n';
        avg=float(sum)/20;
        cout<<"avg value="<<avg;
}
