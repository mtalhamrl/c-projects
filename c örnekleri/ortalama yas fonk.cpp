#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int ort(int yaslar[]){
	int ortalama,toplam=0;
	
		for(int i=0;i<6;i++){
			toplam+=yaslar[i];
		}
		ortalama= toplam/6;
		return ortalama;
	
}
	int main() {
		
		int yaslar[]={20,45,14,1,57,47};
		printf("ortalama yas = %d",ort(yaslar));
		
		
		
		
		
		
		
		getch();
		return 0;
	}
