#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	//kullanici bilgilerini alicaz
	//bakiye gorulecek
	//para yatirma para cakme ve kullanici bilgilerini görme
	  
	char isim[10]="ali";
	int parola=1234;
	int bakiye=100;
	int secim;
	int yatirilacakpara;
	char istenecekisim[10];
	int istenecekparola;
	int cekilecekpara;
	printf("bankamatige hosgeldiniz\nlutfen kullanici adinizi giriniz:");
	scanf("%s",&istenecekisim);
	
	printf("\nlutfen sifrenizi giriniz:");
	scanf("%d",&istenecekparola);
	
    if(strcmp(isim,istenecekisim)==0 && istenecekparola==parola){

	printf("kullanici bilgileri eslenmistir\n\n");
	printf("asagidaki islemlerden birini seciniz\n[1]-para yatirma\n[2]-para cekme\n[3]-kullanici bilgileri");
	scanf("%d",&secim);
	
	if(secim==1){
		printf("\npara yatirma islemindesiniz.\nlutfen miktarigiriniz:");
		scanf("%d",&yatirilacakpara);
		//bakiye=bakiye+yatirilacakpara;
		bakiye +=yatirilacakpara;
		printf("para yatirma isleminiz basarili\nyatirdiginiz miktar:%d\nsuanki bakiyeniz:%d",yatirilacakpara,bakiye);
	}
	else if(secim==2){
		printf("\npara cekme islemindesiniz.\nmevcut bakiyeniz:%d\ncekilecek tutari giriniz:",bakiye);
		scanf("%d",&cekilecekpara);
		bakiye-=cekilecekpara;
	if(bakiye<0)
	{
		printf("\nyeterli bakiyeniz bulunmamaktadir");
	}
	else
	{
		//scanf("%d",&cekilecekpara);
		printf("\nisleminiz tamamlanmistir\ncekilen miktar:%d\nkalan bakiye:%d",cekilecekpara,bakiye);
	}
	}
	else
	{printf("%s",isim); 
	}
}
else
{
	printf("kullanici adi veya sifre yanlis");
}

getch();
return 0;
}

