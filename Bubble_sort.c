#include<stdio.h>
void arrayelements(int a[],int n)
{
 int i;
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
            }
 printf("\n");
}
         void bubblesort(int arr[],int n)
{
	int i,j,count=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++)
        {
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
        count++;
	}
	printf("Count:%d\n",count);
	arrayelements(arr,n);

}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before sorting\n");
    arrayelements(arr,n);
    printf("after sorting\n");
	bubblesort(arr,n);
	return 0;
}
