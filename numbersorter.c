#include <stdio.h>


int main(){

// This program needs to create an array of 10 random numbers ranging from 1-50
// using a for loop. The program also needs to sort the numbers in the newly
// created array. Good luck!. 


int d[10];
int temp;
int i;
int j;

for(i= 0; i <= 10; ++i){

d[i] = (rand() % 50+1);

printf(" %i, ", d[i]);

}

printf("this is your array unsorted, I will now sort them for you!.");

      for (i = 0; i < (20 - 1); ++i){
         for (j = 0; j < (20 - 1 - i); ++j){
             if( d[j] > d[j+1]){
                  temp = d[j+1];
                  d[j+1] = d[j];
                  d[j] = temp;
                  }
			}
}

printf(" Here is your array sorted.");

for(i=0; i<=10; ++i){
		  printf("%i, ", d[i]);
}

return 0;
}












