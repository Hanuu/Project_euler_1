#include <stdio.h>

int check(long i){
    int digit[11]={11,11,11,11,11,11,11,11,11,11,11};
    int count[11]={0,0,0,0,0,0,0,0,0,0,0};
    digit[10]=(i/1000000000)%10;
    digit[9]=(i/100000000)%10;
    digit[8]=(i/10000000)%10;
    digit[7]=(i/1000000)%10;
    digit[6]=(i/100000)%10;
    digit[5]=(i/10000)%10;
    digit[4]=(i/1000)%10;
    digit[3]=(i/100)%10;
    digit[2]=(i/10)%10;
    digit[1]=(i)%10;
    
    for(int j=1;j<11;j++){
        count[digit[j]]++;
        if(count[digit[j]]==2){
            return 0;
        }
    }
    
    if( (digit[9]*100 + digit[8]*10+digit[7])%2 != 0){
        return 0;
    }
    if( (digit[8]*100 + digit[7]*10+digit[6])%3 != 0){
        return 0;
    }
    if( (digit[7]*100 + digit[6]*10+digit[5])%5 != 0){
        return 0;
    }
    if( (digit[6]*100 + digit[5]*10+digit[4])%7 != 0){
        return 0;
    }
    if( (digit[5]*100 + digit[4]*10+digit[3])%11 != 0){
        return 0;
    }
    if( (digit[4]*100 + digit[3]*10+digit[2])%13 != 0){
        return 0;
    }
    if( (digit[3]*100 + digit[2]*10+digit[1])%17 != 0){
        return 0;
    }
    
    printf("%ld\n", i);
}
int main(){
     for(long i=9876543210;i>1023456789;i--){
         check(i);
     }
}

// 4160357289
// 4130952867
// 4106357289
// 1460357289
// 1430952867
// 1406357289
// =16695334890