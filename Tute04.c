/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//function protootype
int minimum(int a, int b);
int maximum(int a, int b);
int multiply(int a, int b);
// begins the main function
int main() {
  
  int no1, no2;//declaring variable
   printf("Enter a value for no 1 : ");//get input
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");//get input
   scanf("%d", &no2);
  
   printf("%d \n", minimum(no1, no2));//display minimum value                
   printf("%d \n", maximum(no1, no2));//display maximum value
   printf("%d \n", multiply(no1, no2));//display multiply value
   return 0;
  
}
int minimum(int a, int b){
  if(a < b){// cheack the min
    return a;
  }
  else
    return b;
}
int maximum(int a, int b){
  if(a > b)
    return a;
  else
    return b;
}
int multiply(int a, int b){

  return a * b;
}



