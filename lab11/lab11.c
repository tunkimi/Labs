#include "stdio.h"
int main() {
  FILE *file1=fopen("lab11in.txt","r");
  FILE *file2=fopen("lab11out.txt","w");
  int a=' ', b;
  int t=feof(file1);
  fputc(a,file2);
  while(!feof(file1)){
    a=fgetc(file1);
    if(a=='\n'){
      if((b=fgetc(file1))==EOF){
        fputc(' ',file2);
        return 0;
      }
      else{
      fputc(' ',file2);
      fputc('\n',file2);
      fputc(' ',file2);
      fputc(b,file2);
        continue;
      }
    }
    else{
      fputc(a,file2);
    }
  }
  fputc(' ',file2);

  fclose(file1);
  fclose(file2);
  return 0;
}
