#include<iostream>
#include<cstdio>
using namespace std;

int main(){
// int x,y;
// public:
// void setData(int p,int q){
//     x=p;
//     x=q;
//     cout<<x<<" "<<y<<endl;
// }
 int n,m;
    cin>>n;
    cin>>m; 
    int a = 10;  
    string s;
    string str[] = {"one","two","three","four","five","six","seven","eight","nine"};

    for(int i=0;i<m;i++){
        if(1<=n && n<=9){
            s = str[n-1];
            n++; 
            cout<<s<<endl;
        }
    }
           for(int j=9;j<m;j++){
             if(a%2==0){
             cout<<"even"<<endl;
             }
             else if(a%2!=0){
                cout<<"odd"<<endl;
             }
             a++;
           }

}