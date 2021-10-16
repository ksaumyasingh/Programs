#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node *left, *right;
	int lthread,rthread;
}node;

node* search(node*tree, int i);
void inorder(node*tree);
node* inpredecessor(node* p);
node* insuccessor(node* p);
void insertright(node* s, node* r);
void insertleft(node *s, node *r);
node* create(int i);


int main()
{
	int c,d,i;
	char ch;
	node *tree,*r,*s,*root;
	tree=create(0);
	tree->lthread=1;
	tree->rthread=0;
	tree->right=tree->left=tree;
	do
	{
		printf("\n1. create\n2. insert left\n3. insert right\n4. inorder display\n5. inorder successor\n6. inorder predecessor");
		printf("\n enter your choice :");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("\nenter root : ");
					scanf("%d",&i);
					root=create(i);
					tree->data=i;
					insertleft(tree,root);
					break;
			case 2: printf("\nenter the node to be inserted :");
					scanf("%d",&d);
					r=create(d);
					printf("\nenter the node to the left of which it is inserted :");
					scanf("%d",&i);
					s=search(tree,i);
					if(s==NULL)
					printf("\nno such node exists.\n");
					else
					insertleft(s,r);
					break;
			case 3: printf("\nenter the node to be inserted :");
					scanf("%d",&d);
					r=create(d);
					printf("\nenter the node to the right of which it is inserted :");
					scanf("%d",&i);
					s=search(tree,i);
					if(s==NULL)
					printf("\nno such node exists.\n");
					else
					insertright(s,r);
					break;
			case 4: printf("\n inorder display :\n");
					inorder(tree);
					break;
			case 5: printf("\n enter the node to find inorder successor :");
					scanf("%d",&i);
					s=search(tree,i);
					if(s==NULL)
					printf("\nno such node exists.\n");
					else
					{
						r=insuccessor(s);
						 if(r==tree)
					printf("\ninorder successor doesnt exist.\n");
					else
					printf("\n inorder successor is %d",r->data);
					}
					break;
			case 6: printf("\n enter the node to find inorder predecessor :");
					scanf("%d",&i);
					s=search(tree,i);
					if(s==NULL)
					printf("\nno such node exists.\n");
					else
					{
						
					r=inpredecessor(s);
					 if(r==tree)
					printf("\ninorder predecessor doesnt exist.\n");
					else
					printf("\n inorder predecessor is %d",r->data);
					}
					break;
		}
		printf("\ndo you wish to continue ? (press y for yes)");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y');
	
	return 0;
}


node* search(node *tree, int i)
{
	node* p=tree;
	do
	{
		p=insuccessor(p);
		if(p==tree)
		break;
		if(p->data==i)
		return p;
	}while(1);
	return NULL;
}
void inorder(node*tree)
{
	node* p=tree;
	do
	{
		p=insuccessor(p);
		if(p==tree)
		break;
		printf("%d\t",p->data);
	}while(1);
}
node* inpredecessor(node* p)
{
	node* t;
	t=p->left;
	if(!p->lthread)
	while(!t->rthread)
	t=t->right;
	return t;
	
}
node* insuccessor(node* p)
{
	node* t;
	t=p->right;
	if(!p->rthread)
	while(!t->lthread)
	t=t->left;
	return t;
	
}
void insertright(node* s, node* r)
{
	node* t;
	r->right=s->right;
	r->rthread=s->rthread;
	r->left=s;
	r->lthread=1;
	s->right=r;
	s->rthread=0;
	if(!r->rthread)
	{
		t=insuccessor(r);
		t->left=r;
	}
}
void insertleft(node *s, node *r)
{
	node* t;
	r->left=s->left;
	r->lthread=s->lthread;
	r->right=s;
	r->rthread=1;
	s->left=r;
	s->lthread=0;
	if(!r->lthread)
	{
		t=inpredecessor(r);
		t->right=r;
	}
}
node* create(int i)
{
	node* n;
	n=(node*)malloc(sizeof(node));
	n->data=i;
	return n;
}
