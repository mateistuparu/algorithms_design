#include <stdio.h>
// Application for solving problem no.3 from the homework assignment list
// Find the maximum set of activities that can be performed, given the start time and duration for each activity is known

#include <stdlib.h>
#include "activities.h"
#include "sort.h"

int main(){
    int n; //parameter used to store the number of activities

    struct activities *v; // linking the vector "list" to the activities structure

    printf("Input the number of activities:");
    scanf("%d", &n); // input the number of activities

    v = malloc(n* sizeof(struct activities)); // dynamic allocation for the vector "activity_list"
    activities(v, n); // call for the function "activities"
    printf("The following activities have been input:\n");
    for ( int i = 0; i < n; i++) { //printing the activities;
        printf("{%d, %d}\n", v[i].start, v[i].finish);
    }
    sort(v, n); // call for the function "sort_by_finish_time"

    select_activity(v, n); // call for the function "select_activity"
    return 0;
}
