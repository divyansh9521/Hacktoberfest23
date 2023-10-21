#include<stdio.h>
void merge_sort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
	int a[30],i,n,p,q,r,l1,r1;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter %d element in an array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void merge_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}
void merge(int a[],int p,int q,int r)
{
	int b[20],l1=p,r1=q+1,i=p;
	while((l1<=q)&&(r1<=r))
	{
		if(a[l1]<a[r1])
		{
			b[i]=a[l1];
			l1=l1+1;
			i=i+1;
		}
		else
		{
			b[i]=a[r1];
			r1=r1+1;
			i=i+1;
		}
	}
	while(l1<=q)
	{
		b[i]=a[l1];
		l1=l1+1;
		i=i+1;
	}
	while(r1<=r)
	{
		b[i]=a[r1];
		r1=r+1;
		i=i+1;
	}
	for(i=p;i<=r;i++)
	{
		a[i]=b[i];
	}
}
