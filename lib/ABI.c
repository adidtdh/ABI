#include "ABI.h"
#include <stdlib.h>

struct BigInteger{
    struct AdiLinkedList* data;
};

struct BigInteger* initBigInteger(){
    struct BigInteger* bigint = (struct BigInteger*)malloc(sizeof(struct BigInteger));
    bigint->data = initAdiLinkedList();
    char* num = malloc(sizeof(char) * 8);
    insertAtBegining(bigint->data,num);
    
    return bigint;
}

