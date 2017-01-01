#include <stdio.h>

int divisiable(int a){
    for (int i=1;i<21;i++){
        if(a%i !=0){
            return 0;
        }
    }
    printf("%d",a);
}

int main(){
    int number=2520;
    int a=1;
    while(1){
        divisiable(number);
        number++;
    }
    
}