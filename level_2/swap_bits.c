#include <unistd.h>

void	print_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
