#include <stdio.h>
#include <stdlib.h>

void eksikVeTekrarlananSayiyiBul(int dizi[], int boyut) { //Fonksiyon oluþturulur
    
	
	//Deðiþkenler atanýr
	int i, j;
    int tekrarlanansayi = 0, eksiksayi = 0;
    
    // Ýki kez oluþan sayýyý bulmak için tüm sayýlarý taranýr ve birbirleriyle karþýlaþtýrýlýr
    for (i = 0; i < boyut; i++) {
        for (j = i+1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                tekrarlanansayi = dizi[i];
                break;
            }
        }
    }
    
    // Eksik olan sayýyý bulmak için kümedeki tüm sayýlarýn toplamýndan n'e kadar olan sayýlarýn toplamý çýkarýlýr, aradaki fark eksik sayýyý verir
    int toplam = 0;
    for (i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    int tekrarlanantop = (boyut*(boyut+1))/2;
    eksiksayi = tekrarlanantop - (toplam - tekrarlanansayi);
    
    // Ýki sayýyý bir dizi þeklinde döndürün
    int cevap[2];
    cevap[0] = tekrarlanansayi;
    cevap[1] = eksiksayi;
    printf("Tekrarlanan Sayi: %d\n", tekrarlanansayi);
    printf("Eksik Sayi: %d\n", eksiksayi);
}

int main() {
    int n, i; // Deðiþkenler atanýr
    printf("Lutfen kumenin boyutunu girin:"); //Kullanýcýdan küme boyutunu girmesi istenir
    scanf("%d", &n);
    
    
    if(n<=0){   //Eðer kullanýcý 0'dan küçük eþit sayý girerse uyarýlýr
        printf("\n\n");
    	printf("Lutfen pozitif tam sayi girin!!!\n\n"); 
}
    else{ // Sýfýrdan büyük sayý girerse iþlem devam eder 

    int dizi[n]; //küme atanýr 
    printf("Lutfen kumenin elemanlarini girin: "); //Kullanýdan kümenin elemanlarýný girmesi istenir
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
    int i; //"i" deðiþkeni for döngüsünde kullanýldýðý için tekrar atanýr
    if(dizi[i]<=0){
    	printf("\n\n");
    	printf("Lutfen pozitif tam sayi girin!!!\n\n");
	}
	else{
     printf("\n\n");
    eksikVeTekrarlananSayiyiBul(dizi, n);  //Sonuc ekrana yazdýrýlýr
    printf("\n\n");
}
}

    printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Eksik ve tekrarlayan kume elemanini bulmak");
    
    return 0;
}
	
    














