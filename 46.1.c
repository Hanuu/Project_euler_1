#include <stdio.h>
#include <stdbool.h>

int composite(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
          //  printf("%d ",number);
            return number;
        }
    }
  //  printf("%d ",number);
    return 9;
}

bool prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
  //  printf("%d ",number);
    return 1;
}

bool check(int oddcomposite){
    bool notyet=true;
    int squareprime=1;
    while(notyet){
        
        if(0>(oddcomposite-2*squareprime*squareprime)){
            printf("%d",oddcomposite);
            return 1;
        }
        if(1==prime(oddcomposite-2*squareprime*squareprime)){
            printf("%d - 2*%d^2 \n",oddcomposite,squareprime);
            return 0;
        }
        
        squareprime++;
    }
    
}

int main(){
    bool Notfound=true;
    int n=9;
    
    while(Notfound){
        if(1==check(composite(n))){
            Notfound=0;
        }
        n+=2;

    }
}

//찬물도 위 아래가 있다