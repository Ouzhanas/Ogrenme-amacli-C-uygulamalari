#include <stdio.h>

int main(){
	
	int i=0;	/*int turunde 'n' ve 'i' degiskenleri tanimladik ve bunlari 0'a esitledik.*/
	int n=0;		/*ilk degerleri 0'a esitlemek programimizin verimli ve saglikli olmasini saglar.*/
	
	printf("Bir sayi gir: \n");
	scanf("%d",&n);
	printf("\n1 2 3 rakamlarindan birini gir: \n");	     /*bu kisimda kullanicidan int turunden degerleri istedik.*/
	scanf("%d",&i);
	
	
	if(i==1)	/*'i' degiskeni 1'e esit oldugunda yapilacak islemi if kosulu ile belirledik*/
	printf("sonuc = %d\n",n);
	if(i==2)	/*'i' degiskeni 2'e esit oldugunda yapilacak islemi if kosulu ile belirledik*/
	printf("sonuc = %d\n",n+n);
	if(i==3)	/*'i' degiskeni 3'e esit oldugunda yapilacak islemi if kosulu ile belirledik*/
	printf("sonuc = %d\n",n*n);
		
	system("pause");   /*programin kosmasi bittikten sonra ekranda durmasini sagladik.*/
	return 0;	/*programin kosup sonlanmasini sagladik.*/
}
