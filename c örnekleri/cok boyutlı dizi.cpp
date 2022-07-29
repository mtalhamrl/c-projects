#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
	int main() {
		
		int sayi[2][3];
		
		for(int i=0;i<2;i++) {
			
			for(int j=0;j<3;j++){
				
				printf("%d. satirdaki %d. sutundaki sayiyi giriniz :",i,j);
				scanf("%d" , &sayi[i][j]);
			}
		}
		
		for(int i=0;i<2;i++) {
			
			for(int j=0;j<3;j++){
				printf("%d\n",sayi[i][j]);
			}
		}
		
		
		
		getch();
		return 0;
	}
