/*
 *  $Id$
 */

#include "gem_vdiP.h"

/** transforms a raster from standard format to device-specific format 
 *  and vice-versa. The transformation can be "in place" which means that both MFDBs 
 *  point to the same address. In this case transforming a big bitmap takes ages...
 *
 *  @param handle Device handle
 *  @param src pointer to the source MFDB
 *  @param dst pointer to the destination MFDB
 *
 *  @since all VDI versions
 *
 */

void
vr_trnfm (short handle, MFDB * src, MFDB * dst)
{
#if USE_LOCAL_VDIPB
	short vdi_control[VDI_CNTRLMAX]; 
	VDI_PARAMS(vdi_control, 0L, 0L, vdi_dummy, vdi_dummy );
#endif
	
	vdi_control_ptr(7) = src;
	vdi_control_ptr(9) = dst;

	VDI_TRAP_00 (vdi_params, handle, 110);
}
