#include "misc.h"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

u8 Lookup_HiIgnMap()
{
	u16 res = Table_Lookup_word_2D_3D((__DEADloc == 0xDEAD) ? &ramHiIgnMap : &romHiIgnMap);

	return res >> 8;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++