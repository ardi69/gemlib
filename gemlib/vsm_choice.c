
#include "gem.h"


short
vsm_choice (short handle, short *choice)
{
	vdi_control[0] = 30;
	vdi_control[1] = 0;
	vdi_control[3] = 0;
	vdi_control[5] = 0;
	vdi_control[6] = handle;
	vdi (&vdi_params);
	*choice = vdi_intout[0];
	return vdi_control[4];
}
