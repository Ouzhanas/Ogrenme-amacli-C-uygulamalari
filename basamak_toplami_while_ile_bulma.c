
#include <stdio.h>

int main(){
//girilen bir sayinin basamaklar toplami

	int sayi,toplam=0,kalan;
	printf("sayi gir:");
	scanf("%d",&sayi);
	
	while(sayi != 0){
		kalan = sayi%10;
		toplam = toplam + kalan;
		sayi=sayi/10;
	}
	printf("\nbasamaklar toplami=%d",toplam);
	
	return 0;
}
