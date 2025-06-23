#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],sum[10][10],n,r,c;
    cout<<"Enter no of rows and column: ";
    cin>>r>>c;
    cout<<"Enter Elements for 1st matrix: ";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>a[i][j];
        }
    cout<<"Enter Elements for 2nd matrix: ";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            cout<<"Enter elements b"<<i+1<<j+1<<" : ";
            cin>>b[i][j];
        }
    cout<<"Adiition Is :\n";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            sum[i][j]=a[i][j]+b[i][j];
            cout<<" "<<sum[i][j];
            if(j == c-1)
                cout<<endl;
        }

}
