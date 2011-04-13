#include "liboo/rts_types.h"
#include <stdio.h>
#include <stdlib.h>

extern void oo_rt_throw(void *exception_object);

__attribute__ ((unused))
void oo_rt_throw(void *exception_object)
{
	fprintf(stderr, "Caught exception 0x%x\n", (unsigned) exception_object);
	exit(-1);
}
