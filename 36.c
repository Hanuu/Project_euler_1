#include <stdio.h>
#include <math.h>

int digit(int number){
    int out=0;
    while(number>=1){
        number/=10;
        out++;
    }
    return out;
}

int function2(int number, int binarydigit[20]){
    int k=0;
    while(number!=1){
        int temp=number/2;
        int RestTemp=number%2;
        number=number/2;
        *binarydigit[k]=RestTemp;
        k++;
    }
}

int main(){
    int sum=0;
    for(int number=1;number<1000000;number+=2){
        
        int numberofdigit[6];
        for(int i=0;i<digit(number);i++){
            numberofdigit[i]=number/pow(10,i);
        }
        
        int binarydigit[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        
        if(digit(number)==1){
            sum+=number;
        }
        else if(digit(number)==2){
            if(numberofdigit[0]==numberofdigit[1]){
                function2(number,&binarydigit[]);
                
            }
        }
        else if(digit(number)==3){
            
        }
        else if(digit(number)==4){
            
        }
        else if(digit(number)==5){
            
        }
        else if(digit(number)==6){
            
        }

    }
    printf("%d",sum);
}