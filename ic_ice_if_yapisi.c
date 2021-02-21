#include <stdio.h>

int main(){
	
	char ch;
	int num;
	printf("Bir kucuk harf ve rakam gir: \n"); /*kullanicidan kucuk harf ve rakam istedik.*/
	scanf("%c %d",&ch,&num); /*%d tam sayi ve %c harf degiskenidir.*/
	
	if(ch >= 'a' && ch <= 'z'){ /*Burada girilen karakterin a ve z arasindaki bir kucuk harf olup olmadigini kontrol ediyoruz.*/
		if(num <= 9 && num >= 0) /*Burada ise girilen tam sayinin rakam olup olmadigini kontrol ediyoruz.*/
			printf("istenileni yerine getirdiniz.");
		}	
	if(ch >= 'a' && 'z'>= ch)
		if(num < 0 || 9 < num) /*Rakam olup olmadigini kontrol ediyorum.*/
			printf("Kucuk harf girildi ancak rakam girilmedi!");	

	if(num <= 9 && num >=0)
		if(ch != 'A'-'a')  /*ascii tablosunu ezbere bilmek zorunda degiliz o yuzden ayni harfin buyuk ve kucuk halini birbirinden cikararak kucuk harfin ascii kodunu elde ediyoruz.*/
			printf("Rakam girildi ancak kucuk harf girilmedi");
	return 0;
}
