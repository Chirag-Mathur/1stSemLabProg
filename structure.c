#include<stdio.h>
struct time{
    int hr;
    int min;
    int sec;
}t1,t2,diff;
int main()
{
    printf("Enter time in HH MM SEC format\n");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter second time in HH:MM:SEC format\n");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
    diff.hr=t1.hr-t2.hr;
    diff.min=t1.min-t2.min;
    diff.sec=t1.sec-t2.sec;
    if(diff.sec<0)
    {
        diff.sec+=60;
        diff.min--;
    }
    if(diff.min<0 && diff.hr >0)
    {
        diff.min+=60;
        diff.hr--;
    }
    printf("%d:%d:%d",diff.hr,diff.min,diff.sec);


}