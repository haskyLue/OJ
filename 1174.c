#include "stdio.h"
#include "stdlib.h"
int cmp ( const void *a , const void *b);
int main()
{
	int ct=0;
	int n,k;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&n)!=EOF && n>=1 && n<=1000)
	{
		int a[n];
		int i=0;
		while(i<n)
		{
			scanf("%d",&a[i++]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		i=0;
		scanf("%d",&k);
		i=1; 
		ct=1;//a[0]为第一小
		while(i<n)
		{
			if(a[i]>a[i-1]){
				ct++;
			}
			if(ct==k)
			{
				printf("%d\n",a[i]);
				break;
			}
			i++;
		}
	}
	return 0;
}
int cmp ( const void *a , const void *b)
{
	return *(int *)a - *(int *)b;
}
