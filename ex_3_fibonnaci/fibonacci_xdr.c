/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "fibonacci.h"

bool_t
xdr_FIB (XDR *xdrs, FIB *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->number))
		 return FALSE;
	return TRUE;
}
