#include <stdio.h> 
#include <stdlib.h>
#include <assert.h>

#define MAX_LEN 10

void swap(int *a, int j, int k) {    
    //code up
} 

void print_array(int *a) {

    for (int i = 0; i < MAX_LEN; i++) {
        printf("%d ", a[i]);    
    }
    printf("\n");
}

int main (int argc, char **argv) {
    
    assert(argc >= 3);
    
    int j = atoi(argv[1]);
    int k = atoi(argv[2]);
    
    //hint
    
    int num_array[] = {1,2,3,4,5,6,7,8,9,10};
    
    swap(num_array, j, k);
    
    print_array(num_array);
    
    return 0; 
}
 