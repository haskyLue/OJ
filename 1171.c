#include "stdio.h"
void p12(int x ,int y);
void p13(int x ,int y);
void p22(int x ,int y);
void p23(int x ,int y);

int _data[5][5];
int data[5][5];

int main()
{
	int p[4];
	int i,j;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&data[0][0])!=EOF)
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(i==0&&j==0)
					continue;
				else scanf("%d",&data[i][j]);
			}
		for(i=0;i<5;i++) //拷贝
			for(j=0;j<5;j++)
				_data[i][j]=data[i][j];
		scanf("%d %d %d %d",&p[0],&p[1],&p[2],&p[3]);

		if(p[0]==1 && p[1]==2) p12(p[2]-1,p[3]-1);
		if(p[0]==1 && p[1]==3) p13(p[2]-1,p[3]-1);
		if(p[0]==2 && p[1]==2) p22(p[2]-1,p[3]-1);
		if(p[0]==2 && p[1]==3) p23(p[2]-1,p[3]-1); 

		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				j<4?printf("%d ",data[i][j]):printf("%d\n",data[i][j]);
		}
	}
	return 0;
}
void p12(int x ,int y) //这里貌似不好返回二维数组地址(struct?)，暂时两个定义全局变量保存数组
{
	data[x][y+1]=_data[x][y];
	data[x+1][y+1]=_data[x][y+1];
	data[x][y]=_data[x+1][y];
	data[x+1][y]=_data[x+1][y+1];
}
void p13(int x ,int y)
{
	data[x][y+2]=_data[x][y];
	data[x+1][y+2]=_data[x][y+1];
	data[x+2][y+2]=_data[x][y+2];
	data[x][y+1]=_data[x+1][y];
	data[x+1][y+1]=_data[x+1][y+1];
	data[x+2][y+1]=_data[x+1][y+2];
	data[x][y]=_data[x+2][y];
	data[x+1][y]=_data[x+2][y+1];
	data[x+2][y]=_data[x+2][y+2];
}
void p22(int x ,int y)
{
	data[x+1][y]=_data[x][y];
	data[x][y]=_data[x][y+1];
	data[x+1][y+1]=_data[x+1][y];
	data[x][y+1]=_data[x+1][y+1];
}
void p23(int x ,int y)
{
	data[x+2][y]=_data[x][y];
	data[x+1][y]=_data[x][y+1];
	data[x][y]=_data[x][y+2];
	data[x+2][y+1]=_data[x+1][y];
	data[x+1][y+1]=_data[x+1][y+1];
	data[x][y+1]=_data[x+1][y+2];
	data[x+2][y+2]=_data[x+2][y];
	data[x+1][y+2]=_data[x+2][y+1];
	data[x][y+2]=_data[x+2][y+2];
}

