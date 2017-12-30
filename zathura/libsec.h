#ifndef SECCOMP_H
#define SECCOMP_H

/* basic filter */
/* this mode allows normal use */
/* only dangerous syscalls are blacklisted */
int protectedMode(void);

/* secure whitelist filter */
/* whitelist minimal syscalls only */
/* this mode does not allow to open external links or to start applications */
/* network connections are prohibited as well */
int protectedView(void);

/* strict filter before document parsing */
/* this filter is to be enabled after most of the initialisation of zathura has finished */
int strictFilter(void);

#endif
