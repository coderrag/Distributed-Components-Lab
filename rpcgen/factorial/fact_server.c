/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fact.h"

int *
factorial_1_svc(int *argp, struct svc_req *rqstp)
{
	static int result = 1;
	int facter = 1;
	printf("Computing factorial...\n");
	for(int i=1;i<=*argp;i++) {
		facter = facter * i;
	}
	result = facter;
	return &result;
}
