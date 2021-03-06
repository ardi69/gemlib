#include "gem_vdiP.h"

/** 
 *
 *  @param handle Device handle
 *
 *  @return 
 *
 *  @since 
 *
 *  @sa
 *
 *
 *
 */

short
v_flushcache (short handle)
{
	short vdi_control[VDI_CNTRLMAX]; 
	short vdi_intout[2]; /* todo (doc wanted) */

	VDI_PARAMS(vdi_control, 0L, 0L, vdi_intout, vdi_dummy );
	
	VDI_TRAP_00 (vdi_params, handle, 251);
	
	return vdi_intout[0];
}
