#include <stdio.h>

int main(){
	
	int choose;	/*int turunden degisken tanimladik*/
	
	printf("lutfen 1 ile 3 arasinda bir secim yapiniz");	/*yapilacak islemi kullaniciya soyledik*/
	scanf("%d",&choose);
	switch(choose)		/* switch secim yapmamiza yardimci olur*/
	{
		case 1:printf("birinci durum secildi");break;	/*case ve sonrasinda gelen rakamlar bize bir durumu belirtirler ve o durumun secilmesi durumunda yapilacak islemi soyler.*/
		case 2:printf("ikinci durum secildi");break;			/*break ise bir durum secildigi zaman basariyla sonlanmasini saglar*/
		case 3:printf("ucuncu durum secildi");break;
		default:printf("yanlis bir sayi girdiniz");	/*default ise kullanici istenilen degerler girilmedigi zaman programin yapacilacak durumu soyler*/
			}
		
	return 0;
}
