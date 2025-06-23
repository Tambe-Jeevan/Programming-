#include<stdio.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *st=NULL;

struct node *cn()
{
    struct node *s1;
    s1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&s1->data);
    s1->prev=NULL;
    s1->next= NULL;
    return s1;
}
void cs()
{
struct node *a1;
a1=cn();
if(st==NULL)
{
    st=a1;
}
else
{
    a1->next=st;
    st->prev=a1;
    st=a1;
}
}
void cm()
{
    struct node *d;
    d=cn();

    if(st==0)
    {
        d=st;
    }
    else
    {
        d=st;
        st->next=d;
    }
}
void ce()
{
struct node *b1,*c1;
b1=cn();

if(st==0)
{
   st=b1;
}
else
{
    c1=st;
    while(c1->next!=0)
    {
        c1=c1->next;
    }
    c1->next=b1;
}
}
void ds()
{
struct node *a;

if(st==0)
{
    printf("There is no any node to delete");
}
else
{
    a=st;
    st=st->next;
    a->next=NULL;
    free(a);
    printf("Node deleted successfully");
}
}
void dm()
{


}
void de()
{
struct node *b,*c;
if(st==0)
{
    printf("There is no any node to delete");
}
else
{
    c=st;
    while(c->next->next!=0)
        c=c->next;
        b=c->next;
        c->next=0;
        free(b);
        printf("Node deleted successfuly");
}
}
void display()
{
struct node *z;
if(st==NULL)
{
    printf("There is no any node to display");
}
else
    {
        z=st;
        while(z!=NULL)
        {
            printf("%d ",z->data);
            z=z->next;
        }
       /* doubly linked list code
        while(z->prev!=NULL)
        {
            printf("%d ",z->data);
            z=z->prev;
        }*/
    }
}

void main()
{
int ch;
    printf("1. Insert from start: ");
    printf("\n2. Insert from middle: ");
    printf("\n3. Insert from end: ");
    printf("\n4. Delet from start: ");
    printf("\n5. Delete from middle: ");
    printf("\n6. Delete from end: ");
    printf("\n7. Display");
    printf("\n8. Exit");

    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                cs();
                break;
            }
        case 2:
            {
                cm();
                break;
            }
        case 3:
            {
                ce();
                break;
            }
        case 4:
            {
                ds();
                break;
            }
        case 5:
            {
                dm();
                break;

            }
        case 6:
            {
                de();
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
            printf("Wrong Input!!!");
            }
        }
    }
    getch();
}
