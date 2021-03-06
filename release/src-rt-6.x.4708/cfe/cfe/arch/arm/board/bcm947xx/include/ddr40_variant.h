/*
 * Description: This module defines global parameters for this type of ddr phy
 *
 * Copyright (C) 2012, Broadcom Corporation. All Rights Reserved.
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * $Id:$
 */

#ifndef DDR40_TOP_MODULE_NAME
#define DDR40_TOP_MODULE_NAME ddr40_phy_top_32_fc_40lp
#define DDR40_PACKAGE_TYPE fc

#define DDR40_PROCESS_TYPE 40lp

#define DDR40_PACKAGE_TYPE_IS_FC

#ifndef DDR40_PROCESS_TYPE_IS_40LP
#define DDR40_PROCESS_TYPE_IS_40LP
#endif

#define DDR40_DQ_WIDTH 32
#define DDR40_DQ_BYTES (DDR40_DQ_WIDTH/8)

#ifndef DDR40_WIDTH_IS_32
#define DDR40_WIDTH_IS_32
#endif

#undef DDR40_WIDTH_IS_32

#define DDR40_PROCESS_DETAIL tsmc40lp_M1_4Mx_1Mz_1UTRDL

/* feature list */
#define DDR40_INCLUDE_AUX_PINS
#define DDR40_FIX_RD_DATA_DLY_MINMAX

#define DDR40_CALIB_40LP_POST_DIV_FIX
#define DDR40_USE_MEMC_DDR_SCAN_CLK
#define DDR40_MAX_MIN_MIN_VDL_SCAN_CAPTURE

#define DDR40_PHYBIST_AUX_MASK_FIX
#define DDR40_DDR3_CALIB_RESET_FIX
#define DDR40_INCLUDE_NO_DQS_RD
#define DDR40_USE_STANDBY_EXIT_PIN

#define DDR40_CLEAN_RST_N_FIX
#define DDR40_USE_WIDE_DYN_VDL_EN
#define DDR40_FIX_WR_ADDR_BUG
#define DDR40_FIX_S2_EXIT_BUGS
#define DDR40_INCLUDE_VDDO_CK
#define DDR40_FIX_FREEZE_CKE_OFF
#define DDR40_INCLUDE_MPR_MODE
#define DDR40_INCLUDE_SINGLE_CYC
#define DDR40_VTT_HANG_QUICK_FIX
#define DDR40_EXPANDED_REVID
#define DDR40_CC_AUTO_INIT_2ND_RESYNC_FIX

#define DDR40_CAL_RD_DATA_DLY_FIX

#endif /* DDR40_TOP_MODULE_NAME */
