#include<stdio.h>
#include<stdlib.h>
#include"../headers/simple.h"

double WEIGHTS[] = {-2.00,5.63};


int main(int arg, char ** args){
    printf("one in one out solution: %f\n",one_in_one_out(2.143,-2.00));
    
    
    
    double *result = one_in_multiple_out(5.63,WEIGHTS,2);
    for (int i = 0; i<2; i++){
        printf("one in multiple out solution for output node %d: %f\n",i, result[i]);
    }

    free(result);
    return 0;
}