#include<conio.h>

#include<iostream>

class patterns

{

int n,i,j,k,l;

public:

void choice();

void output();

};

void patterns::choice()

{

cout<<“Enter 1 to print left triangle pattern: \n”;

cout<<“Enter 2 to printf right triangle pattern:\n”;

cout<<“Enter 3 to print pyramid pattern:\n”;

cin>>n;

}

void patterns::output()

{

cout<<“\nPattern is:\n\n”;

switch(n)

{

case 1:

for(i=1;i<=4;i++)

{

for(j=1;j<=i;j++)

cout<<“*”;

cout<<endl;

}

break;

case 2:

for(i=1;i<=4;i++)

{

for(j=1;j<=4-i;j++)

cout<<” “;

for(k=1;k<=i;k++)

cout<<“*”;

cout<<endl;

}

break;

case 3:

for(i=1;i<=3;i++)

{

for(j=1;j<=3-i;j++)

cout<<” “;

for(k=1;k<=i;k++)

cout<<“*”;

for(l=1;l<=i-1;l++)

cout<<“*”;



cout<<endl;

}

break;

default:

cout<<“Wrong choice\n”;

}

}

void main()

{

patterns p1;

clrscr();

p1.choice();

p1.output();

getch();

}
