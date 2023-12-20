#include <stdlib.h>
#include "ABI.h"


struct BigInteger* initBigInteger(){
    struct BigInteger* bigint = (struct BigInteger*)malloc(sizeof(struct BigInteger));
    bigint->data = initAdiLinkedList();
    char* num = malloc(sizeof(char) * 8);
    
    return bigint;
}

long long toLongLong(struct BigInteger* bigInt){

}