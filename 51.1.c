#include <stdio.h>

int prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
    printf("%d ",number);
    return number;
}

int main(){
    int temp=0;
    for(int m=0;m<10;m++){
        for(int i=0;i<10;i++){
            for(int j=1;j<10;j=j+2){
                for(int k=1;k<10;k++){
                    prime(100000*k+10000*i+k*1000+100*m+k*10+j);
                }
                        printf("\n");

            }
        }
    }
}

// could have done better than this