
#include "gem.h"


short
wind_create_grect (short Parts, GRECT * r)
{
	aes_intin[0] = Parts;
	aes_intin[1] = r->g_x;
	aes_intin[2] = r->g_y;
	aes_intin[3] = r->g_w;
	aes_intin[4] = r->g_h;
	
	aes_control[0] = 100;
	aes_control[1] = 5;
	aes_control[2] = 1;
	aes_control[3] = 0;
	aes_control[4] = 0;
	
	aes (&aes_params);
	
	return aes_intout[0];
}
