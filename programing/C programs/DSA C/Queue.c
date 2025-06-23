struct Queue
{
    int rear;
    int front;
    int cap;
    int *arr;
};
struct Queue *creatQueue()
{
struct Queue *k1;
k1=(struct Queue *)malloc(sizeof(struct Queue));
k1->rear=-1;
k1->front=-1;
printf("Enter a size of Queue: ");
scanf("%d",&k1->cap);
k1->arr=(int *)calloc(k1->cap,sizeof(int));
return k1;
}
enQueue(struct Queue *b1)
{

}
deQueue(struct Queue *b1)
{

}
sizeQueue(struct Queue *b1)
{

}
deleteQueue(struct Queue *b1)
{

}

void main()
{
int choice;
struct Queue *b1;
printf("\n1. Insert in a Queue");
printf("\n2. Delete a data from a queue");
printf("\n3. Size of a queue");
printf("\n4. Delete whole queue");
printf("\n5. Exit");

while(1)
{
printf("\n\nEnter your choice: ");
scanf("%d",choice);
switch(choice)
{
 case 1:
     {
      enQueue(b1);
      break;
     }
 case 2:
     {
      deQueue(b1);
      break;
     }
 case 3:
     {
      sizeQueue(b1);
      break;

     }
  case 4:
     {
      deleteQueue(b1);
      break;

     }
  case 5:
    {
     exit(0);
    }
  default:
    {
        printf("wrong input!!!");
    }
}
}
getch();
}
