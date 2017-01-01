#include <stdio.h>
#include <math.h>

long powerofpower(int number,int count){
    long output=1;
    while(count!=number){
        long candidate=output*number;
        output=candidate%10000000000;
        count++;
    }
    printf("%ld\n",output);
    return output;
}

int main(){
    
    long sum=0;
    for(int i=1;i<1001;i++){
        sum=(sum+powerofpower(i,0))%10000000000;
    }
    printf("    %ld !",sum);
    
}