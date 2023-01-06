#include <stdio.h>
#include <stdlib.h>
int main(){
	//girilecek ьз sayiyi buyuk>kucuk sirala
	
	int sayi1,sayi2,sayi3;
	printf("lutfen 3 sayi giriniz:");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3){
		if(sayi2>sayi3){
		
		printf("%d>%d>%d\n",sayi1,sayi2,sayi3);
	}
	else{
		printf("%d>%d>%d\n",sayi1,sayi3,sayi2);
	}
}
 else if(sayi2>sayi1 && sayi2>sayi3)
	{
		if(sayi1>sayi3)
		{
			printf("%d>%d>%d\n",sayi2,sayi1,sayi3);
		}	
		else
		{
			printf("%d>%d>%d\n",sayi2,sayi3,sayi1);
		}
	}
	else{
		if(sayi1>sayi2){
			printf("%d>%d>%d\n",sayi3,sayi1,sayi2);
		}
		else
		{
			printf("%d>%d>%d\n",sayi3,sayi2,sayi1);
		}
	}
		
		
		
		
		system("pause");
		return 0;
		
}
