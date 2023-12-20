#include "AdiLinkedList.h"
#include <stdio.h>
#include <assert.h>
#include <ABI.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(){
    struct BigInteger* bi = initBigInteger();
    
    int num = 8878;
    
    
    printf("it is %d \n", *(int*)get(bi->data,0));
}