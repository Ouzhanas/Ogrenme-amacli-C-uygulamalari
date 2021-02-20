#include <stdio.h>

int main(){
	
	int i=0;
	int n=0;
	
	printf("Bir sayi gir: \n");
	scanf("%d",&n);
	printf("\n1 2 3 rakamlarindan birini gir: \n");
	scanf("%d",&i);
	
	
	if(i==1)
	printf("sonuc = %d\n",n);
	if(i==2)
	printf("sonuc = %d\n",n+n);
	if(i==3)
	printf("sonuc = %d\n",n*n);
		
	system("pause");
	return 0;
}
