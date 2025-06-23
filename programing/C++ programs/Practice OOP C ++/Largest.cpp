#include<iostream>
using namespace std;
int main(){
    float a[100];
    int n;
    cout<<"Enter No Of Elements You Want to check greater no : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Elements "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"The greatest no is: ";
    for(int i=0; i<n; i++){
        if(a[0] < a[i])
        a[0] = a[i];
    }
    cout<<a[0];
}