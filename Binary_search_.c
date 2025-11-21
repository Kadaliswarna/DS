#include<stdio.h>
int main()
{
    int n,i,key;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    scanf("%d",&key);
    int m,s=0,e=n-1;
    while(s<=e)
    {
    	m=(s+e)/2;
        if(key==arr[m])
        {
            printf("Found at %d",m);
            break;            
        }
        else if(key<arr[m])
        {
            e=m-1;
        }
        else if(key>arr[m])
        {
            s=m+1;
        }

    }
  
    return 0;
     
}
