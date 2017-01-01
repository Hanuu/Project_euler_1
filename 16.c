#include <stdio.h>

int main(){
    int digit[303];
    int temp[303];
    for(int k=0;k<304;k++){
        digit[k]=0;
        temp[k]=0;
    }
    digit[1]=2;
    
    for (int i=0;i<999;i++) {
        
        for(int j=1;j<304;j++){
            
            temp[j]=2*digit[j];
            digit[j]=(temp[j]+((temp[j-1]/10)%10))%10;
            }

    }
    int sum=0;
    for(int b=0;b<304;b++){
        sum=sum+digit[b];
    }
    printf("%d",sum);

}