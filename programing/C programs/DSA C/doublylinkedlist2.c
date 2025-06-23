#include<stdio.h>
#include<conio.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start=NULL;
cn()
{
    struct node *c1;
    c1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&c1->data);
    c1->prev=NULL;
    c1->next=NULL;
    return c1;
}
void is()
{
struct node *s1;
s1=cn();
if(start==NULL)
{
    start=s1;
}
else
{
    s1->next=start;
    start->prev=s1;
    start=s1;
}
}
ie()
{
    struct node *e,*e1;
    e=cn();
    if(start==NULL)
    {
        start=e;
    }
    else
    {
        e1=start;
        while(e1->next!=NULL)
            e1=e1->next;
        e1->next=e;
        e->prev=e1;
    }
}
im()
{
    int d;
    struct node *k,*x,*y;
    k=cn();
    if(start==NULL)
    {
        start=k;
    }
    else
    {
        printf("Enter position of a data where you insert: ");
        scanf("%d",&d);
        x=start;
        while(x->data!=d)
            x=x->next;
        y=x->next;
        x->next=k;
        k->next=y;
    }
}
ds()
{
    struct node *d1;
    if(start==NULL)
    {
        printf("There is no any node to delete.");

    }
    else
    {
        d1=start;
        start=start->next;
        start->prev=NULL;
        d1->next=NULL;
        free(d1);
    }
    printf("Data deleted successfully");
}
de()
{
struct node *a,*b;
if(start==NULL)
{
    printf("There is no any node to delete");
}
else
{
    a=start;
    while(a->next->next!=NULL)
        a=a->next;
    b=a->next;
    a->next=NULL;
    b->prev=NULL;
    free(b);
}
printf("Data deleted successfully");
}
void dm()
{
    int d;
    struct node *x,*y;
if(start==NULL)
{
    printf("There is no any data to delete");
}
else
{
    printf("Enter a data you want to delete: ");
    scanf("%d",&d);
      x=start;
    while(x->next->data!=d)
        x=x->next;
    y=x->next;
    x->next=y->next;
    y->prev=NULL;
    y->next=NULL;
    free(y);
}
printf("Data deleted successfully");
}
void display()
{
    struct node *g1;
    if(start==NULL)
    {
        printf("There is no any data to display.");
    }
    else
    {
        g1=start;
        while(g1!=NULL)
        {
            printf("%d ",g1->data);
            g1=g1->next;
        }
    }
}

main()
{
    int ch;
    printf("\n1. Insert start.");
    printf("\n2. insert end.");
    printf("\n3. insert middle.");
    printf("\n4. delete start.");
    printf("\n5. delete end.");
    printf("\n6. delete middle");
    printf("\n7. Display.");
    printf("\n8. Exit.");

    while(1)
    {
        printf("\n\nEnter your choice:");
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
                break;
            }
        default:
            {
                printf("Wrong input!!!!!!!");
            }
        }
    }
    getch();
}
