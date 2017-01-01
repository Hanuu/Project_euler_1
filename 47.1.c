#include <stdio.h>

int factorization(int number){
    int original=number;
    int Factor[100];
    int n=1;
    int fac=2;
    int count=0;
    while(number !=1){
        int maybe=number/fac;
        if(number==maybe*fac){
            Factor[n]=fac;
            number=number/fac;
            n++;
            fac=2;
        }
        else{
            fac++;
        }
    }
    for(int i=1;i<n-1;i++){
        if(Factor[i]==Factor[i+1]){
            count++;
        }
    }
    // printf("\n\n%d %d\n",original,n-count-1);
    // for(int i=1;i<n;i++){
    //     printf("%d ", Factor[i]);
    // }
    return n-count-1;
}

int main(){
    int Countof[200000];
    for(int i=646;i<200000;i++){
        Countof[i]=factorization(i);
    }
    for(int i=646;i<200000;i++){
        if(Countof[i]>=4&&Countof[i+1]>=4&&Countof[i+2]>=4&&Countof[i+3]>=4){
            printf("%d",i);
        }
    }
}
//너무쉽게 포기하지 말자