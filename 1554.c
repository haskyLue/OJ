#include "stdio.h"
int find(int _array[],int len,int key,int *s,int *e)
	//注意用指针处理s,e
{
	int i,j,sum;
	for(i=0;i<len;i++)
	{
		*s=i;
		sum=0;
		for(j=*s;j<len;j++)
		{
			*e=j;
			sum+=_array[j];
			if(sum==key) return 1;
		}
	}
	return 0;
}
int main()
{
	freopen("data","r",stdin);
	int n;
	while(scanf("%d",&n)!=EOF&&n>=1&&n<=10000)
	{
		int i=0,k;
		int array[n];
		int s=0,e=0;
		while(i<n)
		{
			scanf("%d",&array[i++]);
		}
		scanf("%d",&k);

		if (find(array,n,k,&s,&e))
			printf("%d %d\n",s+1,e+1);
		else printf("NO\n");
	}
	return 0;
}
