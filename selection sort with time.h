#include <stdio.h>
#include <time.h>
int main() {
   clock_t start,end;
   double d;
   int num=1000000;
   int arr[num];
   for(int l=0;l<num;l++){
       arr[l]=rand()%100;
   }
   int n=num;
   int i, j, position, swap;
   start = clock();
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   end = clock();
      
    d = (end-start)/(double)(CLOCKS_PER_SEC);
    printf("\n %f",d);
    
   return 0;
}
