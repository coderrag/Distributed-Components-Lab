/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculator.h"

bool_t
xdr_numbers (XDR *xdrs, numbers *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->b))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->c))
		 return FALSE;
	return TRUE;
}
