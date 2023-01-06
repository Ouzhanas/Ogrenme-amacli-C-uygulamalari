#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	//kullanici bilgilerini alicaz
	//sansli cekilis uygulamasi
	//kullanici bilgilerini goster
	
	char isim[10],soyisim[10];
	int sayi;
	int secim;
	printf("sansli cekilis uygulamasina hos geldiniz.\nlutfen kullanici adinizi giriniz:");
	scanf("%s",&isim);
	printf("\nlutfen soyadinizi giriniz");
	scanf("%s",&soyisim);
	printf("\nasagidaki islemlerden biri icin secim yapiniz\n[1]-sansli cekilisi dene\n[2]-kullanici bilgilerinizi kontrol ediniz\n");
	scanf("%d",&secim);
	
	if(secim==1){
		printf("\nsu anda sansli cekilis uygulamasindasiniz lutfen bir ile 5 arasinda bir sayi giriniz: ");
		scanf("%d",&sayi);
		srand(time(NULL));
		int randomsayi=1+rand()%5;
		
		if(sayi==randomsayi){
			printf("\ngirdiginiz sayi:%d\ncekilisteki sayi: %d",sayi,randomsayi);
			printf("\nkazandiniz");
		}
		else
		{
			printf("\ngirdiginiz sayi:%d\ncekilisteki sayi: %d",sayi,randomsayi);
			printf("\nkazanamadiniz!");
		}
		
	
	}
	else
	{
		printf("%s %s",isim,soyisim);
	}
	return 0;
}
