struct student
{

    int roll;
    float per;
    int marks;
    char name[10];
};
void main()
{
    struct student s1;
    printf("Enter roll number,\npercentage,\nmarks,\nyour name \n\n");
    scanf("%d %f %d %s",&s1.roll,&s1.per,&s1.marks,s1.name);
    printf("%d 0.2%f %d %s",s1.roll,s1.per,s1.marks,s1.name);
    getch();

}
