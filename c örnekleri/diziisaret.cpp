#include<stdio.h>

	
	int main() {
		
		int enbuyuk,enkucuk;
		int dizi[5];
		int *pc;
		pc=dizi; //pc=&dizi[0]
	
	for(int i=0;i<5;i++) {
		scanf("%d",dizi+i); //alternatif , &dizi[i]
		enbuyuk=dizi[i];
		enkucuk=dizi[i];
	}			
		for(int i=0;i<5;i++) {
			if (enbuyuk  <*(pc + i)) {
				enbuyuk= *(pc + i);
			}
			else	if (enkucuk  >*(pc + i)) {
				enkucuk= *(pc + i);
			}
		}
		
		printf("en buyuk sayi = %d\n",enbuyuk);
				printf("en kcuk sayi = %d",enkucuk);

		
		
		
		
		
		
		return 0;
	}
