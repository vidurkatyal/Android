#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;*a=*b;*b=temp;
}
int partition(int a[],int l,int r)
{
	int piv=r,i,j=l-1,k;
	for(i=l;i<r;i++)
	{
		if(a[i]<a[piv])
		{
			j++;
			swap(&a[i],&a[j]);
		}
	}
	j++;
	swap(&a[j],&a[piv]);
	return j;
}
void quicksort(int a[],int l,int r)
{
	if(l>=r)
	return;
	int p=partition(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);
}
int main()
{
	int i,n;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++) cin>>a[i];
	quicksort(a,1,n);
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

