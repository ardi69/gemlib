
#include "gem.h"


short
appl_yield (void)
{
	aes_control[0] = 17;
	aes_control[1] = 0;
	aes_control[2] = 1;
	aes_control[3] = 0;
	aes_control[4] = 0;
	
	aes (&aes_params);
	
	return aes_intout[0];
}
