#include <stdio.h>
typedef struct Tree 
{
	struct Tree *parent;
	struct Tree *left;
	struct Tree *right;
	int value;
}Tree;

void createT(Tree *t, Tree *src) {
	if (src->value < t->value) 
	{
		if (t->left == NULL) 
		{
			t->left = src;
			src->parent = t;
		} else createT(t->left, src);
	} 
	else 
	{
		if (t->right == NULL) 
		{
			t->right = src;
			src->parent = t;
		} else createT(t->right, src);
	}
}
int main() {
	int n = 0;
	/* freopen("data","r",stdin); */
	while (~scanf("%d", &n)) 
	{

		Tree tree[n];
		for (int i = 0; i < n; i++) 
		{
			scanf("%d", &tree[i].value);
			tree[i].left = NULL;
			tree[i].right = NULL;
			i == 0 ? tree[i].parent = NULL : createT(&tree[0], &tree[i]);
		}
		for (int i = 0; i < n; i++) 
			i == 0 ? printf("-1\n"):printf("%d\n", (tree[i].parent)->value);
	}
	return 0;
}
