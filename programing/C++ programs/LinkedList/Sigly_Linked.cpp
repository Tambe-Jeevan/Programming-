#include<iostream>
#include<conio.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        }
};
void is(Node* &start,int data){
    Node* a = new Node(data);
    a->next = start;
    start = a;
}
ie(Node* &start,int data){
Node* b = new Node(data);
Node* temp = start;
while(temp!=NULL){
    temp = temp->next;
    temp->next = b;
}
cout<<"NULL";
}
void display(Node *start){
    Node* temp = start;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
    Node* start = NULL;
    int c;
    cout<<"1\n2\n3\n4\n5\n6\n7\n8\n";
    while(1){
        cout<<"Enter choice: ";
        cin>>c;
    switch(c){
        case 1:{
            is(start,6);
            break;
        }
        case 2:{
            ie(start,7);
            break;
        }
        // case 3:{
        //     im();
        //     break;
        // }
        // case 4:{
        //     ds();
        //     break;
        // }
        // case 5:{
        //     de();
        //     break;
        // }
        // case 6:{
        //     dm();
        //     break;
        // }
        case 7:{
            display(start);
            break;
        }
        case 8:{
            exit(0);
        }
        default:{
            cout<<"wrong input!!!!!!!";
        }

    }
    }
}
