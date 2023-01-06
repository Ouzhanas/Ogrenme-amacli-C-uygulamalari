#include <stdio.h>
#include <conio.h>
#define avagadrosayisi (6.02214199*10)*23
int main(){
	
	int secim;
	float mol;
	float kutle;
	float molkutlesi;
	printf("mol kutle hesaplama robotuna(aslinda yapay zeka)hosgeldiniz");
	printf("\nhesaplamak istedginiz secenegi seciniz");
	printf("\n[1]-mol\n[2]-kutle");
	scanf("%d",&secim);
	//mol=kutle/molkutlesi
	if(secim==1)
	{
		printf("\nmol hesaplamayi sectiniz,lutfen kutle ve mol kutlesi bilgisini giriniz");
		scanf("%f %f",&kutle,&molkutlesi);
		mol=kutle/molkutlesi;
		printf("mol=%f",mol);
	}
	else if(secim==2)
	{
		printf("kutle hesaplamayi sectiniz,lutfen mol ve mol kutlesi bilgisini giriniz");
		scanf("%f %f",&mol,&molkutlesi);
		kutle=(mol*molkutlesi)/avagadrosayisi;
		printf("kutle=%f",kutle);
	}
	else
	{
		printf("yanlis bir secim yaptiniz");
	}
	
	getch();
	
	return 0;
}
