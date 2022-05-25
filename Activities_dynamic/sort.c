#include<stdio.h>
#include "sort.h"
//This function will sort the activities according to the end time

void sort(struct activities *v, int n){
    int i,j;
    int aux_start; //parameter for storing the start time of the activity
    int aux_finish; //parameter for storing the end time of the activity

    for ( i = 0; i < n -1 ; i++) {
        for ( j = i; j < n; j++) {
            if ( v[i].finish > v[j].finish ){
                aux_finish = v[i].finish;
                aux_start= v[i].start;
                v[i].finish = v[j].finish;
                v[i].start = v[j].start;
                v[j].finish = aux_finish;
                v[j].start = aux_start;}
        }}}



