#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


int main () {

    for (char ch = getchar(); ch != EOF; ch = getchar()) {
        putchar(ch);
    }
    
}