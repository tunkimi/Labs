//О/*Б*/бразцов Эльдар 9 лаб/*л*/а//бла
#include <stdio.h>
#define N 10
int mod(int a,int b){
  while(a>=b)a-=b;
  while(a<0)a+=b;
  return a;
}
int min(int a,int b){
  return (a<b)?a:b;
}
int max(int a,int b){
  return (a>b)?a:b;
}
int abs(int a){
  return (a>=0)?a:-a;
}
int sign(int a){
  return (a>0)?1:(a=0)?0:-1;
}
int main(){
  int k, i=24 ,j=-14, l=0,i1, b=0, j1;
  for(k=0;k<=50;k++){
    if(i>=5&&i<=15&&j>=-15&&j<=-5){
        b=1;
        break;
    }
    i1=mod(((i+k)*(j-k)*(l+k)),25);
    j1=mod((min(i+k,max(j-k,l-k))),30);
    l=abs(j-l)*sign(i)-abs(i-l)*sign(j);
    i=i1;
    j=j1;
  }
  if(b)printf("Точка попала квадрат со стороной 10 центром в точке (10;-10)\n\
  на %d секунде,\nв координатах (%d,%d),\nзначение параметра l равно %d\n",k,i,j,l );
  else printf("Точка не попала квадрат со стороной 10 центром в точке (10;-10)\n\
  закончив работу на %d секунде,\nв координатах (%d,%d),\nзначение параметра l равно %d\n",k,i,j,l );
}
