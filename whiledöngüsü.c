#include <stdio.h>

int main(){
	
	//while döngüsü ile 0dan 100e kadar olan sayýlarý çifter çifter ardýndan üçer üçer arttýrýnýz
	
	int i=0;
	while(i<=100)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}
		//printf("%d\n",i);
		i++;
	}
	
  return 0;
	
}
