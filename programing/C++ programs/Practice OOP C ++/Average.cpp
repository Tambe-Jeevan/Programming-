#include<iostream>
using namespace std;
int main(){
    int n;
    float a[10],sum=0.0;
    cout<<"Enter Number of elements(1 to 10): ";
    cin>>n;
    while(n>10 || n<0){
        cout<<"Wrong input!!!\n";
        cout<<"Enter Number of elements(1 to 10): ";
        cin>>n;
    }
    for(int i=0; i<n; i++){\
        cout<<"Enter numbers "<<i+1<<" : ";
        cin>>a[i];
        sum += a[i];
    }
    cout<<sum/n;
}