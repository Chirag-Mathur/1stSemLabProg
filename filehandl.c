#include<stdio.h>
#include<stdlib.h>

struct Student{
    int marks;
}a[5];
struct Student b;

 int main()
 {
     FILE *fp,*q;
     int n;
     char ch;
    
    
     int i;
     fp=fopen("Sample.bin","wb");
     printf("Entering the text\n");
     for(i=1; i<=5; i++)
     {
         scanf("%d",&a[i-1].marks);
         
         fwrite(&a[i-1],sizeof(struct Student),1,fp);
                  
         
     }
     fclose(fp);
    /*printf("Reading the text\n");
       fp=fopen("Sample.txt","r");
     
    while(!feof(fp))
    {
        fread(&b,sizeof(struct Student),1,fp);
        printf("%d \n",b.marks);
    }
     fclose(fp);
     */
    printf("Printing\n");
     fp=fopen("Sample.bin","rb");
     q=fp;
     fseek(fp,-sizeof(struct Student),SEEK_END);
     while(q!=fp)
     {
         fread(&b, sizeof(struct Student),1,fp);
         printf("%d\n",b.marks);
         fseek(fp,-2*sizeof(struct Student),SEEK_CUR);
     }
     fclose(fp);


 }