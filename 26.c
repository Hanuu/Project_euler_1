#include <stdio.h>

int main(){
  int number,answer=0,countanswer=0;
  
  for(number=7;number<1001;number++){
    
    int digit=1000,count=1,value;
    value=10%number;
    
    while(value !=1 && digit>0){
      
      value=10*value;
      value=value%number;
      digit--;
      count++;
      if(value==0)break;
    
    }
    if(count>1 && countanswer<count &&digit>1){
      answer=number;
      countanswer=count;
      printf("%d %d\n",answer, countanswer);
      
    }
  }
  printf("%d",answer);

}
