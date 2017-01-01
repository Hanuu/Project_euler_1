#include <stdio.h>

int overlap2 (int a,int b){
    if(a==b){
        b++;
        overlap2(a,b);
    }
    else{
        return b;
    }
}
int overlap3 (int a,int b,int c){
    if(a==c||b==c){
        c++;
        overlap3(a,b,c);
    }
    else{
        return c;
    }
}
int overlap4 (int a,int b,int c,int d){
    if(a==d||b==d||c==d){
        d++;
        overlap4(a,b,c,d);
    }
    else{
        return d;
    }
}
int overlap5 (int a,int b,int c,int d,int e){
    if(a==e||b==e||c==e||d==e){
        e++;
        overlap5(a,b,c,d,e);
    }
    else{
        return e;
    }
}
int overlap6 (int a,int b,int c,int d,int e,int f){
    if(a==f||b==f||c==f||d==f||e==f){
        f++;
        overlap6(a,b,c,d,e,f);
    }
    else{
        return f;
    }
}
int overlap7 (int a,int b,int c,int d,int e,int f,int g){
    if(a==g||b==g||c==g||d==g||e==g||f==g){
        g++;
        overlap7(a,b,c,d,e,f,g);
    }
    else{
        return g;
    }
}
int overlap8 (int a,int b,int c,int d,int e,int f,int g,int h){
    if(a==h||b==h||c==h||d==h||e==h||f==h||g==h){
        h++;
        overlap8(a,b,c,d,e,f,g,h);
    }
    else{
        return h;
    }
}
int overlap9 (int a,int b,int c,int d,int e,int f,int g,int h,int i){
    if(a==i||b==i||c==i||d==i||e==i||f==i||g==i){
        i++;
        overlap9(a,b,c,d,e,f,g,h,i);
    }
    else{
        return i;
    }
}

int main(){
    int a,b,c,d,e,f,g,h,i;
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            b=overlap2(a,b);
            for(c=1;c<10;c++){
                c=overlap3(a,b,c);
                for(d=1;d<10;d++){
                    d=overlap4(a,b,c,d);
                    for(e=1;e<10;e++){
                        e=overlap5(a,b,c,d,e);
                            for(f=1;f<10;f++){
                                f=overlap6(a,b,c,d,e,f);
                                for(g=1;g<10;g++){
                                    g=overlap7(a,b,c,d,e,f,g);
                                    for(h=1;h<10;h++){
                                        h=overlap8(a,b,c,d,e,f,g,h);
                                        for(i=1;i<10;i++){
                                            i=overlap9(a,b,c,d,e,f,g,h,i);
                                    //        if((10*a+b)*(100*c+10*d+e)==1000*f+100*g+10*h+i){
                                    //        printf("%d%d * %d%d%d = %d%d%d%d\n",a,b,c,d,e,f,g,h,i);
                                    //    }
                                            if(a*(1000*b+100*c+10*d+e)==1000*f+100*g+10*h+i){
                                            printf("%d * %d%d%d%d = %d%d%d%d\n",a,b,c,d,e,f,g,h,i);
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