#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,n);
     print(a,n,i);
    
    
}
int insertion(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(t<a[i]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
   
    
}
int print(int a[],int n,int i)
{
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
