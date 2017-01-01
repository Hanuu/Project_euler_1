#include <stdio.h>

int prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
    printf("%d\n",number);
}

int check(int i){
    int digit[10]={11,11,11,11,11,11,11,11,11,11};
    int count[10]={3,0,0,0,0,0,0,0,0,0};
   // digit[9]=(i/100000000)%10;
    //digit[8]=(i/10000000)%10;
    digit[7]=(i/1000000)%10;
    digit[6]=(i/100000)%10;
    digit[5]=(i/10000)%10;
    digit[4]=(i/1000)%10;
    digit[3]=(i/100)%10;
    digit[2]=(i/10)%10;
    digit[1]=(i)%10;
    

    
    for(int j=1;j<10;j++){
        count[digit[j]]++;
        if(count[digit[j]]==2||digit[j]==9||digit[j]==8||digit[j]==0){
            return 0;
        }
    }
    
    prime(i);
    
}
int main(){
     for(int i=7654321;i>1000000;i=i-2){
         check(i);
     }
    //check(2143);
}