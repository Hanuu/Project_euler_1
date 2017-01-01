#include <stdio.h>

int main(){
    
    int array[1001];
    for(int i=0;i<1001;i++){
        array[i]=0;
    }
    for(int k=1000;k>=3;k--){
        for(int i=(k-1)/2;i>=(k)/3;i--){
            for(int j=i;j>(k-i)/2;j--){
                if(i*i==j*j+(k-i-j)*(k-i-j)){
                    //printf("\n%d\n",k);
                    //printf("%d %d %d\n",i,j,k-i-j);
                    array[k]++;
                }
            }
        }
    }
    int number=0;
    int answer=0;
    for(int i=0;i<1000;i++){
        if(array[i]>number){
            number=array[i];
            answer=i;
        }
    }
    printf("%d",answer);
    /*
    for(int i=0;i<1001;i++){
        printf("%d %d\n",i,array[i]);
    }*/
}