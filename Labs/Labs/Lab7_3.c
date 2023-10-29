#include <stdio.h>

union HexToBits {
    unsigned long long hexValue;
    struct {
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
    } bits;
};

int main() {
    union HexToBits converter;

    scanf_s("%x", &converter.hexValue);


    printf("%s", converter.bits.bit1 ? "âîïðîèçâåäåíèå âêë \n" : "âîïðîèçâåäåíèå âûêë \n");
    printf("%s", converter.bits.bit2 ? "ïàóçà âêë \n" : "ïàóçà âûêë \n");
    printf("%s", converter.bits.bit3 ? "çàïèñü âêë \n" : "çàïèñü âûêë \n");

    return 0;
}
