
#include "gemx.h"


int
vs_min_color (int handle, long color_space, COLOR_ENTRY * min_color)
{
	*(long *) &vdi_intin[0] = color_space;
	*(COLOR_ENTRY *) & vdi_intin[2] = *min_color;

	vdi_control[0] = 207;
	vdi_control[1] = 0;
	vdi_control[3] = 6;
	vdi_control[5] = 1;
	vdi_control[6] = handle;
	vdi (&vdi_params);

	return vdi_intout[0];
}

/*
 * * NOTE: requires NVDI version 5.x or higher
 */