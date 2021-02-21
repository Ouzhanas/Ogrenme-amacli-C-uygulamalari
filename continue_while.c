#include <stdio.h>

int main(){
	int i=0;
	int n;
	int sum=0;
	
	printf("Bir rakam gir :");
	//scanf("%d",&n);
	
while(i < 6){
	scanf("%d",&n);
	if(n < 0)
		continue; /*continue if kosulu yanlis olursa 'i' degerini 1 arttirir ancak program calismaya devam eder sonlanmaz.*/
	sum += n;
	i++;
}
	printf("simdiye kadar girilen sayilarin toplami =%d",sum);
	return 0;
}
