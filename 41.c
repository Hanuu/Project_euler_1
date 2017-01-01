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
    int number[10];
    for(int i=1;i<10;i++){
        number[i]=i;
    }
    int digit[10];
    int candidate=0;
    //case of 8 digits
    
    candidate=10000000*digit[8]+1000000*digit[7]+100000*digit[6]+10000*digit[5]+1000*digit[4]+100*digit[3]+10*digit[2]+digit[1];
    for()
}