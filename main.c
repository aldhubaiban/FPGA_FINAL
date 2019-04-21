#include <stdio.h>
#include "read.h"




int main ()
{
static int prt[21];
int i=0;

	read_from_string(prt);

for (i=0;i<21;i++)
{
printf("%d\n",prt[i] );
}
	return 0;

}

