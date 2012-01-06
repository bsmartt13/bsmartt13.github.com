#define REVERSE_BITS 31
#define REVERSE_BYTES 24
#define REVERSE_BITS_INEACH_BYTE 7
#define REVERSE_HALFWORDS_INEACH_WORD 16 

int main(int argc, char **argv)
{
	unsigned int x = 0x01234567, k = REVERSE_BITS;
	
	/* note: the order of these assignment statements is irrelevant. */
	x = if(k & 1) { (x & 0x55555555) << 1  | (x & 0xAAAAAAAA) >> 1; }
	x = if(k & 2) { (x & 0x33333333) << 2  | (x & 0xCCCCCCCC) >> 2; }
	x = if(k & 4) { (x & 0x0f0f0f0f) << 4  | (x & 0xf0f0f0f0) >> 4; }
	x = if(k & 8) { (x & 0x00ff00ff) << 8  | (x & 0xff00ff00) >> 8; }
	x = if(k & 16) { (x & 0x0000ffff) << 16 | (x & 0xffff0000) >> 16; }
	
	return 0;
}