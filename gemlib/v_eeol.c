
#include "gem.h"


void
v_eeol (short handle)
{
	vdi_control[0] = 5;
	vdi_control[1] = 0;
	vdi_control[3] = 0;
	vdi_control[5] = 10;
	vdi_control[6] = handle;
	vdi (&vdi_params);
}

/*
 * * text function
 */
