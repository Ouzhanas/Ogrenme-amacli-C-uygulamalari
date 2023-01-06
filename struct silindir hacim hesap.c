#include <stdio.h>
#define pi 3.14
//silindir yapisinin(struct)bildirimini buraya yazin/

struct silindir {
    int yaricap;
    int yukseklik;

};

//shacim fonksiyonun kodunu da buraya yazin/
int shacim(int yaricap, int yukseklik) {
    int hacim = pi * (yaricap * yaricap )* yukseklik;
    return hacim;
}

int main(){
    struct silindir veri;
    printf("yaricap giriniz: ");
    scanf("%d",&veri.yaricap);
    printf("yukseklik giriniz: ");
    scanf("%d",&veri.yukseklik);
    printf("Hacim: %d",shacim(veri.yaricap, veri.yukseklik));

    return 0;
}
