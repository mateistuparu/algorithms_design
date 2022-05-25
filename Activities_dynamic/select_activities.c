#include"select_activities.h"
#include<stdlib.h>
#include <stdio.h>

void select_activities( struct activities *v, int n)
{
int i, j, k=0;
   int max=0; //the maximum number of activities that can be performed
   int *max_act =(int*) malloc ( sizeof( int ) * n ); //dynamic allocation of the max_act vector

   for ( i = 0; i < n; i++ )// initialize maximum number of activities values with 1 for all indexes
          max_act[i] = 1;

   for ( i = 1; i < n; i++ ){
      for ( j = 0; j < i; j++ ){
         if ( ((v[i].start) > (v[j].finish) )&&( max_act[i] < (max_act[j] + 1))){ // Compare the finish time of already finalized max_act with the start time of new max_act being constructed.
               max_act[i] = max_act[j] + 1;}}}

   for ( i = 0; i < n; i++ )//Pick maximum of all maximum number of activities  values
      if ( max < max_act[i] ){
            max = max_act[i];}

   free( max_act ); //free memory to avoid memory leak
    printf("\nThe maximum number of non-conflicting activities is: %d\n",max);


    }


