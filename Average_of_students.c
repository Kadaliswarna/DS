#include<stdio.h>
#include<stdlib.h>
struct stu{
    char name[50];
    int mark;
};
int main()
{
    int n,i;
    scanf("%d",&n);
    struct stu student[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",student[i].name);
        scanf("%d",&student[i].mark);
    }
    int t=0;
    for(i=0;i<n;i++)
    {
        t+=student[i].mark;
    }
    float a;
    a=t/n;
    printf("Total marks:%d\n",t);
    printf("Average marks:%.2f\n",a);
}
