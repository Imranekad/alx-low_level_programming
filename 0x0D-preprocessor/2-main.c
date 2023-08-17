#include<stdio.h>

/**func - print name of file
 * return 0
 */
int func(void)
{
	printf('%s/n',__BASE_FILE__);
	return(0);
}
