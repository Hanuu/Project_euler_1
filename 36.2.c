#include <stdio.h>
#include <math.h>

int main(void){
  int i, j, sum = 0, bi[32] = {0}, i_temp, logg10, logg2, temp, is_bi_pal;

	for(i = 1; i<=1000000; i+=2){
		is_bi_pal = 1;
		i_temp = i;
		temp = 0;
		logg10 = log10(i);
		logg2 = (int)((double)log10(i)/log10(2));

		for(j=0; j<=logg10; j++){
			temp *= 10;
			temp += i_temp%10;
			i_temp /= 10;
		}

		if(temp == i){
			i_temp = i;
		}else{
			continue;
		}

		for(j=0; j<=logg2; j++){
			bi[31-j] = i_temp%2;
			i_temp /= 2;
		}

		for(j=0; j<=logg2/2; j++){
			if(bi[31-j] != bi[31-logg2+j]){
				is_bi_pal = 0;
				break;
			}
		}

		if(is_bi_pal){
			sum += i;
		}

		printf("%d %d %d %d{",i ,temp, logg10, logg2);
		for(j=0; j<32; j++){
			printf("%d,",bi[j]);
		}
		printf("}, %d\n",is_bi_pal);
	}

	printf("%d\n", sum);
}

//http://hagazzusa.tistory.com/entry/Project-Euler-36%EB%B2%88-%EB%AC%B8%EC%A0%9C