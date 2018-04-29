/* This file contains the table used to map system call numbers onto the
 * routines that perform them.
 */

#define _TABLE

#include "inc.h"
#include <minix/callnr.h>
#include <signal.h>
//#include "mproc.h" TALVEZ TENHAMOS DE ADICIONAR AS ESTRUTURAS DOS PROCESS

#define CALL(n)	[((n) - SPM_BASE)]

int (* const call_vec[NR_SPM_CALLS])(void) = {
	CALL(SPM_TEST)		= test_call,		/* _exit(2) */
};
