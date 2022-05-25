#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int randomise(int n) //function to generate random integers
{ int s, duration;
srand(time(0));
 for(int i = 0; i<n; i++){
   s=rand()%24; // we use a 24 hour format for inclusivity 
   duration=rand()%24;
    if(duration==0){ // duration of the activities cannot be 0 to be considered valid
      duration=rand()%24;}
  printf(" (%d, %d) ", s, duration);
}        

    return 0;
}
int main(void)
{ int n=0;
  printf("Input the desired number of activities to be randomly selected: \n");
  scanf("%d", &n);


 printf("The following activities have been generated: \n");
 printf("Note: the first integer represents the start time and the second integer the duration of each activity. \n");
 randomise( n); // call for the function "randomise"

return 0;
}
