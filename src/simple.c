#include<stdio.h>
#include<stdlib.h>
#include "../headers/simple.h"

double one_in_one_out(double input, double weight){
    double output = input*weight;
    return output; 
}

double* one_in_multiple_out(double input, double* weight, int number_of_nodes){
    if (number_of_nodes <= 0 || weight == NULL){
        return NULL;
    }
    double* output = (double*)malloc(number_of_nodes*sizeof(double));
    for (int i = 0; i< number_of_nodes; i++){
        output[i] = input*weight[i];
    }
    return output;
}