/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "coursereg.h"


void
coursereg_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	struct arg  admit_1_arg;
	struct word  *result_2;
	struct word  view_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, coursereg, COURSEREG_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = admit_1(&admit_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = view_1(&view_1_arg, clnt);
	if (result_2 == (struct word *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	coursereg_1 (host);
exit (0);
}
