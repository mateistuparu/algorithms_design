#include <stdlib.h>
#include <stdio.h>
#include "activities.h"

void activities(struct activities *v, int n){
    int s=0,duration=0; //integers for input for the start and duration
    printf("Input the start time and duration of your activities: \n");
    for(int i=0; i<n; i++)
    {
       scanf("%d %d",&s, &duration);
       v[i].start=s;
       v[i].finish=s+duration;  // computing of the finish time for each activity
       v[i].duration=duration;
    }}
