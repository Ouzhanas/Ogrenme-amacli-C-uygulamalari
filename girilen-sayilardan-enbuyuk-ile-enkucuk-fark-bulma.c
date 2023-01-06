#include <stdio.h>

int main(){
	int i=0,eb=0,ek=0,girdi=0,sonuc=0;
for(i=0;i<10;i++){
 		printf("Sayi gir:");
 		scanf("%d",&girdi);
 			if(i == 0){
 				eb = girdi;
 				ek = girdi;
			 }	
 			if(girdi > eb)
 				eb = girdi;
 			if(girdi < ek)
 				ek = girdi;
}
	 sonuc = eb - ek;
 	printf("\nFark =%d\n",sonuc);
	system("pause");
	return 0;
}
