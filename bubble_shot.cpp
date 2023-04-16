#include<stdio.h>
int binary_search(int a[],int low,int high,int x)
{
	int mid = (low + high) / 2;
   if (low > high) 
   	return -1;
   if (a[mid] == x) 
   	return mid;   
   if (a[mid] < x) 
     return binary_search(a, mid + 1, high, x);
   else 
     return binary_search(a, low, mid-1, x);
 return -1;
}
void bubble_sort(int *a,int n)
{
	int i,j,temp,swap;
	for(i=0;i<=n-2;i++)
	{
		swap=0;
		for(j=0;j<=n-2-i;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
				swap++;
			}
		}
		if(swap==0)
			break;
	}
}
int main(void)
{
	int i,n,item,a[10],posn,mid;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble_sort(a,n);
	printf("After sorting elements are:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("Enter the element to be searched:\n");
	scanf("%d",&item);
    posn=binary_search(a,0,n-1,item);
    if(posn==-1)
    	printf("%d is not found",item);
    else
      printf("%d is found at posn %d",item,posn+1);
	return 0;
}
