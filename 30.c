#include <stdio.h>

int main(){
    int sum=0;
    for(int z=0;z<10;z++){
    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                for(int d=0;d<10;d++){
                    for(int e=0;e<10;e++){
                        if(z*z*z*z*z+a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e== z*100000+10000*a+1000*b+100*c+10*d+e){
                            printf("%d%d%d%d%d%d\n",z,a,b,c,d,e);
                            sum=sum+100000*z+10000*a+1000*b+100*c+10*d+e;
                            
                        }
                    }
                }
            }
        }
    }
    }
    printf("%d",sum);
}