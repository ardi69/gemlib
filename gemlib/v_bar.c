/*
 *  $Id$
 */

#include "gem_vdiP.h"

/** draws a filled rectangle. In contrast to "FILLED RECTANGLE" a 
 *  border is drawn.
 *
 *  @param handle Device handle
 *  @param pxy coordinates of the rectangle
 *
 *  @since all VDI versions
 *
 */

void
v_bar (short handle, short pxy[])
{
#if USE_LOCAL_VDIPB
	short vdi_control[VDI_CNTRLMAX]; 
	VDI_PARAMS(vdi_control, 0L, pxy, vdi_dummy, vdi_dummy);
#else
	vdi_params.ptsin = pxy;
#endif
	
	VDI_TRAP_ESC (vdi_params, handle, 11,1, 2,0);

#if !(USE_LOCAL_VDIPB)
	vdi_params.ptsin = vdi_ptsin;
#endif
}
