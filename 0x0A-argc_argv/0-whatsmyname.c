#include <stdio.h>


/**
 * 0-whatsmyname.c: a program that prints its name
 *
 */

/*defining main with arguments*/
int main(int argc,char* argv[])
{
	if(argc > 0)
	{
		printf("%s\n",argv[0]);
	}
	return 0;
}
