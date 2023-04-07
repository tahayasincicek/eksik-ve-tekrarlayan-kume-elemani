#include <stdio.h>
#include <stdlib.h>

void eksikVeTekrarlananSayiyiBul(int dizi[], int boyut) { //Fonksiyon olu�turulur
    
	
	//De�i�kenler atan�r
	int i, j;
    int tekrarlanansayi = 0, eksiksayi = 0;
    
    // �ki kez olu�an say�y� bulmak i�in t�m say�lar� taran�r ve birbirleriyle kar��la�t�r�l�r
    for (i = 0; i < boyut; i++) {
        for (j = i+1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                tekrarlanansayi = dizi[i];
                break;
            }
        }
    }
    
    // Eksik olan say�y� bulmak i�in k�medeki t�m say�lar�n toplam�ndan n'e kadar olan say�lar�n toplam� ��kar�l�r, aradaki fark eksik say�y� verir
    int toplam = 0;
    for (i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    int tekrarlanantop = (boyut*(boyut+1))/2;
    eksiksayi = tekrarlanantop - (toplam - tekrarlanansayi);
    
    // �ki say�y� bir dizi �eklinde d�nd�r�n
    int cevap[2];
    cevap[0] = tekrarlanansayi;
    cevap[1] = eksiksayi;
    printf("Tekrarlanan Sayi: %d\n", tekrarlanansayi);
    printf("Eksik Sayi: %d\n", eksiksayi);
}

int main() {
    int n, i; // De�i�kenler atan�r
    printf("Lutfen kumenin boyutunu girin:"); //Kullan�c�dan k�me boyutunu girmesi istenir
    scanf("%d", &n);
    
    
    if(n<=0){   //E�er kullan�c� 0'dan k���k e�it say� girerse uyar�l�r
        printf("\n\n");
    	printf("Lutfen pozitif tam sayi girin!!!\n\n"); 
}
    else{ // S�f�rdan b�y�k say� girerse i�lem devam eder 

    int dizi[n]; //k�me atan�r 
    printf("Lutfen kumenin elemanlarini girin: "); //Kullan�dan k�menin elemanlar�n� girmesi istenir
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
    int i; //"i" de�i�keni for d�ng�s�nde kullan�ld��� i�in tekrar atan�r
    if(dizi[i]<=0){
    	printf("\n\n");
    	printf("Lutfen pozitif tam sayi girin!!!\n\n");
	}
	else{
     printf("\n\n");
    eksikVeTekrarlananSayiyiBul(dizi, n);  //Sonuc ekrana yazd�r�l�r
    printf("\n\n");
}
}

    printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Eksik ve tekrarlayan kume elemanini bulmak");
    
    return 0;
}
	
    














