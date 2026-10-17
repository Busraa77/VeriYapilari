//Tanımlamalı veri yapıları

#include <stdio.h> //C programına standart giriş-çıkış (input/output) kütüphanesinin bildirimlerini ekler.

/*struct : Bir öğrenciye ait birden fazla bilgiyi tek bir değişkende tut. 
union: Aynı bellek alanını alternatif veri gösterimleri için paylaşmak gerektiğinde işe yarar. Özellikle gömülü sistemlerde, düşük seviyeli programlamada ve bazı ikili veri biçimlerinde karşına çıkabilir.
Örneğin bir verinin bazen tam sayı, bazen başka bir türde yorumlanması gerekiyorsa union kullanılabilir. Ancak hangi üyenin geçerli olduğunu programın ayrıca takip etmesi gerekebilir.*/

struct Ogrenci{
    int numara; //Her üyeye ayrı bellek alanı ayrılır.
    int yas;
};

union Veri{
    int sayi; //Üyeler aynı bellek alanını paylaşır. Bir üyeye yazdığında diğerinin önceki değerini koruyacağı garanti edilmez.
    float ondalik;
    char harf;
};

int main(void){
    struct Ogrenci ogr1;

    ogr1.numara=200000;
    ogr1.yas=22;

    printf("Numara: %d\n" , ogr1.numara);
    printf("Yas: %d\n" , ogr1.yas);



    union Veri veri;
    veri.sayi = 65;
    printf("Sayi: %d\n", veri.sayi);
    veri.harf='A';
    printf("Harf: %c\n" , veri.harf);
    printf("Union boyutu: %zu bayt\n", sizeof(veri));
    

}