#include <stdio.h>
#include <math.h>

struct Convergent{
    int numerator;
    int denominator;
};

int flip(int esequence[101],int nth, struct Convergent *pconvergente){
    nth++;
    int tempn=pconvergente->numerator;
    int tempd=pconvergente->denominator;
    
    pconvergente->numerator=tempd;
    pconvergente->denominator=tempn+esequence[98-nth];
    if(nth==0){
        printf("%d\n%d",pconvergente->numerator,pconvergente->denominator);
    }
    else{
        flip(esequence,nth,pconvergente);
    }
}

int main(){
    int esequence[101];
    int start=2;
    
    for(int i=0;i<99;i++){
        if(i%3==1){
            esequence[i]=2*(i/3+1);
        }
        else{
            esequence[i]=1;
        }
        printf("%d ",esequence[i]);
    }
    struct Convergent convergente;
    struct Convergent *pconvergente=&convergente;
    
    pconvergente->numerator=1;
    pconvergente->denominator=esequence[98];
    
    int nth=0;
    flip(esequence,nth,&convergente);
    
}