#include <stdio.h>

struct fraction{
    
    unsigned long long numerator;
    unsigned long long denominator;
};

int main(){
    
    struct fraction number[1001];
    
    number[1].numerator=3;
    number[1].denominator=2;
    int temp=0;
    for(int i=2;i<500;i++){
        number[i].denominator=number[i-1].numerator+number[i-1].denominator;
        number[i].numerator=number[i].denominator+number[i-1].denominator;
    
        printf("%llu / %llu\n",number[i].numerator,number[i].denominator);
    }
    
    
}