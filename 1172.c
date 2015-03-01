#include "stdio.h"
#include "stdlib.h"
int cmp ( const void *a , const void *b);
int main()
{
	freopen("data","r",stdin);
	int a[1001];
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(a[0]),cmp);
		int sum=0;
		for(i=1;i<n;i++)
		{
			a[i]=a[i-1]+a[i];
			sum=a[i]+sum;
			printf("%d\n",sum);
			qsort(a,n,sizeof(a[0]),cmp);
		}
		printf("%d\n",sum);
	}

}
int cmp ( const void *a , const void *b)
{
	return *(int *)a - *(int *)b;
}
