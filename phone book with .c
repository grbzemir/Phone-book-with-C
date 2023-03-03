#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{


 char n[100];
 int a;
 int p;
 int d;
 char add[100];

 char na[100];
 int ag;
 int ph;
 int da;
 char addr[100];


printf("\n TELEFON REHBERINE HOS GELDINIZ \n\n");
printf("MENU\n\n");

printf("1- Kisi Eklemek icin 1 e basiniz \n");

int x;
printf("Seciminizi giriniz: ");
scanf("%d",&x);

if(x==1)
{
    int y;
    printf("Kac kisi eklemek istiyorsunuz: ");
    scanf("%d",&y);

    if(y==1)
    {
        printf("*************************\n");
        printf("Ad: ");
        scanf("%s",&n);
        printf("Yas: ");
        scanf("%d",&a);
        printf("Numara: ");
        scanf("%d",&p);
        printf("Dogum Yili: ");
        scanf("%d",&d);
        printf("Adres: ");
        scanf("%s",&add);
        printf("**************************\n");

       
    }

   else if(y==2)
   {

        printf("*************************\n");
        printf("Ad: ");
        scanf("%s",&n);
        printf("Yas: ");
        scanf("%d",&a);
        printf("Numara: ");
        scanf("%d",&p);
        printf("Dogum Yili: ");
        scanf("%d",&d);
        printf("Adres: ");
        scanf("%s",&add);
        printf("*************i*************\n");

        printf("*************************\n");
        printf("Ad: ");
        scanf("%s",&na);
        printf("Yas: ");
        scanf("%d",&ag);
        printf("Numara: ");
        scanf("%d",&ph);
        printf("Dogum Yili: ");
        scanf("%d",&da);
        printf("Adres: ");
        scanf("%s",&addr);
        printf("*************i*************\n");

   }

     printf(" girilen icerigi gormek icin 2'ye basiniz: ");
     printf("girilen icerikten cikmak icin 3'e basiniz: ");

        int z;

        printf("Giris yapiniz:");
        scanf("%d",&z);

        if(z==2)
        {

            int number;
            printf("Goruntulemek istediginiz kisinin numarasini giriniz: ");
            scanf("%d",&number);

    
            if(number==1)

            {

               printf("*************************\n");
               printf("Ad: ");
               printf("%s",n);
               printf("Yas: ");
               printf("%d",a);
               printf("Numara: ");
               printf("%d",p);
               printf("Dogum Yili: ");
               printf("%d",d);
               printf("Adres: ");
               printf("%s",add);
               printf("*************i*************\n");

            }
 
               else if(number==2)
               {
                  printf("*************************\n");
                  printf("Ad: ");
                  printf("%s",n);
                  printf("Yas: ");
                  printf("%d",a);
                  printf("Numara: ");
                  printf("%d",p);
                  printf("Dogum Yili: ");
                  printf("%d",d);
                  printf("Adres: ");
                  printf("%s",add);
                  printf("*************i*************\n");

                 printf("**************************\n");
                 printf("Ad: %s\n");
                 printf("%s",na);
                 printf("Yas: %d\n");
                 printf("%d",ag);
                 printf("Numara: %d\n");
                 printf("%d",ph);
                 printf("Dogum Yili: %d\n");
                 printf("%d",da);
                 printf("Adres: %s\n");
                 printf("%s",addr);
                 printf("**************************\n");


               }

        }
        
        else if(z==3)
        {
            printf("Gercekten telefon rehberinden cikmak istiyor musun...\n");
            printf("onaylamak icin 1'e basiniz: \n");
            printf("cikmak istemiyorsaniz 2'e basiniz: \n");

            int cevap;
            printf("Cevabinizi giriniz: \n");
            scanf("%d",&cevap);

            if(cevap==1)
            {
                printf("Cikis yapiliyor...\n");
                printf("iyi günler dileriz...\n");
            }

            else if(cevap==2)
            {
     
                printf("Cikis yapilmadi... \n");
                printf("isleminiz devam ediyor \n");
        

            }
        }
        
}

else
{

printf("gecersiz bir islem girdiniz... \n");

}

    return 0;
}