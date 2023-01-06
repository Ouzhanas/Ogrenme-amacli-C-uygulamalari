#include <stdio.h>

int main(){
	int i,k,girdi,ucgen=1;
	printf("ikiz kenar dik ucgen icin bir kenar uzunlugu gir:");
	scanf("%d",&girdi);
	
	for(i=0;i<girdi;i++){
	
		for(k=0;k<ucgen;k++){
			printf("*");
		}
		printf("\n");
		ucgen++;
	}
	system("pause");
	return 0;
}
