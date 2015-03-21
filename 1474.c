#include "stdio.h"
int main()
{
	int t;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			int n,k,i,j;
			scanf("%d %d",&n,&k);

			//读取矩阵
			int p[n][n];
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					scanf("%d",&p[i][j]);

			//拷贝矩阵至缓存
			int tmp[n][n];
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					tmp[i][j]=p[i][j];
			int _tmp[n][n];

			//计算矩阵
			int m,sum;
			while(--k)
			{
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						for(m=0,sum=0;m<n;m++)
							sum+=tmp[i][m]*p[m][j];
						_tmp[i][j]=sum;
					}
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						tmp[i][j]=_tmp[i][j];
			}

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					j<n-1?printf("%d ",tmp[i][j]):printf("%d",tmp[i][j]);
				printf("\n");
			}

		}
	}
	return 0;
}
