/*
firedns.h - firedns library declarations
Copyright (C) 2002 Ian Gulliver

This file has been edited for use in BOPM - see the real library at
http://ares.penguinhosting.net/~ian/ before you judge firedns based
on this..

This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _FIREDNS_H
#define _FIREDNS_H

/* max number of nameservers used */
#define FDNS_MAX              8
/* preferred firedns config file */
#define FDNS_CONFIG_PREF     HOPM_ETCDIR "/firedns.conf"
/* fallback config file */
#define FDNS_CONFIG_FBCK     "/etc/resolv.conf"
/* DNS well known port */
#define FDNS_PORT            53
/* name to IPv4 address */
#define FDNS_QRY_A            1
/* name to IPv6 address */
#define FDNS_QRY_AAAA        28

/* Success */
#define FDNS_ERR_NONE        0
/* Format error */
#define FDNS_ERR_FORMAT      1
/* Server failure */
#define FDNS_ERR_SERVFAIL    2
/* Name error */
#define FDNS_ERR_NXDOMAIN    3
/* Not implemented */
#define FDNS_ERR_NOIMPT      4
/* Refused */
#define FDNS_ERR_REFUSED     5

/* Local error codes */

/* Timeout */
#define FDNS_ERR_TIMEOUT     6
/* Network error */
#define FDNS_ERR_NETWORK     7
/* FD Limit reached */
#define FDNS_ERR_FDLIMIT     8
/* Other error */
#define FDNS_ERR_OTHER       9

/* Used with the above error values */
extern int firedns_errno;

struct firedns_result
{
  char text[1024];
  char lookup[256];
  void *info;
};

/* non-blocking functions */
extern int firedns_getip(int, const char *const, void *);
extern struct firedns_result *firedns_getresult(const int);

/* low-timeout blocking functions */
extern char *firedns_resolveip(int, const char *const);
extern struct in_addr *firedns_resolveip4(const char *const);
extern struct in6_addr *firedns_resolveip6(const char *const);

extern void firedns_init(void);
extern void firedns_cycle(void);
extern const char *firedns_strerror(int);

#endif
