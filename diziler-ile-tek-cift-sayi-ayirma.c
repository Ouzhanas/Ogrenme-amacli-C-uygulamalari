#include <stdio.h>

int main(){
	int cift[8],tek[8],i=0,girdi=0,a=0,b=0;
	
for(i=0;i<8;i++){
	printf("\nSayi gir:");
	scanf("%d",&girdi);	
	if(girdi % 2 == 1 || girdi % 2 == -1){
		tek[b]=girdi;
		b++;
		}
	else{
		cift[a] = girdi;
		a++;
	}	
}
	printf("\nCift sayilar:");
for(i=0;i<a;i++){
	printf("%d ",cift[i]);
}
	printf("\nTek sayilar:");
for(i=0;i<b;i++){
	printf("%d ",tek[i]);
}
	printf("\n");
	system("pause");
	return 0;
}
