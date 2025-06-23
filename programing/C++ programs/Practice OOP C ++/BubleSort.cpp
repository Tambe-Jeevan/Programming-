#include<iostream>
#include<conio.h>
using namespace std;
class BubleSort{
    public:
    Bublesort(int a[],int n){
        for(int i =0;i < n; i++){
            for(int j = 0; j < n-1; j++){
                if(a[j] > a[j+1]){
                    a[j] = a[j] + a[j+1];
                    a[j+1] = a[j] - a[j+1];
                    a[j] = a[j] - a[j+1];
                }
            }
        }
        for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    }
};
int main(){
int a[10],n;
cout<<"Enter a range:";
cin>>n;
cout<<"Enter numbers: ";
for(int i = 0; i < n; i++){
    cin>>a[i];
}
BubleSort b;
b.Bublesort(a,n);
}