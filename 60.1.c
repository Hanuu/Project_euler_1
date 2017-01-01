#include <stdio.h>
#include <math.h>
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

int howmanydigit(int number){
    
    int temp = number;
    int digit=0;
    while(temp>=1){
        temp=temp/10;
        digit++;
    }
    
    //printf("%d",digit);
    return digit;
}

int concatenatedprime(int *array){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(prime(array[i]*pow(10,howmanydigit(array[j]))+array[i])==0){
                return 0;
            }
            if(prime(array[j]*pow(10,howmanydigit(array[i]))+array[j])==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    clock_t begin = clock();
    
    int ListofPrime[1260];
    int j=2;
    ListofPrime[0]=2;
    ListofPrime[1]=3;
    for(int i=5;i<10000;i=i+2){
        int b=prime(i);
        if(b!=0){
           ListofPrime[j]=b;
           j++;
        }
    }
    
    // printf("Start");
    for(int aa=4;aa<1260;aa++){
        for(int bb=3;bb<aa;bb++){
            for(int cc=2;cc<bb;cc++){
                for(int dd=1;dd<cc;dd++){
                    for(int ee=1;ee<dd;ee++){
                        int array[5]={ListofPrime[aa],ListofPrime[bb],ListofPrime[cc],ListofPrime[dd],ListofPrime[ee]};
                        concatenatedprime(&array[0]);
                    }
                }
            }
        }
    }
 
 
 
 
 
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe time spent is %f",time_spent);
}