#include <stdio.h>

int prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
  //  printf("%d ",number);
    return number;
}

int main(){
    
    int digit[4];
    for(int a=0;a<10;a++){
        digit[0]=a;
        for(int b=0; b<10;b++){
            digit[1]=b;
            for(int c=0;c<10;c++){
                digit[2]=c;
                for(int d=0; d<10;d++){
                    digit[3]=d;
                    printf("%d%d%d%d ",a,b,c,d);
                }
            }
        }
    }
}