#include <stdio.h>
#include <stdlib.h>
struct n{
	int x;
	struct n * next;
};
typedef struct n node;
void ekle(node *r,int x){
	while(r-> next!=NULL){
	r=r->next; 
	}
r->next = (node*) malloc(sizeof(node));
r->next->x=x;
r->next->next=NULL;
}
void bastir(node *r){
	while(r->next !=NULL){
		printf("%d\t",r->x);		
		r=r->next;
	}
}

int main(){
	node * root;
	root = (node*) malloc(sizeof(node));
	root->next=NULL;
	root ->x=1;
	for(int i=0;i<8;i++){
	
	ekle(root,i*2);
}
	bastir(root);
	
	return 0;	
}


