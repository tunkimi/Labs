//lab8 Obraztsov Eldar
#include<stdio.h>
#include<stdlib.h>
int factorial(int a){
    if(a<0) return 0;
    if(a==0) return 1;
    return a*factorial(a-1);
}
int main(){
  int a, b, tr=1;
  FILE *file;
  file=fopen("lab8test.txt","rt");
  while(1){
  if(fscanf(file,"%d%d",&a, &b)==EOF)break;
  if(factorial(a)!=b)
  tr*=0;
}
  if(tr)printf("true\n");
  else printf("false\n");
  fclose(file);
  return 0;

}
