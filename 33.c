#include <stdio.h>

int main(){
    int a,b,c,d;
    
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            for(c=1;c<a;c++){
                for(d=1;d<10;d++){
                    if(b==c){
                        if((10*a+b)*d==a*(10*c+d)){
                            printf("%d%d/%d%d =%d/%d\n",a,b,c,d,a,d);
                        }
                    }
                    if(a==c){
                        if((10*a+b)*d==a*(10*c+d)){
                            printf("%d%d/%d%d =%d/%d\n",a,b,c,d,b,d);
                        }
                    }
                    if(a==d){
                        if((10*a+b)*c==b*(10*c+d)){
                            printf("%d%d/%d%d =%d/%d\n",a,b,c,d,b,c);
                        }
                    }
                    if(b==d){
                        if((10*a+b)*a==c*(10*c+d)){
                            printf("%d%d/%d%d =%d/%d\n",a,b,c,d,b,d);
                        }
                    }

                }
            }
        }
    }
}