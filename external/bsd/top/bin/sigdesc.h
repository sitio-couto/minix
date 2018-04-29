/* This file was automatically generated */
/* by the awk script "sigconv.awk".      */

struct sigdesc {
    const char *name;
    int  number;
};

struct sigdesc sigdesc[] = {
    { "HUP",	 1 },
    { "INT",	 2 },
    { "QUIT",	 3 },
    { "ILL",	 4 },
    { "TRAP",	 5 },
    { "ABRT",	 6 },
    { "EMT",	 7 },
    { "FPE",	 8 },
    { "KILL",	 9 },
    { "BUS",	10 },
    { "SEGV",	11 },
    { "SYS",	12 },
    { "PIPE",	13 },
    { "ALRM",	14 },
    { "TERM",	15 },
    { "URG",	16 },
    { "STOP",	17 },
    { "TSTP",	18 },
    { "CONT",	19 },
    { "CHLD",	20 },
    { "TTIN",	21 },
    { "TTOU",	22 },
    { "IO",	23 },
    { "XCPU",	24 },
    { "XFSZ",	25 },
    { "VTALRM",	26 },
    { "PROF",	27 },
    { "WINCH",	28 },
    { "INFO",	29 },
    { "USR1",	30 },
    { "USR2",	31 },
    { "PWR",	32 },
    { "RTMIN",	33 },
    { "RTMAX",	63 },
    { "SNDELAY",	70 },
    { "KMEM",	71 },
    { "KMESS",	72 },
    { "KSIGSM",	73 },
    { "KSIG",	74 },
    { NULL,	 0 }
};
