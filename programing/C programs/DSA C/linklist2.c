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
    printf("Enter a Data ");
    scanf("%d",&p1->data);
    p1->next=0;
    return p1;
}
insertStart()
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
insertMiddle()
{

}
deleteStart()
{
    struct node *i1;
    if(start==0)
    {
        printf("There is no node to delete");
    }
    else
    {
        i1=start;
        start=start->next;
        i1->next=0;
        free(i1);
        printf("Node delete successfully");
    }
}
void deleteEnd()
{
 struct node *y1,*y2;
 if(start==0)
 {
     printf("There is no node to delete");
 }
 else
 {
     y1=start;
     while(y1->next->next!=0)
     {
         y1=y1->next;
     }
     y2=y1->next;
     y1->next=0;
     free(y2);
     printf("Node deleted successfully");
 }

}
deleteMiddle()
{

}
display()
{
    struct node*h1;
    if(start==0)
    {
        printf("There is no node to display");
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
    printf("\n2. Insert from end");
    printf("\n3. Insert from middle");
    printf("\n4. Delete from start");
    printf("\n5. Delete from middle");
    printf("\n6. Delete from end");
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
                display();
                break;
            }
        case 8:
            {
                exit(0);
            }
        default:
            {
                printf("Wrong Input");
            }
        }
    }
getch();
}




















































