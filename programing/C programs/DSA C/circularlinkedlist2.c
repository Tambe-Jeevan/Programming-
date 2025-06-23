#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *start=NULL;
struct node *cn()
{
    struct node *n1;
    n1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&n1->data);
    n1->next=n1;
    return n1;
}
void is()
{
    struct node *h1,*h2;
    h1=cn();
    if(start==NULL)
    {
        start=h1;
    }
    else
    {
        h2=start;
        while(h2->next!=start)
            h2=h2->next;
        h1->next=start;
        start=h1;
        h2->next=h1;
    }
}
void ie()
{
    struct node *b1,*b2;
    b1=cn();
    if(start==NULL)
    {
        start=b1;
    }
    else
    {
        b2=start;
        while(b2->next!=start)
            b2=b2->next;
        b2->next=b1;
        b1->next=start;
    }
}
void im()
{
    int d;
    struct node *a,*b;
    a=cn();
    if(start==NULL)
    {
        start=a;
    }
    else
    {
        b=start;
        printf("Enter a node where you want to insert data");
        scanf("%d",&d);
        while(b->data!=d)
            b=b->next;
        a->next=b->next;
        b->next=a;
    }
    printf("Data added successfully");
}
void ds()
{
    struct node *s1,*s2;
    if(start==NULL)
    {
        printf("There is no any node to delete");
    }
    else
    {
     s1=start;
     while(s1->next!=start)
        s1=s1->next;
        s1->next=start->next;
     s2=start;
     start=s2->next;
     free(s2);
    }
    printf("Node deleted successfully");
}
void de()
{
    struct node *x,*y;
    if(start==NULL)
    {
        printf("There is no any node to delete");
    }
    else
    {
        x=start;
        while(x->next->next!=start)
            x=x->next;
        y=x->next;
        y->next=NULL;
        x->next=start;
        free(y);
    }
    printf("Data deleted successfully");

}
void dm()
{
    int d;
    struct node *a,*b;
    if(start==NULL)
    {
        printf("There is no any node delete");

    }
    else
    {
        a=start;
        printf("Enter a data you want to delete");
        scanf("%d",&d);
        while(a->next->data!=d)
            a=a->next;
        b=a->next;
        a->next=b->next;
        b->next=NULL;
        free(b);
    }
printf("data deleted successfully");
}
void display()
{
    struct node *d1;
    if(start==NULL)
    {
        printf("There is no any node to display");
    }
    else
    {
        d1=start;
        while(d1->next!=start)
        {
            printf("%d ",d1->data);
            d1=d1->next;
        }
        printf("%d ",d1->data);
    }
}
void main()
{
int ch;
printf("\n1. insert start \n2. insert end \n3. insert middle \n4. delete start \n5. delete end \n6. delete middle \n7. display \n8. exit");

while(1)
{
 printf("\nEnter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
    {
        is();
        break;
    }
 case 2:
    {
        ie();
        break;
    }
 case 3:
    {
        im();
        break;
    }
 case 4:
    {
        ds();
        break;
    }
 case 5:
    {
        de();
        break;
    }
 case 6:
    {
        dm();
        break;
    }
 case 7:
    {
        display();
        break;
    }
 case 8:
    {
        exit(0);
    }
 default:
    {
        printf("Wrong input!!!!!!");
    }
 }
}
getch();
}
