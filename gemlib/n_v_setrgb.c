/*
 *  $Id$
 */

#include "gem_vdiP.h"
#include "mt_gemx.h"

/** 
 *
 *  @param handle Device handle
 *  @param type 
 *  @param r 
 *  @param g 
 *  @param b 
 *
 *  @since NVDI 5 ?
 *
 *
 *
 */

void
v_setrgb (short handle, short type, short r, short g, short b)
{
#if USE_LOCAL_VDIPB
	/* todo (doc wanted) */
	short vdi_control[VDI_CNTRLMAX]; 
	short vdi_intin[3];   
	short vdi_intout[VDI_INTOUTMAX]; 
	short vdi_ptsout[VDI_PTSOUTMAX]; 
	VDI_PARAMS(vdi_control, vdi_intin, 0L, vdi_intout, vdi_ptsout);
#endif
	
	vdi_intin[0] = r;
	vdi_intin[1] = g;
	vdi_intin[2] = b;

	VDI_TRAP_ESC (vdi_params, handle, 138,type, 0,3);
}
