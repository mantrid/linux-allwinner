/*
 * arch/arm/mach-sun4i/include/mach/timex.h
 *
 * (C) Copyright 2007-2012
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Benn Huang <benn@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __SW_TIMEX_H
#define __SW_TIMEX_H

#define SYS_TIMER_SCAL      (16)            /* timer clock source pre-divsion   */
#define SYS_TIMER_CLKSRC    (24000000)      /* timer clock source               */
#define TMR_INTER_VAL       (SYS_TIMER_CLKSRC/(SYS_TIMER_SCAL*HZ))

#define CLOCK_TICK_RATE     TMR_INTER_VAL

#endif
