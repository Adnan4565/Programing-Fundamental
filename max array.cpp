
#include<iostream>
using namespace std;
main()
{
    int a[4],max,i;
    for(i=0;i<=3;i++){
    cout<<"enter no=";
    cin>>a[i];
    }
    max=a[0];
    for(i=0;i<=3;i++)
    {
   if(max<a[i])
    max=a[i];
    }
cout<<max;

}
