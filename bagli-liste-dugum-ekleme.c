#include<stdio.h>
#include<stdlib.h>

struct Dugum{
	int data;
	struct Dugum* sonraki;
};



void push(struct Dugum** ilk,int data){
	struct Dugum* yeniDugum=(struct Dugum*)malloc(sizeof(struct Dugum));
	yeniDugum->data=data;
	yeniDugum->	sonraki=*ilk;
	*ilk=yeniDugum;
	
}

void listeYaz(struct Dugum* ilk){
	struct Dugum* ptr=ilk;
	while(ptr){
		printf("%d -> ",ptr->data);
		ptr=ptr->sonraki;
	}
	printf("NULL");
}
int main(void){
	struct Dugum* ilk=NULL;
	int i,sayi;
	for(i=1;i<6;i++){
		printf("\n%d. sayi=",i);
		scanf("%d",&sayi);
		push(&ilk,sayi);
	}
	listeYaz(ilk);
	return 0;
}
