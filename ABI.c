#include "AdiLinkedList.h"

struct BigInteger{
    struct AdiLinkedList* data;
};

struct BigInteger* initBigInteger(){
    struct BigInteger* bigint = (struct BigInteger*)malloc(sizeof(struct BigInteger));
    bigint->data = initAdiLinkedList();
}

