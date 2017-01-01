#include <stdio.h>

#define SIZE 1000

void vetSum (int vet1[],int vet2[]);

int main(){
  int n,i;
  int n1[SIZE],n2[SIZE],temp[SIZE];

  n1[0]=1;
  n2[0]=1;

  for (i=1;i<SIZE;i++){
    n1[i]=0;
    n2[i]=0;
  }

  n = 4782;  
  
  while (n-2>0){      
    for (i=0;i<SIZE;i++)
      temp[i]=n2[i];
    vetSum(n1,n2);
    for (i=0;i<SIZE;i++)
      n1[i]=temp[i];      
    n--;
  }

  for (i=999;i>=0;i--)
    printf("%d",n2[i]);
  printf("\n");
  
  return 0;
}

void vetSum (int vet1[],int vet2[]){
  int i,aux,fica;
  int vai=0;
  for (i=0;i<SIZE;i++){
    aux=vet2[i]+vet1[i]+vai;
    vai = 0;
    if (aux<10)
      vet2[i]=aux;
    else {
      fica = aux % 10;
      vai = 1;
      vet2[i] = fica;
    }
  }
  return;
}