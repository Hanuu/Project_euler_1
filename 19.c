#include <stdio.h>

int main(){
    int day=334;
    int count;
    
    for(int year=1901;year<2000;year++){
        
        if(year%4==0){
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+29;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            
        }
        else{
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+28;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };
            day=day+30;
            if(day%7==1){
                count++;
            };
            day=day+31;
            if(day%7==1){
                count++;
            };

            
        }
    }
    printf("%d",count);
}