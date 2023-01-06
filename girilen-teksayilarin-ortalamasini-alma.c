#include <stdio.h>

int main(){
	float toplam=0,girdi=0,ortalama=0;
	int i=0;
	printf("tek sayi gir:");
	scanf("%f",&girdi);
	
	while((int)girdi % 2 == 1 || (int)girdi % 2 == -1){
		i++;
		toplam += girdi;
		printf("Sayi gir:");
		scanf("%f",&girdi);
	}
	ortalama = toplam / (float)i;
	printf("\nOrtalama = %.2f\n",ortalama);
	
	system("pause");
	return 0;
}
