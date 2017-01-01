#include <stdio.h>

int main(){
    int digit[10];
    int a,b,c,d,e,f,g,h,i;
    for(a=1;a<10;a++){
        digit[1]=a;
        for(b=1;b<10;b++){
            if(b==a){
                
            }
            else{
                digit[2]=b;
            }
            for(c=1;c<10;c++){
                if(c==a||c==b){
                    
                }
                else{
                    digit[3]=c;
                }
                for(d=1;d<10;d++){
                    if(d==a||d==b||d==c){
                        
                    }
                    else{
                        digit[4]=d;
                    }
                    for(e=1;e<10;e++){
                        if(e==a||e==b||e==c||e==d){
                            
                        }
                        else{
                            digit[5]=e;
                        }
                        for(f=1;f<10;f++){
                            if(f==a||f==b||f==c||f==d||f==e){
                                
                            }
                            else{
                                digit[6]=f;
                            }
                            for(g=1;g<10;g++){
                                if(g==a||g==b||g==c||g==d||g==e||g==f){
                                    
                                }
                                else{
                                    digit[7]=g;
                                }
                                for(h=1;h<10;h++){
                                    if(h==a||h==b||h==c||h==d||h==e||h==f||h==g){
                                        
                                    }
                                    else{
                                        digit[8]=h;
                                    }
                                    for(i=1;i<10;i++){
                                        if(i==a||i==b||i==c||i==d||i==e||i==f||i==g||i==h){
                                            
                                        }
                                        else{
                                            digit[9]=i;
                                        }
                                        
                                        if((10*a+b)*(100*c+10*d+e)==1000*f+100*g+10*h+i){
                                            printf("%d%d * %d%d%d = %d%d%d%d\n",a,b,c,d,e,f,g,h,i);
            
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    
}