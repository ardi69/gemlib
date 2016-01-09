/*
 *  $Id$
 */

#include "gem_vdiP.h"
#include "vdi_userdef.h"


/** This function displays a string. The string starts at the current cursor 
 *  position.
 *
 *  @param handle Device handle
 *  @param str
 *
 *  @since all VDI versions
 *  @note Use it for work with userdef, not reentrant function!
 */

void
udef_v_curtext (short handle, const char *str)
{
	short n = vdi_str2array_n (str, _VDIParBlk.vdi_intin, VDI_INTINMAX);

	VDI_PARAMS(_VDIParBlk.vdi_control, _VDIParBlk.vdi_intin, 0L, vdi_dummy, vdi_dummy );
	
	VDI_TRAP_ESC (vdi_params, handle, 5,12, 0,n);
}