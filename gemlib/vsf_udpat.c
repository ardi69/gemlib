
#include "gem.h"


void
vsf_udpat (int handle, int pat[], int planes)
{
	register int i, j;

	j = planes << 4;
	for (i = 0; i < j; i++)
		vdi_intin[i] = pat[i];
	vdi_control[0] = 112;
	vdi_control[1] = 0;
	vdi_control[3] = j;
	vdi_control[6] = handle;
	vdi (&vdi_params);
}

/*
 * * fill attribute
 */