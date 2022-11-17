#include<iostream>
using namespace std;
static int s=0;
struct node
{	int data;	node* link;	node(int n){	data = n;	link =NULL;}};

void print(node* root)	{	if(!root)	return;	cout<<"\nTree : \t "; while(root){cout<<root->data<<" ";	root=root->link;}}
void rev_even(node* &root)
{
	if(!root)	return;
	node* curr = root,*p1=NULL,*prev=NULL,*next=NULL;
	if( root->data%2==0)
	{
		if(root->link->data%2)
		{
			curr=curr->link;
		}
		else
		{
			while(curr and curr->data%2 == 0)
			{
				next = curr->link;
				curr->link = prev;
				prev=curr;
				curr=next;
			}
			root->link=curr;
			root=prev;
		}
	}
	while(curr)
	{
		if(curr->data%2)
		{
			if(p1)
			{
				p1->link->link = curr;
				p1->link=prev;
				p1=NULL;
			}
			else if(!curr->link){break;}
			else if(curr->link->data%2)
			{	curr=curr->link;	}
			else
			{
				p1=curr;	
				curr=curr->link;
			}
		}
		else
		{
			next=curr->link;
			curr->link=prev;
			prev=curr;
			curr=next;
			if(!curr)
			{
				p1->link->link=curr;
				p1->link = prev;
				p1=NULL;
			}
		}
	}

}
int main()
{
	int n;
	cin>>n;
	int i=n;
	node *root=NULL;
	int A[n];
	for(int x=0;x<n;x++){	cin>>A[x];}
	while(i)
	{
		i--;	node* tmp = new node(A[i]);	tmp->link = root;	root= tmp;
	}
	rev_even(root);
	print(root);
	return 0;
}