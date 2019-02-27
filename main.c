#include <stdio.h>
#include <stdlib.h>
int secim,secim2;
int girisSaat[10],cikissaati[10],aracplaka[10],aracSayi=0,ucrethesapla[10],maxhesap,minhesap,cikissaat=0;
int i=0,r=0,k=0,s=0,f,p=0,c=0,u=0,a=0,b,t=0,o;
int tip[3]={1,2,3};
void cikis(){
printf("\n\t...OTOPARKTAN CIKIS...\n");
printf("\nOtoparktan cikis yapacak olan aracin plakasini girin\n");
            scanf("%d",&p);
        for (f=0;f<aracSayi;f++)

        if (p=aracplaka[f])
        {printf("Cikis yapacak olan aracin plakasi %d giris saati %d\n",aracplaka[f],girisSaat[f]);}
        else
        {
        printf("Bu plakada giris yapan arac bulunmamistir\n");

        }
        printf("Cikis yapacak olan aracin cikis saatini girin\n");
        scanf("%d",&cikissaati[c]);
        printf("Cikis yapacak olan aracin tipini secin\n");
        printf("Taksi tipi icin '1' i tuslayiniz\n");
        printf("mobilet tipi arac icin '2'yi tuslayiniz\n");
        printf("Kamyonet tipi arac icin '3' u tuslayiniz\n");
        printf("Ana menuye donmek icin '0'i tuslayiniz\n");
        scanf("%d",&a);
        t=0;
        if (a==0)
        main();
        else if (a==1)
        {ucrethesapla[t]=(cikissaati[t]-girisSaat[t])*1+5;

        printf("toplam ucretiniz %d tldir",ucrethesapla[t]);}
        else if (a==2)
        {ucrethesapla[t]=(cikissaati[t]-girisSaat[t])*2+5;

        printf("toplam ucretiniz %d tldir",ucrethesapla[t]);}
        else if (a==3)
       {
        ucrethesapla[t]=(cikissaati[t]-girisSaat[t])*3+5;

        printf("toplam ucretiniz %d tldir",ucrethesapla[t]);}
        k--;
        c--;
        t++;}
void araclar(){
printf("\t\t..OTOPARKTAKI ARACLAR...\n");
        printf("Otoparkta suan %d arac bulunuyor\n",aracSayi);
        if (aracSayi==0)
       printf("Otoparkta suan arac bulunmamaktadir");
       printf("\nAna menuye donmek icin '0'i tuslayiniz\n");
        scanf("%d",&b);
         if (b==0)
            main();
        else if (aracSayi!=0)
        printf("\t\t...Araclar...\n");
        for (f=0;f<aracSayi;f++){
        printf("\n\n%d plakali aracin giris saati %d \n\n ",aracplaka[f],girisSaat[f]);
        printf("Ana menuye donmek icin '0'i tuslayiniz\n");
        scanf("%d",&b);
        if (b==0)
            main();
            }
            }
void Ekle(){
if (secim2==1){

        printf("\t\t...TAKSI TIPI ARAC EKLEME...\n");
        printf("Aracinizin plakasini giriniz\n");
        scanf("%d",&aracplaka[i]);
        i++;
        printf("\nAracinizin giris saatini giriniz(rakamlarin basina 0 atarak giriniz ornek:09)\n");
        scanf("%d",&girisSaat[r]);
        r++;
        printf("Islem tamamlandi.Ana menuye yonlendiriliyorsunuz...\n");
        main();}
    else if (secim2==2){
        printf("\t\t...MOBILET TIPI ARAC EKLEME...\n");
        printf("Aracinizin plakasini giriniz\n");
        scanf("%d",&aracplaka[i]);
        i++;
        printf("\nAracinizin giris saatini giriniz(rakamlarin basina 0 atarak giriniz ornek:09)\n");
        scanf("%d",&girisSaat[r]);
        r++;
         printf("Islem tamamlandi.Ana menuye yonlendiriliyorsunuz...\n");
        main();}
    else if (secim2==3){
        printf("\t\t...KAMYONET TIPI ARAC EKLEME...\n");
        printf("Aracinizin plakasini giriniz\n");
        scanf("%d",&aracplaka[i]);
        i++;
        printf("\nAracinizin giris saatini giriniz(rakamlarin basina 0 atarak giriniz ornek:09)\n");
        scanf("%d",&girisSaat[r]);
        r++;
         printf("Islem tamamlandi.Ana menuye yonlendiriliyorsunuz...\n");
        main();    }
        else if (secim2==0)
            menu();
        }

void menu(){
    printf("\t\t\n      ...OTOPARKA HOS GELDINIZ...\n\n");
    printf("Arac eklemek icin '1' e basiniz\n");
    printf("Otoparktaki araclari gormek icin '2' ye basiniz\n");
    printf("Otoparktan cikis icin '3' e basiniz\n");
    printf("Otoparktaki maximum ve minimum ucrete sahip araclarin odeyecekleri tutari ogrenmek icin '4' e basiniz\n");
    printf("Otoparkta bos yer olup olmadigini ogrenmek icin '5' e basiniz\n");
    scanf("%d",&secim);
}
void Ekleme (){
    aracSayi++;
    printf("\t\t....ARAC EKLEME MENUSU....\n");
    printf("Arac ekleme menusunu sectiniz\n");
    printf("Otopark giris ucreti '5' tl dir\n");
    printf("Saat basi ucretler arac tipine gore degisiklik gosterir\n");
    printf("Taksi tipi arac saat basi ucreti 1 tl dir\n");
    printf("Mobilet tipi arac saat basi ucreti '2' tl dir\n");
    printf("Kamyonet tipi arac saat basi ucreti '3' tl dir\n");
    printf("\nLutfen arac tipinizi belirtiniz :\n");
    printf("Taksi tipi icin '1' i tuslayiniz\n");
    printf("mobilet tipi arac icin '2'yi tuslayiniz\n");
    printf("Kamyonet tipi arac icin '3' u tuslayiniz\n");
    printf("Ana menuye donmek icin '0'i tuslayiniz\n");
    scanf("%d",&secim2);}
int main(){
    menu(secim);
    switch (secim){
    case 1:

    Ekleme(secim2);
    Ekle(secim2);
    break;
    case 2:
        araclar();
    break;
    case 3:
        cikis();
        menu();

        break;
        case 4:

            maxhesap=ucrethesapla[0];
            minhesap=ucrethesapla[0];
    for(o=0;o<=10;o++) {
        if(ucrethesapla[o]>=maxhesap)
            maxhesap = ucrethesapla[o];
            else if(ucrethesapla[o]<minhesap)
                minhesap=ucrethesapla[o];
    }
        printf("\nMaximum odenen hesap %d\n",maxhesap);
        printf("Minimum odenen hesap %d\n",minhesap);
        break;
        case 5:
        printf("bos yer varmi");
        break;
        default:
        printf("hatali tuslama");

        }
        return 0;
        }
