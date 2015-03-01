#include "stdio.h"
int main()
{
	int row,col,i,j;

	//读取参数
	/* scanf("%d %d",&row,&col); */
	while(scanf("%d",&row)&&(row!=0)){
		scanf("%d",&col);
		int matrixA[row][col];
		int matrixB[row][col];
		int sum[col+row];


		//读取数据矩阵 A
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				scanf("%d",&matrixA[j][i]);
		//读取数据矩阵 B
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				scanf("%d",&matrixB[j][i]);

		//计算最终矩阵 
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				matrixA[j][i]=matrixA[j][i]+matrixB[j][i];   

		//分别计算矩阵行列之和 
		int k=0;
		int ct=0;
		/* memset(sum, 0, sizeof(int)*( col+row )); */
		while(k<col+row)sum[k++]=0; //初始化sum

		for(k=0,j=0;j<row;j++)
		{
			for(i=0;i<col;i++)
				sum[k]+=matrixA[j][i];
			if(sum[k++]==0)
				ct++;
		}
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
				sum[k]+=matrixA[j][i];
			if(sum[k++]==0)
				ct++;
		}

		//输出结果 
		printf("%d\n",ct);
	}


	/* getch(); */
	return 0;
}
