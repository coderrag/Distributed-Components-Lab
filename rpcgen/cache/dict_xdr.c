/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "dict.h"

bool_t
xdr_word (XDR *xdrs, word *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->s, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
