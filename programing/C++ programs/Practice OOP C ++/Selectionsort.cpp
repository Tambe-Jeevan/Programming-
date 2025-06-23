#include<iostream>
#include<conio.h>
using namespace std;
class Selectionsort{
    public:
    void selectionSort(int a[],int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                 if(a[j] > a[j+1] ){
                    int min = a[j+1];
                    int index = a[j+1];
                 }
            }
            a[i] = a[i] + a[i+1];
            a[i+1] = a[i] - a[i+1];
            a[i] = a[i] - a[i+1];
        }
        for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    }
};
int main(){
int a[10],n;
cout<<"Enter a range:";
cin>>n;
cout<<"Enter numbers";
for(int i = 0; i < n; i++){
    cin>>a[i];
}
Selectionsort s;
s.selectionSort(a,n);
}