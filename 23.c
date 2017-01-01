#include <stdio.h>

int main(){
    int a=1;
    int sum=0;
    int AN[7430];
    for(int i=12;i<28124;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum>i){
            AN[a]=i;
            a++;
        }
        sum=0;
    }
    sum=0;
    for(int k=1;k<28124;k++){
        for(int o=1;o<7429;o++){
            int l=k-AN[o];
            for(int p=o;p<7429;p++){
                if(l==AN[p]){
                    break;
                }
               sum=sum+k;
            }
            break;
        }
        printf("%d  ",sum);
    }
}