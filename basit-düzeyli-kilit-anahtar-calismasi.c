#include <stdio.h>

 
int main(){	
	int sifre;
	int parola=17;
	printf("parola giriniz:");
	scanf("%d",&sifre);
	
	if (parola == sifre) printf("hosgeldiniz");
	else printf("hatali giris");
	
	
	return 0;
	
}
