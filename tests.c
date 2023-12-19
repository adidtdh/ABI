#include <stdio.h>
#include <assert.h>

int main(){
    struct BigInteger* bi = initBigInteger();
    
    printf("%s", get(bi->data,0));
}