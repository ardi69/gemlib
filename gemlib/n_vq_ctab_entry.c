
#include "gemx.h"


long
vq_ctab_entry (short handle, short index, COLOR_ENTRY * color)
{
	vdi_intin[0] = index;

	vdi_control[0] = 206;
	vdi_control[1] = 0;
	vdi_control[3] = 1;
	vdi_control[5] = 1;
	vdi_control[6] = handle;
	vdi (&vdi_params);

	*color = *(COLOR_ENTRY *) & vdi_intout[2];
	return (*(long *) &vdi_intout[0]);
}

/*
 * * NOTE: requires NVDI version 5.x or higher
 */
