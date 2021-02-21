#include <stdio.h>

int main(){
	
	int i=0;
	int n;
	
	printf("Tam sayi gir: ");
	scanf("%d",&n);
	
for(i=0;i<n;i++){	/*for dongusu her turda kosulu kontrol eder ve dogruysa islemi yerine getirir*/
	printf("%d\n",i);		/*ve her turda 'i'nin degerini 1 arttirir.*/
}
	
	return 0;
}
