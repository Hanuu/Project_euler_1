#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPentagon(long number,int n){
    double check= ((1+sqrt(1+24*number))/6);
    if(check==(int)check){
        printf("%ld %d\n",number,n);
        return 1;
        
    }
    else{
        return 0;
    }
}

int main(){
    bool notFound =true;
    int n=150;
    
    while(notFound){
        if(checkPentagon(n*(2*n-1),n)){
          notFound=0;  
        }
        n++;
    }
    
}
// Be aware of the overflow, always