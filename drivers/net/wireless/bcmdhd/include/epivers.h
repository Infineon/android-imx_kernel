/*
 * $ Copyright Open Broadcom Corporation $
 *
 *
 * <<Broadcom-WL-IPTag/Open:>>
 *
 * $Id: epivers.h.in 596126 2015-10-29 19:53:48Z stafford $
 *
*/

#ifndef _epivers_h_
#define _epivers_h_

#define	EPI_MAJOR_VERSION	0

#define	EPI_MINOR_VERSION	0

#define	EPI_RC_NUMBER		0

#define	EPI_INCREMENTAL_NUMBER	0

#define	EPI_BUILD_NUMBER	0

#define	EPI_VERSION		0, 0, 0, 0

#define	EPI_VERSION_NUM		0x00000000

#define EPI_VERSION_DEV		0.0.0

/* Driver Version String, ASCII, 32 chars max */
#ifdef BCMINTERNAL
#define	EPI_VERSION_STR		"manifest (56038d8 BCMINT)"
#else
#ifdef WLTEST
#define	EPI_VERSION_STR		"manifest (56038d8 WLTEST)"
#else
#define	EPI_VERSION_STR		"manifest (56038d8)"
#endif
#endif /* BCMINTERNAL */

#endif /* _epivers_h_ */
