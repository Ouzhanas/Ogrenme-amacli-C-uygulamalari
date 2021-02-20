#include <stdio.h>

int main(){
	
	int sec;
	
	printf("lutfen 1 ile 3 arasinda bir secim yapiniz");
	scanf("%d",&sec);
	switch(sec)
	{
		case 1:printf("birinci durum secildi");break;
		case 2:printf("ikinci durum secildi");break;
		case 3:printf("ucuncu durum secildi");break;
		default:printf("yanlis bir sayi girdiniz");
			}
			return 0;
}
