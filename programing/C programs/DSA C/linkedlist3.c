
struct node
{
    int data;
    struct node *next;
};
struct node start=NULL;
struct node *cn()
{
    struct node *a;
    a=(struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&a->data);
    a->next=NULL;
    return a;
}
is()
{

}
ie()
{

}
im()
{

}
ds()
{

}
de()
{

}
dm()
{

}
display()
{

}
main()
{
    int ch;
    printf("\n1. Insert start: \n2. Insert End  \n3. Insert Middle  \n4. Delete Start  \n5. Delete End \n6. Delete Middle \n7. Display \n8. Exit");
    while(1)
    {
        printf("Enter your choice: ");
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
            printf("Wrong input!!!");
        }
    }
    }
}
