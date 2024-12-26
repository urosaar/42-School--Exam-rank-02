#include <stdio.h>
unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}
int main()
{
    unsigned char octet = 171;
    printf("%d",swap_bits(octet));
}