#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],d[40],m,n,o,i=0,j=0,k=0,t;
	int l=0;
	printf("enter the limit of first array\n");
	scanf("%d",&m);
	printf("enter the elements of array in sorted order\n");
	for(t=0;t<m;t++)
	{
		scanf("%d",&a[t]);
	}
	printf("enter the limit of second array\n");
	scanf("%d",&n);
	printf("enter the elements of array in sorted order\n");
	for(t=0;t<n;t++)
	{
		scanf("%d",&b[t]);
	}
	printf("enter the limit of third array\n");
	scanf("%d",&o);
	printf("enter the elements of array in sorted order\n");
	for(t=0;t<o;t++)
	{
		scanf("%d",&c[t]);
	}
	while(i<m&&j<n&&k<o)
	{
		if(a[i]<b[j])
		{
			if(a[i]<c[k])
			{
				d[l]=a[i];
				l++;
				i++;
			}
			else
			{
				d[l]=c[k];
				k++;
				l++;
			}
		}
		else
		{
			if(b[j]<c[k])
			{
				d[l]=b[j];
				l++;
				j++;
			}
			else
			{
				d[l]=c[k];
				l++;
				k++;
			}
		}
	}
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			d[l]=a[i];
			l++;
			i++;
		}
		else
		{
			d[l]=b[j];
			j++;
			l++;
		}
	}
	while(j<n&&k<o)
	{
		if(b[j]<c[k])
		{
			d[l]=b[j];
			l++;
			j++;
		}
		else
		{
			d[l]=c[k];
			k++;
			l++;
		}
	}
	while(i<m&&k<o)
	{
		if(a[i]<c[k])
		{
			d[l]=a[i];
			l++;
			i++;
		}
		else
		{
			d[l]=c[k];
			k++;
			l++;
		}
	}
	while(i<m)
	{
		d[l]=a[i];
		l++;
		i++;
	}
	while(j<n)
	{
		d[l]=b[j];
		l++;
		j++;
	}
	while(k<o)
	{
		d[l]=c[k];
		l++;
		k++;
	}
	printf("\nsorted array:\n");
	for(i=0;i<l;i++)
	{
		printf("\n%d\n",d[i]);
	}
return 0;	
}