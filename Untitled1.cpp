#include<iostream>
using namespace std;
int main(){
int a[10],i;
int rep;
int pos;



for (int i=0; i<10; i++){
        cout<<"Enter the value = "<<i<<"=";
    cin>>a[i];
}
cout<<"original array";
for (int j=0; j<10; j++){

    cout<<a[j];
}
cout<<"\nrepiace value\n";
cin>>rep;
cout<<"position";
cin>>pos;

a[pos]=rep;

for (int k=0; k<10; k++){
    cout<<a[k];
}

}
