int main(int argc, char **argv)
{
	unsigned int x = 0xbc637eff;

	/* note: the order of these assignment statements is irrelevant. */
	x = (x & 0x55555555 + ((x >> 1)  & 0x55555555);
	x = (x & 0x33333333 + ((x >> 2)  & 0x33333333);
	x = (x & 0x0f0f0f0f + ((x >> 4)  & 0x0f0f0f0f);
	x = (x & 0x00ff00ff + ((x >> 8)  & 0x00ff00ff);
	x = (x & 0x0000ffff + ((x >> 16) & 0x0000ffff);	
	return 0;
}