#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
	int main() {
		
		int ogrenciler;
		int notlar;
		
		printf("ogrenci sayisi girin :");
		scanf("%d",&ogrenciler);
		
		printf("not girin :");
		scanf("%d",&notlar); 
		int degerler[ogrenciler][notlar];
		int toplam[ogrenciler];
		
			for(int i=0;i<ogrenciler;i++){
				toplam[i]=0;
				for(int j=0;j<notlar;j++) {
					printf("%d. ogrencinin %d. notu :",i+1,j+1);
					scanf("%d",&degerler[i][j]);
					toplam[i]+=degerler[i][j];
				}
			}
			for(int i=0;i<ogrenciler;i++){
				for(int j=0;j<notlar;j+=notlar) {
					printf("%d. ogrencinin ortalamasi: %d \n",i+1,toplam[i]/notlar);
					
				}
			}
		
			
		
		getch();
		return 0;
	}
