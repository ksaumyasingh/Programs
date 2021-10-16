#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct treenode
{
	treenode *lchild;
	treenode *rchild;
	int weight;
};
struct tree //list
{
	struct treenode node;
	struct tree *next;
};
void insert(struct tree **p,struct tree *ptr)
{
	struct tree *temp=*p;
	if((*p)==NULL)
	{
		(*p)=ptr;
		(*p)->next=NULL;
	}
	else
	{
		while(temp->next!=NULL)
	    {
		temp=temp->next;
     	}
    	temp->next=ptr;
    	(temp->next)->next=NULL;
	}
	printf("\nINSERT %d\n",ptr->node.weight);
}
struct treenode * Least(struct tree **p)
{
	struct tree *lst,*ptr;
	struct treenode *least;
	lst=*p;
	ptr=*p;
	while(ptr!=NULL)
    {
    	if((ptr->node).weight<(lst->node).weight)
    	{
    		lst=ptr;
		}
		ptr=ptr->next;
	}
	ptr=*p;
	if(lst==(*p))
	{
		(*p)=(*p)->next;
	}
	else
	{
		while(ptr->next!=lst)
		{
			ptr=ptr->next;
		}
		ptr->next=lst->next;
	}
	least=&lst->node;
	printf("  ||   least weight : %d ",least->weight);
	return least;
}
struct treenode * Tree(struct tree **p,int n)
{
	int i;
	struct tree *pt ;
	for(i=0;i<=n-2;i++)
	{
		pt=(struct tree*)malloc(sizeof(struct tree));
	    pt->node.lchild=Least(p);
	    pt->node.rchild=Least(p);
	    pt->node.weight=(pt->node.lchild)->weight+(pt->node.rchild)->weight;
	    insert(p,pt);
    }
    return Least(p);
    
}
void inorder(struct treenode *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		printf(" %d ",p->weight);
		inorder(p->rchild);
	}
}
int main()
{
	int n,i=0;
	struct tree *ptr1,*ptr2,*p;
	struct treenode *fpt;
	printf("Enter the number of file : ");
	scanf("%d",&n);
	ptr1=(struct tree*)malloc(sizeof(struct tree));
	printf("Enter the no. of records in %dst file : ",i+1);
	scanf("%d",&(ptr1->node).weight);
	ptr1->node.lchild=NULL;
	ptr1->node.rchild=NULL;
	ptr1->next=NULL;
	for(i=1;i<n;i++)
	{
		ptr2=(struct tree*)malloc(sizeof(struct tree));
		printf("Enter the no. of records in %d file : ",i+1 );
		scanf("%d",&(ptr2->node).weight);
		ptr2->node.lchild=NULL;
	    ptr2->node.rchild=NULL;
		insert(&ptr1,ptr2);
	}
	p=ptr1;
	printf("Records of all %d files are : ",n);
	while(p!=NULL)
	{
		printf(" %d ",p->node.weight);
		p=p->next;
	}
	printf("\n");
	fpt=Tree(&ptr1,n);
	printf("\nInorder traversal for the formed tree is :  ");
	inorder(fpt);
	return 0;
}