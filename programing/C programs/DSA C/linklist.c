struct node
{
    int data;
    struct node *next;
};
struct node *start=0;

struct node *createNode()
{
    struct node *p1;
    p1=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data:");
    scanf("%d",&p1->data);
    p1->next=0;
   return p1;
}
void insertStart()
{
    struct node *k1;
k1=createNode();
if(start==0)
{
    start=k1;
}
else
{
  k1->next=start;
  start=k1;
}

}
void insertEnd()
{
    struct node *t1,*h1;
    t1=createNode();
    if(start==0)
    {
        start=t1;
    }
    else
    {
     h1=start;
     while(h1->next!=0)
     {
         h1=h1->next;
     }
     h1->next=t1;
    }
}
void insertMiddle()
{
    int d;
    struct node *k,*x,*y;
    k=createNode();

    if(start==0)
    {
        start=k;
    }
    else
    {
        printf("Enter a data where you want to insert ");
        scanf("%d",&d);
        x=start;
        while(x->data!=d)
        {
        x=x->next;
        }
        y=x->next;
        x->next=k;
        k->next=y;
    }
}
void deleteStart()
{
    struct node *i1;
if(start==0)
{
    printf("There is no any node to delete");
}
else
{
    i1=start;
    start=start->next;
    i1->next=0;
    free(i1);
    printf("Node deleted successfully");
}
}
void deleteEnd()
{
struct node *ptr1,*ptr8;
if(start==0)
{
    printf("There is no no node to delete");
}
else
{
    ptr1=start;
    while(ptr1->next->next!=0)
    {
        ptr1=ptr1->next;

    }
    ptr8=ptr1->next;
    ptr1->next=0;
    free(ptr8);
    printf("Node deleted successfully");

}
}
void deleteMiddle()
{
    int d;
    struct node *x,*y;
if(start==0)
{
    printf("There is no node to delete");
}
else
{
    printf("Eneter a data that you want to delete: ");
    scanf("%d",&d);
    x=start;
    while(x->next->data!=d)
    x=x->next;
    y=x->next;
    x->next=y->next;
    y->next=0;
    free(y);
    printf("Node deleted successfully.");
}
}
void sort()
{
    struct node *a,*temp,*b;
    int i,j;
    if(start == 0)
    {
        printf("There is no any node to sort");
    }
    else
    {
        b = start;

        while(b->next != 0)
            {
                a->next = b->next;
            }
        for(i = 0; i < (a->next!=0); i++)
        {
            for(j = 0; j < (a->next!=0); j++)
            {
            if((a->data) > (a->next->data))
            {
                temp = a->data;
                a->data = a->next->data;
                a->next->data = temp;
            }
            }
        }
        for(i = 0; i < (a->next!=0); i++)
            {
                printf("%d ",a->data);
            }
    }
}
void display()
{
struct node *h1;
if(start==0)
{
    printf("There is no any node to display");
}
else
{
    h1=start;
    while(h1!=0)
    {
        printf("%d ",h1->data);
        h1=h1->next;
    }
}
}
void main()
{
    int ch;
    printf("\n1. Insert from start");
    printf("\n2. Insert from End");
    printf("\n3. Insert from Middle");
    printf("\n4. Delete from start");
    printf("\n5. Delete from end");
    printf("\n6. Delete from middle");
    printf("\n7. Sort");
    printf("\n8. Display");
    printf("\n9. Exit");
while(1)
{
printf("\n\nEnter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
    {
      insertStart();
      break;
    }
case 2:
    {
       insertEnd();
       break;
    }
case 3:
    {
        insertMiddle();
        break;
    }
case 4:
    {
        deleteStart();
        break;
    }
case 5:
    {
        deleteEnd();
        break;
    }
case 6:
    {
        deleteMiddle();
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
        printf("Wrong Input");
    }
}
}
}
