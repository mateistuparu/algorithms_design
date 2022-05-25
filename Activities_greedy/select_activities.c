#include<stdio.h>
#include "sort.h"
#include"select_activities.h"

void select_activity(struct activities *v, int n){
    int max_act=0; // variable to store the maximum number of functions
printf("Maximum set of activities is: \n");
int lastfinish=0; // auxiliary variable to store the finish time of the last job selected
     for(int i=0; i< n; i++){
            if(v[i].start>=lastfinish){ // comparing the finish time of the last selected activity with the time of start of the next activity
             printf("(%d,%d)", v[i].start, v[i].duration);
             lastfinish=v[i].finish;  //updating lastfinish to the latest selected activity
             max_act++;}
           }
	printf("\nThe maximum number of activities that can be performed by a person is %d\n", max_act);
     }

