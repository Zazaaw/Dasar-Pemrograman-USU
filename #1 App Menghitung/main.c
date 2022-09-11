#include <stdio.h>

int main(void)
{
    int p, l, s, a, r, t, tl, luas, volume, keliling, hasil, menu;
    float la, vl, vb, vk;
    char kar = 'y';

    printf("======================================\n");
    printf("     Rumus Bangun Ruang Dan Datar\n");
    printf("======================================\n\n");
    printf("Nama  : Faiz Hazim Hawari\n");
    printf("Kelas : Teknik Informatika A'22\n\n");
    printf("Menu :\n");
    printf("1. Luas balok\n");
    printf("2. Volume balok\n");
    printf("3. Keliling balok\n");
    printf("4. Volume kubus\n");
    printf("5. Luas Permukaan Kubus\n");
    printf("6. Volume Limas Segitiga\n");
    printf("7. Volume Bola\n");
    printf("8. Luas Segitiga\n");
    printf("9. Keliling Persegi\n");
    printf("10. Volume Kerucut\n");

    while (kar=='y'){

    printf("\n-------------------------------\n");
    printf("Pilih menu [1-10] : ");
    scanf("%d",&menu);
    printf("\n------------------------------\n");

    switch (menu){
      case 1:
        printf("\n1. Luas balok :\n");
        printf("Masukan panjang : ");
        scanf("%d", &p);
        printf("Masukan lebar : ");
        scanf("%d", &l);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        int luas = 2;
        hasil = luas*(p*l)+(p*t)+(l*t);
        printf("---------------------------- \n");
        printf("Hasil;\t  %d\n", hasil);
        break;
        case 2:
        printf("\n2. Volume balok :\n");
        printf("Masukan panjang : ");
        scanf("%d", &p);
        printf("Masukan lebar : ");
        scanf("%d", &l);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        hasil = p*l*t;
        printf("---------------------------- \n");
        printf("Hasil;\t  %d\n", hasil);
        break;
        case 3:
        printf("\n3. Keliling balok :\n");
        printf("Masukan panjang : ");
        scanf("%d", &p);
        printf("Masukan lebar : ");
        scanf("%d", &l);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        int kel = 4;
        hasil =kel* (p+l+t);
        printf("---------------------------- \n");
        printf("Hasil;\t  %d\n", hasil);
        break;
        case 4:
        printf("\n4. Volume kubus :\n");
        printf("Masukan sisi : ");
        scanf("%d", &s);
        hasil = s*s*s;
        printf("---------------------------- \n");
        printf("Hasil;\t  %d\n", hasil);
        break;
        case 5:
        printf("\n5. Luas Permukaan Kubus :\n");
        printf("Masukan sisi : ");
        scanf("%d", &s);
        hasil =s*s*s;
        int L = 6;
        hasil = L*(s*s);
        printf("---------------------------- \n");
        printf("Hasil;\t  %d\n", hasil);
        break;
        case 6:
        printf("\n6. Volume Limas Segitiga :\n");
        printf("Masukan alas segitiga: ");
        scanf("%d", &a);
        printf("Masukan tinggi segitiga: ");
        scanf("%d", &t);
        la = ((a*t)/2);
        printf("Masukan tinggi linmas segitiga : ");
        scanf("%d", &tl);
        vl = ((la*tl)/3);
        printf("---------------------------- \n");
        printf("Volume limas segitiga = \t &f\n", vl);
        break;
        case 7:
        printf("\n7. Volume Bola :\n");
        printf("Masukan jari-jari bola = ");
        scanf("%d", &r);
        vb = ((4*3.14*r*r*r)/3);
        printf("---------------------------- \n");
        printf("Volume bola = \t &f", vb);
        break;
        case 8:
        printf("\n8. Luas segitiga :\n");
        printf("Masukan alas segitiga");
        scanf("%d", &a);
        printf("Masukan tinggi segitiga: ");
        scanf("%d", &t);
        hasil = ((a*t)/2);
        printf("---------------------------- \n");
        printf("Hasil:\t &d\n",  hasil);
        break;
        case 9:
        printf("\n9. Keliling Persegi :\n");
        printf("Masukan sisi");
        scanf("%d", &s);
        hasil = (4*s);
        printf("---------------------------- \n");
        printf("Hasil:\t &d\n",  hasil);
        break;
        case 10:
        printf("\n10. Volume Kerucut :\n");
        printf("Masukan jari-jari lingkaran alas :");
        scanf("%d", &r);
        printf("Masukan tinggi kerucut: ");
        scanf("%d", &t);
        vk = ((1*3.14*r*r*r)/3);
        printf("---------------------------- \n");
        printf("volume bola = \t &f", vk);
        break;
        default :
            printf("Pilihan Yang Dimasukkan Belum Benar Coba Rumus Lain");
            scanf("&s", &kar);
            }
       }
    return 0;

}
