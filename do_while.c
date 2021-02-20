
#include <stdio.h>

int main(){
	char a[10]="selam";
	int i=0;
	scanf("%d",&i);

	do{
		printf("%s\n",a);
		i-=10;
	}while(i<10);
	
	system("pause");
	return 0;
}
