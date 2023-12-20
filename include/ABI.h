#include "AdiLinkedList.h"

#ifndef ABI_H
#define ABI_H

struct BigInteger{
    struct AdiLinkedList* data;
};


struct BigInteger* initBigInteger();

#endif