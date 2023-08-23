#include<stdarg.h>
/**sum_them_all- return the sum of intigers
 * @count: intiger
 * return s
 */

int sum_them_all(const unsigned int n, ...)
{
	if(n == 0)
		return 0;
	va_list args;
	va_start(args, n);
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		s = s + num;
	}
	va_end(args);
	return s;
}
