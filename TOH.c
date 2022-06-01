#include<stdio.h>

void TOH(int n,char from,char to,char max) {
   if (n==1){
        printf("Move disc 1 from %c to %c \n",n,from,to);
        return;
   }
   TOH(n-1,from,aux,to);
   printf("Move disc %d from %c to %c\n",n,from,to);
   TOH(n-1,aux,to,from);
}
int main() {
   int n=3;
   TOH(n,'A','B','C');
}
