#include <stdio.h>

int main(){
    
    int define_prime(int n,int a, int b){
        
        int number=n*n+n*a+b;
        
        for(int i=2;i<number;i++){
            int remain=number/i;
            if(remain*i==number){ 
                break;
            
            }
            
            if(i==number-1){
                return 1;
            }
            
        }
    
    }
}