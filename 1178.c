#include "stdio.h"
#include "string.h"
/* #include "math.h" */
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void adjust(int *xs,int *ys,int index)
{
	//交换符合要求的最大值的元素到index位置
	int j=0,max_index=0;
	long large=0, tmplarge;
	while(j<=index)
	{
		tmplarge=xs[j]*xs[j]+ys[j]*ys[j];
		if( tmplarge>large || ( tmplarge==large && ys[j]<ys[max_index] ) )
		{
			large=tmplarge; 
			max_index=j;
		}
		j++;
	}
	swap(&xs[max_index],&xs[index]);
	swap(&ys[max_index],&ys[index]);
}
int main()
{
	int n;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&n)!=EOF && n>=1 && n<=1000)
	{
		char op[10];
		int index=-1; //最后一个索引值
		int xs[n],ys[n];
		while(n--)
		{
			scanf("%s",op);
			if(strcmp(op,"Pop")==0) 
			{
				if(index>=0)
				{
					adjust(xs,ys,index);
					printf("%d+i%d\n",xs[index],ys[index]);
					index--;
					printf("SIZE = %d\n",index+1);
				}
				else
					printf("empty\n");
			} 
			else if(strcmp(op,"Insert")==0) 
			{
				int x,y;
				scanf("%d+i%d",&x,&y);
				xs[++index]=x;
				ys[index]=y;
				printf("SIZE = %d\n",index+1);
			}
		}
	}
	return 0;
}
