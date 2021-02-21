#include <stdio.h>

int main(){
	int i=0;
	int n;
	int sum=0;
	
	printf("Pozitif 6 tam sayi gir: ");
	
	for(i=0;i<6;i++){
		scanf("%d",&n);  /*continue for ile beraber kullanildiginda negatif tam sayi girilse dahi*/
		if(n<=0)		  /*'i'nin degeri 1 arttirilacagi icin sayi girme hakkimiz azalacaktir.*/
			continue; /*2 negatif 4 pozitif tam sayi girildiginde dongu sonlanacaktir.*/
		sum += n;	
	}
	printf("Girilen pozitif tam sayilarin toplami =%d",sum);
	
	return 0;
}
