#include <stdio.h>

int prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
  //  printf("%d ",number);
    return number;
}

int digitsort(int number){
    
    int digit[4];
    
    digit[0]=number%10;
    digit[1]=(number%100-digit[0])/10;
    digit[2]=(number%1000-number%100)/100;
    digit[3]=(number%10000-number%1000)/1000;
    
    int temp=0;
    for(int i=3;i>0;i--){
        for(int j=0;j<i;j++){
            if(digit[j+1]>digit[j]){
                temp=digit[j+1];
                digit[j+1]=digit[j];
                digit[j]=temp;
            }
        }
    }
    int answer=1000*digit[3]+100*digit[2]+10*digit[1]+digit[0];
    
    return answer;
}

int main(){
    int primes[1062];
    int k=1;
    for(int i=1000;i<9999;i++){
        int temp=prime(i);
        if(temp!=0){
            primes[k]=temp;
            k++;
        }
    }
    
    int count=0;
    int setsofprimes[42840][3];
    for(int a=1;a<1062;a++){
        for(int b=a+1;b<1061;b++){
            for(int c=b+1;c<1060;c++){
                if(primes[c]-primes[b]==primes[b]-primes[a]){
                    setsofprimes[count][0]=primes[a];
                    setsofprimes[count][1]=primes[b];
                    setsofprimes[count][2]=primes[c];
                    count++;
                }
            }
        }
    }
    
    int sortedprime[42840][3];
    for(int i=0;i<42840;i++){
        sortedprime[i][0]=digitsort(setsofprimes[i][0]);
        sortedprime[i][1]=digitsort(setsofprimes[i][1]);
        sortedprime[i][2]=digitsort(setsofprimes[i][2]);
    }
    for(int j=0;j<42840;j++){
        if(sortedprime[j][0]==sortedprime[j][1]&&sortedprime[j][1]==sortedprime[j][2]){
            printf("%d %d %d\n",setsofprimes[j][0],setsofprimes[j][1],setsofprimes[j][2]);        
    
        }
    }
    
}

//Persistance