
#include <stdio.h>

int main(){
	char a[10]="selam";  /* a karakter dizisinin icinndeki '10' rakamı bu dizinin alabilecegi en fazla harf karakterini belirtmektedir.*/
	int i=0;
	int n;
	scanf("%d",&n);     /* Kullanicidan tam sayi cinsinden deger aliyoruz 'n' degiskeni icin.*/

	do{
		printf("%s\n",a);   /*do yapilacak isi while ise dogrulugu kontrol amaclidir. bu alanda program 'i' degeri 'n' degerinden kucuk oldugu surece calisacaktir*/
		i++;
	}while(i<n);
	
	system("pause");      /* program kosmasini bitirdikten sonra ekranda herhangi bir tusa basilana kadar bekletmesini saglar. 
					Boylece program kosup sonlanmayacak ve biz de gorebilecegiz.*/
	return 0; 	/*programin sonlandigini belirtmektedir.*/
}
