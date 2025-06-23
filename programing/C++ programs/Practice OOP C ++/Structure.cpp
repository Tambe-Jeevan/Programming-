// Structur is used for creation A Data Type.
#include<iostream>
#include<conio.h>
using namespace std;
struct Nokia{
    int mic, speaker, display, keypad;
    
    void jeevan(){
        // int a = NULL;
        speaker = 654;
        display = 876;
        mic = 12;
        keypad = 876543;
        // cout<<a<<endl;
    }
};
int main(){
    Nokia n1;
    n1.jeevan();
    cout<<n1.mic<<" "<<n1.display<<" "<<n1.display<<" "<<n1.keypad<<endl;

    getch();
}
