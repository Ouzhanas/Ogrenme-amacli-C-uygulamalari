#include <stdio.h>

int main(){
	int sayac=0,say=0;;
	char c;
	printf(" * karakterine kadar karakter gir: ");
	
	
	while(c != '*'){
		scanf("\n%c",&c);
		if(c >= 'a' && c <= 'z')
		sayac++;
		
		if(c>='A' && c<='Z'){
			say++;
		}
	}
	printf("\nbu kadar kucuk karakter girilmistir = %d",sayac);
	printf("\nbu kadar buyuk karakter girilmistir = %d",say);
	return 0;
}
