#include<iostream>
using namespace std;
main()
{
    int a[5]={12,34,45,23,24},i,num;
    cout<<"find location of num=";
    cin>>num;
    for(i=0;i<=4;i++)
        if(num==a[i])
        cout<<i+1;
}
