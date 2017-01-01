#include <stdio.h>
#include <time.h>
#include <math.h>


int triangle(int t,int s){
    int number=t*100+s;
    for(int i=1;i<2*number;i++){
        if(i*(i+1)/2==number){
            return i;
        }
    }
    return 0;
}

int square(int s,int p){
    int number=s*100+p;
    for(int i=1;i<number;i++){
        if(i*i==number){
            return i;
        }
    }
    return 0;
}

int pentagonal(int p,int hx){
    int number=p*100+hx;
    for(int i=1;i<number;i++){
        if(i*(3*i-1)/2==number){
            return i;
        }
    }
    return 0;
}

int hexagonal(int hx,int hp){
    int number=hx*100+hp;
    for(int i=1;i<number;i++){
        if(i*(2*i-1)==number){
            return i;
        }
    }
    return 0;
}

int heptagonal(int hp,int o){
    int number=hp*100+o;
    for(int i=1;i<number;i++){
        if(i*(5*i-3)/2==number){
            return i;
        }
    }
    return 0;
}

int octagoanal(int o,int t){
    int number=o*100+t;
    for(int i=1;i<number;i++){
        if(i*(3*i-2)==number){
            return i;
        }
    }
    return 0;
}

int main(){
    clock_t begin=clock();
    
    for(int t=11;t<100;t++){
        for(int s=11;s<100;s++){
            if(triangle(t,s)!=0){
                // printf("%d%d\n",t,s);
                // printf("%d\n\n",triangle(t,s));
                for(int p=11;p<100;p++){
                    if(square(s,p)!=0){
                        // printf("%d%d %d%d\n",t,s,s,p);
                        // printf("%d %d\n\n",triangle(t,s),square(s,p));
                        for(int hx=11;hx<100;hx++){
                            if(pentagonal(p,hx)!=0){
                                // printf("%d%d %d%d %d%d\n",t,s,s,p,p,hx);
                                // printf("%d %d %d\n\n",triangle(t,s),square(s,p),pentagonal(p,hx));   
                                for(int hp=11;hp<100;hp++){
                                    if(hexagonal(hx,hp)!=0){
                                        //printf("%d%d %d%d %d%d %d%d\n",t,s,s,p,p,hx,hx,hp);
                                        //printf("%d %d %d %d\n\n",triangle(t,s),square(s,p),pentagonal(p,hx),hexagonal(hx,hp));
                                        
                                        for(int o=11;o<100;o++){
                                            if(heptagonal(hp,o)!=0){
                                            // printf("%d%d %d%d %d%d %d%d %d%d\n",t,s,s,p,p,hx,hx,hp,hp,o);
                                            // printf("%d %d %d %d %d\n\n",triangle(t,s),square(s,p),pentagonal(p,hx),hexagonal(hx,hp),heptagonal(hp,o));   
                                                if(octagoanal(o,t)!=0){
                                                    printf("\n %d\n",t*100+s+s*100+p+p*100+hx+hx*100+hp+hp*100+o+o*100+t);
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
    }
    
    clock_t end=clock();
    double time_spent =(double)(end-begin)/CLOCKS_PER_SEC;
    printf("\nThe time spent is %f second",time_spent);
}