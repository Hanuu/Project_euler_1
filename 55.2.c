#include <stdio.h>
#include <math.h>

int howmanydigit(unsigned long long number){
    unsigned long long temp = number;
    int digit=0;
    while(temp>=1){
        temp=temp/10;
        digit++;
    }
    
    //printf("%d",digit);
    return digit;
}//from 52.1


int Lychel (unsigned long long number){
    
    int digit=howmanydigit(number);
    
    for(int i=0;i<=digit/2;i++){
        if((number/(unsigned long long)pow(10,digit-i-1))%10!=(number/(unsigned long long)pow(10,i))%10){
           // printf("%d is not a Lychel number",number);
            return 0;
        }
    }
    
    
}

unsigned long long reverse(unsigned long long number){
    int digit=howmanydigit(number);
    unsigned long long out=0;
    
    for(int i=0;i<digit;i++){
        out+=((number/(unsigned long long)pow(10,i))%10)*(unsigned long long)pow(10,digit-i-1);
    }
    //printf("%d",out);
    return out;
    
}


int main(){
    int answer=0;
     for(int i=1;i<10000;i++){
         int count=1;
         unsigned long long temptemp=i;
         int temp=0;
         
        while(temp==0){
            temptemp=temptemp+reverse(temptemp);
            printf("%d %d %llu\n",i,count,temptemp);
            temp=Lychel(temptemp);
            if(count==50){
                answer++;
                temp=1;
            }
            count++;
            
        }
     }
     printf("%d",answer);
    
}// Never give up, you worth more than that
// Always keep in mind of your data type