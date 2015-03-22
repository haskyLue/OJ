#include "stdio.h"
#include "math.h"
#define LEN 100
int _parse(char a)
{
	return a>'9'?a-87:a-'0';
}
int get_s1(char a[],char b[])
{
	return _parse(a[0])*pow(16,3)+_parse(a[1])*pow(16,2)+_parse(b[0])*16+_parse(b[1]);
}
int get_s2(char a[])
{
	return _parse(a[0])*16+_parse(a[1]);
}
int main ()
{
	int t;
	freopen("data","r",stdin);
	while(scanf("%d",&t)!=EOF)
	{
		int ct=0;
		char data[LEN][3];
		char tmp[30];
		while(ct<t)
		{
			/* 计算ip头部长度 */
			scanf("%s",data[0]);
			int ihl=_parse(data[0][1])*4;

			/* 读取至tcp端口处的hex为止 */
			for(int i=1;i<ihl+4;i++)  scanf("%s",data[i]);

			/* 输出  */
			printf("Case #%d\n",ct+1);
			printf("Total length = %d bytes\n",get_s1(data[2],data[3]));
			printf("Source = %d.%d.%d.%d\n",get_s2(data[12]),get_s2(data[13]),get_s2(data[14]),get_s2(data[15]) );
			printf("Destination = %d.%d.%d.%d\n",get_s2(data[16]),get_s2(data[17]),get_s2(data[18]),get_s2(data[19]) );
			printf("Source Port = %d\n",get_s1(data[ihl],data[ihl+1]) );
			printf("Destination Port = %d\n",get_s1(data[ihl+2],data[ihl+3]));
			printf("\n");

			/* gets(tmp);//处理剩下到回车符之间的串 */
			while(1)
			{
				if(getchar()=='\n') break;
			}

			ct++;
		}
	}
}

