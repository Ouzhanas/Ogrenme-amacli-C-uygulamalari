#include <stdio.h>

int  main(){
	// kullanicidan 2 sayi alinsin ve bu sayilarla asagidaki islem seceneklerinden biri secilsin carpma toplma bole
	
	float alinacaksayi1,alinacaksayi2;
	int secim;
	printf("bir sayi giriniz:");
	scanf("%f",&alinacaksayi1);
	printf("ikinci bir sayi giriniz:");
	scanf("%f",&alinacaksayi2);
	
	printf("asagidaki islemlerden birini seciniz\n[1]-toplama islemi\n[2]-cikarma islemi\n[3]-bolme islemi\n[4]-carpma islemi");
	printf("lutfen bir secim yapiniz:\n");
	scanf("%d",&secim);
	
	if (secim==1){
		printf("birinci durumu sectiniz\ngirdiginiz sayilarin toplami sudur=%d",alinacaksayi1+alinacaksayi2);
	
	}
	else if(secim==2){
		printf("ikinci durumu sectiniz.\ncikarma islemi sonucu=%.2f\n",alinacaksayi1-alinacaksayi2);
	}
	else if(secim==3){
		printf("ucuncu durumu sectiniz.\nbolme islemi sonucu=%.2f\n",alinacaksayi1/alinacaksayi2);
	}
	else if(secim==4){
		printf("dorduncu durumu sectiniz.\ncarpma islemi sonucu=%.2f\n",alinacaksayi1*alinacaksayi2);
	}
	else{
		printf("\nbir yanlis yaptiniz uygulamayi tekrar baslatiniz");
	}
	return 0;
}
