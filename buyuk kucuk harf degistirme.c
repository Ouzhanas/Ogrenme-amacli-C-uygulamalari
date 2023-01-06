#include <stdio.h>
#include <stdlib.h>
void kucultbuyut(char *chDizi, int diziBoyu) {
    int i;
	for(i=0;i<diziBoyu;i++){
        if (chDizi[i]>='a' && chDizi[i]<='z') {
            chDizi[i] = chDizi[i] - 32;}
        else {
            if (chDizi[i]>='A' && chDizi[i]<='Z')
                chDizi[i] = chDizi[i] + 32;}}}
int main() {
    char *dizgi;
    int i;
    dizgi = (char *)malloc(100*sizeof(char));
    for (i=0; i<10; i++) {
        printf("Dizgi gir: ");
        scanf("%s", dizgi); //& kullanmak gereksiz
        kucultbuyut(dizgi, 100);
        printf("%s\n", dizgi);}
    return 0;
}
