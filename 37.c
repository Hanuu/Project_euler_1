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

int define(int number,int digits,int *sum){
    int count=0;
    int power=10;
    for(int i=2;i<digits+1;i++){
        power*=10;
        int b=prime(number%power);
        if(b!=0){
            count++;
        }
        if(b==0){
            break;
        }
    }

    int power2=1;
    for(int j=0;j<digits-2;j++){
        power2*=10;
        int a=number/power2;
        int c=prime(a);
        if(c!=0){
            count++;
        }
        if(c==0){
            break;
        }
    }
    if(count ==2*digits-3){
        *sum=*sum+number;
        printf("\n %d \n",number);
    }
    
}

int main(){
    int sum=0;
    int digit[4]={3,7,2,5};
    
    int twodigits=0;
    for(int j=0;j<4;j++){
        for(int k=0;k<2;k++){
            twodigits=10*digit[j]+digit[k];
          //  printf("\ntwodigits : %d\n",twodigits);
            define(twodigits,2,&sum);
        }
    }
    
    int threedigits=0;
    for(int j=0;j<4;j++){
        for(int k=0;k<2;k++){
            for(int l=1;l<10;l=l+2){
                threedigits=100*digit[j]+10*l+digit[k];
             //   printf("\nthreedigits : %d\n",threedigits);
                define(threedigits,3,&sum);
            }
        }
    }
    
    int fourdigits=0;
    for(int j=0;j<4;j++){
        for(int k=0;k<2;k++){
            for(int l=1;l<10;l=l+2){
                for(int o=1;o<10;o=o+2){
                    fourdigits=1000*digit[j]+100*l+10*o+digit[k];
                //    printf("\nfourdigits : %d\n",fourdigits);
                    define(fourdigits,4,&sum);
                }
            }
        }
    }
    
    int fivedigits=0;
    for(int j=0;j<4;j++){
        for(int k=0;k<2;k++){
            for(int l=1;l<10;l=l+2){
                for(int o=1;o<10;o=o+2){
                    for(int n=1;n<10;n=n+2){
                        fivedigits=10000*digit[j]+1000*l+100*o+10*n+digit[k];
                     //   printf("\nfivedigits : %d\n",fivedigits);
                        define(fivedigits,5,&sum);
                    }
                }
            }
        }
    }
    
    int sixdigits=0;
    for(int j=0;j<4;j++){
        for(int k=0;k<2;k++){
            for(int l=1;l<10;l=l+2){
                for(int o=1;o<10;o=o+2){
                    for(int n=1;n<10;n=n+2){
                        for(int g=1;g<10;g=g+2){
                            sixdigits=100000*digit[j]+10000*l+1000*o+100*n+10*g+digit[k];
                        //   printf("\nfivedigits : %d\n",fivedigits);
                            define(sixdigits,6,&sum);
                        }
                    }
                }
            }
        }
    }
    printf("\n\n %d",sum);
    
}