#include <stdio.h>
#include <stdio.h>

int stringlen(char string[]);

int main(){

  char str[] = "hello world";

  printf("The length of the string \"%s\" is %i\n",str, stringlen(str));

  return(0);
}

int stringlen(char string[]){
  int length = 0;

   while (string[length] != '\0')
      length++;

   return length;
}
