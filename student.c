#include<stdio.h>
struct student
{
 char name[10];
 int roll;
 int marks;
}b[10];
int main()
{
    int i;
    for(i=1; i<=10; ++i)
    {
        printf("Enter name of %d student\n",i);
        scanf("%s",&b[i-1].name);
        printf("Enter roll no. of %d student\n",i);
        scanf("%d",&b[i-1].roll);
        printf("Enter marks of %d student\n",i);
        scanf("%d",&b[i-1].marks);
    }
    int max_marks,x=0;
    float sum_marks=b[0].marks;
    max_marks=b[0].marks;
    for(i=1; i<10; i++)
    {
        if(b[i].marks>max_marks)
        {
            max_marks=b[i].marks;
            x=i;
            
        }
            sum_marks=sum_marks+b[i].marks;

    }
    printf("Topper of the class\n");
    printf("Name:-%s\n",b[x].name);
    printf("Roll No:-%d\n",b[x].roll);
    printf("Marks:-%d\n",b[x].marks);
    printf("Average of the class...");
    printf("%f\n",(sum_marks/10));
}


