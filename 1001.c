#include "stdio.h"
int main()
{
	int row,col,i,j;

	//��ȡ����
	/* scanf("%d %d",&row,&col); */
	while(scanf("%d",&row)&&(row!=0)){
		scanf("%d",&col);
		int matrixA[row][col];
		int matrixB[row][col];
		int sum[col+row];


		//��ȡ���ݾ��� A
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				scanf("%d",&matrixA[j][i]);
		//��ȡ���ݾ��� B
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				scanf("%d",&matrixB[j][i]);

		//�������վ��� 
		for(j=0;j<row;j++)
			for(i=0;i<col;i++)
				matrixA[j][i]=matrixA[j][i]+matrixB[j][i];   

		//�ֱ�����������֮�� 
		int k=0;
		int ct=0;
		/* memset(sum, 0, sizeof(int)*( col+row )); */
		while(k<col+row)sum[k++]=0; //��ʼ��sum

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

		//������ 
		printf("%d\n",ct);
	}


	/* getch(); */
	return 0;
}
