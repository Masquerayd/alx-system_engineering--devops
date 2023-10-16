#include <unistd.h>

/**
 * printbuffer - writes the buffer to the to the stdout 
 * @buffer: The characters to print
 *
 * Return:  On success return 1. on error, -1 is  returned and 
 * errno is set appropriately.
 */

int printbuffer(*buffer)
{
	return(write(1,&buffer,1);
}
