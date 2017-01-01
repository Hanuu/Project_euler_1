#include <stdio.h>
#include <math.h>

int howmanydigit(int number){
    int temp = number;
    int digit=0;
    while(temp>=1){
        temp=temp/10;
        digit++;
    }
    
    //printf("%d",digit);
    return digit;
}//from 52.1


int Lychel (int number){
    int count=0;
    int digit=howmanydigit(number);
    
    for(int i=0;i<=digit/2;i++){
        if((number/(int)pow(10,digit-i-1))%10!=(number/(int)pow(10,i))%10){
           // printf("%d is not a Lychel number",number);
            return 0;
        }
    }
    
    
}

int reverse(int number){
    int digit=howmanydigit(number);
    int out=0;
    
    for(int i=0;i<digit;i++){
        out+=((number/(int)pow(10,i))%10)*(int)pow(10,digit-i-1);
    }
    //printf("%d",out);
    return out;
    
}


int main(){
    int answer=0;
     for(int i=1;i<100;i++){
         int count=0;
         int temptemp=i;
         int temp=Lychel(i);
         
        while(temp==0){
            temptemp=temptemp+reverse(temptemp);
            printf("%d %d\n",i,temptemp);
            temp=Lychel(temptemp);
            if(count==50){
                answer++;
                temp=0;
            }
            
        }
     }
     printf("%d",answer);
    
}