#include<stdio.h>
#include<conio.h>
	int main() {
		
		int max[15];
		int n,toplam=0,ortalama;
		
		printf("dizi eleman sayisini giriniz: ");
		scanf("%d",&n);
		
		for(int i=0;i<n;i++) {
			printf("%d. sayiyi giriniz",i);
			scanf("%d",&max[i]);
			
			toplam+=max[i];
		}
		
		ortalama = toplam/n;
		
		printf("ortama = %d",ortalama);		

		
		
		
		
		
		getch();
		return 0;
	}
