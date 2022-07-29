#include<stdio.h>

void sort(int *dizi);



	int main() {
		
		int dizi[5];
		int *pc;
		pc = &dizi[0]; // pc= dizi;
		for(int i=0;i<5;i++) {
			
			printf("bir sayi girin :");
			scanf("%d",pc+i);
		}
		
		sort(&dizi[0]);
		for(int i = 0;i<5;i++) {
			printf("%d\t",*(pc+i));
		}
		
		
		return 0;
	}
	
	void sort(int *dizi) {
		int temp;
		for(int i=0;i<5;i++) {
			
			for(int j=i+1;j<5;j++){
			
			if(*(dizi+i)>*(dizi+j)) {
				temp= *(dizi+i);
				*(dizi+i)=*(dizi+j);
				*(dizi+j) = temp;
				
				
			}
			}
		}
	}
