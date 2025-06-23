#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=0;
struct node *cn()
{
    struct node *c1;
    c1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&c1->data);
    c1->next=0;
    return c1;
}
void is()
{
    struct node *p1;
    p1=cn();
    if(start==0)
        start=p1;
    else
    {
        p1->next=start;
        start=p1;
    }
     printf("Node added successfully");
}
void ie()
{
    struct node *e1,*e2;
    e2=cn();
 if(start==0)
    start=e2;
 else
 {
     e1=start;
     while(e1->next!=0)
       e1=e1->next;
      e1->next=e2;
 }
 printf("Node added successfully");
}
void im()
{
    int d;
    struct node *m1,*x,*y;
m1=cn();
if(start==0)
{
   start=m1;
}
else
{
printf("\nEnter a data where you want to insert.");
scanf("%d",&d);
x=start;
while(x->data!=d)
    x=x->next;
y=x->next;
x->next=m1;
m1->next=y;
}
}
void ds()
{
    struct node *s1;
if(start==0)
{
    printf("There is no any node to delete");
}
else
{
        s1=start;
        start=s1->next;
        s1->next=0;
        free(s1);
        printf("Node deleted successfully");
}
}
void de()
{
    struct node *y1,*y2;
    if(start==0)
        printf("There is no any node to delete");
    else
    {
        y1=start;
        while(y1->next->next!=0)
            y1=y1->next;
            y2=y1->next;
            y1->next=0;
            free(y2);
    }
printf("Node deleted successfully");
}
void dm()
{
    int d;
    struct node *x,*y,*z;
if(start==0)
{
    printf("There is no any node to delete");
}
else
{
    printf("Enter a data that you want to delete: ");
    scanf("%d",&d);
    x=start;
    while(x->next->data!=d)
        x=x->next;
    y=x->next;
    z=y->next;
    x->next=z;
    y->next=0;
    free(y);
}
printf("Data deleted successfully");
}
void sort()
{
    struct node *temp1;
    struct node *temp2;
    int key = 0;
    if (start == 0)
    {
       printf("There is no any node to sort.");
    }
 else
 {
    temp1=start;
    while (temp1->next != 0)
    {
        start=temp1;
        key = temp1->data;
        temp2 = temp1;

        while (temp2->next->data>key)
        {
            temp2->data = temp2->next->data;
            temp2 = temp2->next;
        }
        temp2->data = key;
        temp1 = temp1->next;
    }
   printf("\nList was sorted!\n");
 }
}
void display()
{
    struct node *d1;
    if(start==0)
    {
        printf("There is no any node to display.");
    }
    else
    {
         d1=start;
        while(d1!=0)
        {
            printf("%d ",d1->data);
            d1=d1->next;
        }
    }
}
void main()
{
    int ch;
    printf("\n1. Insert From start \n2. Insert from end \n3. Insert from middle \n4. Delete From Start \n5. Delete From End \n6. Delete From middle \n7. Sort list \n8. Display \n9. Exit.");

    while(1)
    {
        printf("\n\nEnter Your Choice: ");
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
                sort();
                break;
            }
        case 8:
            {
                 display();
                 break;
            }
        case 9:
            {
                exit(0);
            }
        default:
            {
                printf("Wrong Input!!!!");
            }
        }
    }
getch();
}
