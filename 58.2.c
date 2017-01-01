#include <stdio.h>
#include<math.h>
#include <time.h>

int prime(int number){
    for(int i=2;i<sqrt(number);i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
    return number;
}

int main(){
    clock_t begin = clock();

    int n=2;
    int totalofdiagonal=5;
    int numberofprime=3;
    double temp=(double)numberofprime/(double)totalofdiagonal;

    while(temp >= 0.1){
        int number=4*n*n+1;
        if(prime(number-2*n)!=0){
            numberofprime++;
        }
        if(prime(number+2*n)!=0){
            numberofprime++;
        }
        if(prime(number)!=0){
            numberofprime++;
        }
        totalofdiagonal+=4;
        //printf("%d / %d ",numberofprime, totalofdiagonal);
        temp=(double)numberofprime/(double)totalofdiagonal;
        //printf("%f %d\n",temp,n);
        
        n++;

    }
    printf("%d / %d\n",numberofprime, totalofdiagonal);
    printf("%d",2*n-1);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe time spent is %f",time_spent);
}
//prime -> sqrt
//To improve is to change, to be perfect is to change often