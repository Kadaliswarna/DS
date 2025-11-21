#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("example.txt","w");
    fputs("santhosh",ptr);
    fclose(ptr);
}
