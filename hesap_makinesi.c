//Hesap makinesi

#include <stdio.h>

int main(){
	
	float a,b,sonuc;
	char islec;
	
	printf("Islem gir:");
	scanf("%f %c %f",&a,&islec,&b);
	
	if(islec != '+' && islec != '-' && islec != '*' && islec != '/')
		printf("Gecersiz islem.\n");
	else
	{
	    if(islec == '+')
		sonuc = a + b;
		else if(islec == '-')	
		sonuc = a - b;
		else if(islec == '*')
		sonuc = a * b;
		else if (b > 0.00001 || b < -0.00001)
		sonuc = a / b;
		else 
			sonuc = -9999999.99;
		
		printf("\n%.2f",sonuc);
}
	
	return 0;
}
