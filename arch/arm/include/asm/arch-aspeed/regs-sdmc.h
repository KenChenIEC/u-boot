/* arch/arm/mach-aspeed/include/mach/regs-sdmc.h
 *
 * Copyright (C) 2012-2020  ASPEED Technology Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *   History      :
 *    1. 2012/12/29 Ryan Chen Create
 *
 ******************************************************************************/
#ifndef __AST_SDMC_H
#define __AST_SDMC_H

/*
 *  Register for SDMC
 */
#define AST_SDMC_PROTECT	0x00		/* protection key register */
#define AST_SDMC_CONFIG		0x04		/* Configuration register */

/*	AST_SDMC_PROTECT: 0x00  - protection key register */
#define SDMC_PROTECT_UNLOCK			0xFC600309

/*	AST_SDMC_CONFIG : 0x04	- Configuration register */
#define SDMC_CONFIG_VER_NEW		(0x1 << 28)
#define SDMC_CONFIG_MEM_GET(x)		(x & 0x3)

#define SDMC_CONFIG_CACHE_EN		(0x1 << 10)
#define SDMC_CONFIG_EEC_EN		(0x1 << 7)

#endif
