#include <stdio.h>

int main(){
    int count=0;
    
    for(int h=0;h<=1;h++){
        for(int g=0; g<=2;g++){
            for(int f=0;f<=4;f++){
                for(int e=0;e<=10;e++){
                    for(int d=0;d<=20;d++){
                        for(int c=0;c<=40;c++){
                            for(int b=0;b<=100;b++){
                                for(int a=0;a<=200;a++){
                                    if(200*h+100*g+50*f+20*e+10*d+5*c+2*b+a==200)
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d",count);
}
//Sometimes, you just have to walk straight;