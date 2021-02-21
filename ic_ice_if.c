#include <stdio.h>

int main(){
	
	char ch;
	int num;
	printf("Bir kucuk harf ve rakam gir: \n"); /*kullanicidan kucuk harf ve rakam istedik.*/
	scanf("%c %d",&ch,&num); /* '%c' harf ve '%d' tam sayi degiskenidir.*/
	
	if(0 <= num && num  <=9 && 'a' <= ch && ch <= 'z')
		printf("istenileni yaptiniz!");
	else{
		if(num < 0 || 9 < num && 'a' <= ch && ch <= 'z')
			printf("Kucuk harf girildi, rakam girilmedi!");
		else if(0 <= num && num <= 9 && ch != 'A'-'a')
			printf("Rakam girildi, kucuk harf girilmedi!");
		else
			printf("Ne rakam ne de kucuk harf girildi!");
	}	
	return 0;
}
