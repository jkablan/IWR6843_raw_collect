/**
 *   @file  dss_resources.h
 *
 *   @brief
 *      This file defines DSS resources used by different modules
 *
 *  \par
 *  NOTE:
 *      (C) Copyright 2016 Texas Instruments, Inc.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef DSS_RESOURCES_H
#define DSS_RESOURCES_H

#include <ti/common/sys_common.h>

#define EDMA_INSTANCE_0 0
#define EDMA_INSTANCE_1 1

 /*************************Data path EDMA resources*******************************/
 /*EDMA instance used*/
#define MMW_DATA_PATH_EDMA_INSTANCE      EDMA_INSTANCE_0

/* channels */
#define MMW_EDMA_CH_1D_IN_PING           EDMA_TPCC0_REQ_FREE_0
#define MMW_EDMA_CH_1D_IN_PONG           EDMA_TPCC0_REQ_FREE_1
#define MMW_EDMA_CH_1D_OUT_PING          EDMA_TPCC0_REQ_FREE_2
#define MMW_EDMA_CH_1D_OUT_PONG          EDMA_TPCC0_REQ_FREE_3
#define MMW_EDMA_CH_2D_IN_PING           EDMA_TPCC0_REQ_FREE_4
#define MMW_EDMA_CH_2D_IN_PONG           EDMA_TPCC0_REQ_FREE_5
#define MMW_EDMA_CH_DET_MATRIX           EDMA_TPCC0_REQ_FREE_6
#define MMW_EDMA_CH_DET_MATRIX2          EDMA_TPCC0_REQ_FREE_7
#define MMW_EDMA_CH_3D_IN_PING           EDMA_TPCC0_REQ_FREE_8
#define MMW_EDMA_CH_3D_IN_PONG           EDMA_TPCC0_REQ_FREE_9
#define MMW_EDMA_CH_SIGIMG_MON           EDMA_TPCC0_REQ_FREE_10
#define MMW_EDMA_CH_RX_SATURATION_MON    EDMA_TPCC0_REQ_FREE_11
#define MMW_EDMA_CH_2D_OUT_PING    		 EDMA_TPCC0_REQ_FREE_12
#define MMW_EDMA_CH_2D_OUT_PONG    		 EDMA_TPCC0_REQ_FREE_13


/*shadow*/
#define MMW_EDMA_CH_1D_IN_PING_SHADOW           (EDMA_NUM_DMA_CHANNELS + 0U)
#define MMW_EDMA_CH_1D_IN_PONG_SHADOW           (EDMA_NUM_DMA_CHANNELS + 1U)
#define MMW_EDMA_CH_1D_OUT_PING_SHADOW          (EDMA_NUM_DMA_CHANNELS + 2U)
#define MMW_EDMA_CH_1D_OUT_PONG_SHADOW          (EDMA_NUM_DMA_CHANNELS + 3U)
#define MMW_EDMA_CH_2D_IN_PING_SHADOW           (EDMA_NUM_DMA_CHANNELS + 4U)
#define MMW_EDMA_CH_2D_IN_PONG_SHADOW           (EDMA_NUM_DMA_CHANNELS + 5U)
#define MMW_EDMA_CH_DET_MATRIX_SHADOW           (EDMA_NUM_DMA_CHANNELS + 6U)
#define MMW_EDMA_CH_DET_MATRIX2_SHADOW          (EDMA_NUM_DMA_CHANNELS + 7U)
#define MMW_EDMA_CH_3D_IN_PING_SHADOW           (EDMA_NUM_DMA_CHANNELS + 8U)
#define MMW_EDMA_CH_3D_IN_PONG_SHADOW           (EDMA_NUM_DMA_CHANNELS + 9U)
#define MMW_EDMA_CH_2D_OUT_PING_SHADOW    		(EDMA_NUM_DMA_CHANNELS + 10U)
#define MMW_EDMA_CH_2D_OUT_PONG_SHADOW    		(EDMA_NUM_DMA_CHANNELS + 11U)

/*************************Data path EDMA resources END*******************************/

/*************************LVDS streaming EDMA resources*******************************/
/*EDMA instance used*/
#define MMW_LVDS_STREAM_EDMA_INSTANCE            EDMA_INSTANCE_1

/* CBUFF EDMA trigger channels */
#define MMW_LVDS_STREAM_CBUFF_EDMA_CH_0          EDMA_TPCC1_REQ_CBUFF_0
#define MMW_LVDS_STREAM_CBUFF_EDMA_CH_1          EDMA_TPCC1_REQ_CBUFF_1

/*HW Session*/
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_0     EDMA_TPCC1_REQ_FREE_0
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_1     EDMA_TPCC1_REQ_FREE_1
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_2     EDMA_TPCC1_REQ_FREE_2
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_3     EDMA_TPCC1_REQ_FREE_3
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_4     EDMA_TPCC1_REQ_FREE_4
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_5     EDMA_TPCC1_REQ_FREE_5
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_6     EDMA_TPCC1_REQ_FREE_6
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_7     EDMA_TPCC1_REQ_FREE_7
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_8     EDMA_TPCC1_REQ_FREE_8
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_9     EDMA_TPCC1_REQ_FREE_9
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_10    EDMA_TPCC1_REQ_FREE_10
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_11    EDMA_TPCC1_REQ_FREE_11
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_12    EDMA_TPCC1_REQ_FREE_12
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_13    EDMA_TPCC1_REQ_FREE_13
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_CH_14    EDMA_TPCC1_REQ_FREE_14
/*SW Session*/
#define MMW_LVDS_STREAM_SW_SESSION_EDMA_CH_0     EDMA_TPCC1_REQ_FREE_15
#define MMW_LVDS_STREAM_SW_SESSION_EDMA_CH_1     EDMA_TPCC1_REQ_FREE_16

/*shadow*/
/*shadow CBUFF trigger channels*/
#define MMW_LVDS_STREAM_CBUFF_EDMA_SHADOW_CH_0   (EDMA_NUM_DMA_CHANNELS + 12U)
#define MMW_LVDS_STREAM_CBUFF_EDMA_SHADOW_CH_1   (EDMA_NUM_DMA_CHANNELS + 13U)

/*HW Session*/
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_0   (EDMA_NUM_DMA_CHANNELS + 14U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_1   (EDMA_NUM_DMA_CHANNELS + 15U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_2   (EDMA_NUM_DMA_CHANNELS + 16U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_3   (EDMA_NUM_DMA_CHANNELS + 17U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_4   (EDMA_NUM_DMA_CHANNELS + 18U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_5   (EDMA_NUM_DMA_CHANNELS + 19U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_6   (EDMA_NUM_DMA_CHANNELS + 20U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_7   (EDMA_NUM_DMA_CHANNELS + 21U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_8   (EDMA_NUM_DMA_CHANNELS + 22U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_9   (EDMA_NUM_DMA_CHANNELS + 23U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_10  (EDMA_NUM_DMA_CHANNELS + 24U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_11  (EDMA_NUM_DMA_CHANNELS + 25U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_12  (EDMA_NUM_DMA_CHANNELS + 26U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_13  (EDMA_NUM_DMA_CHANNELS + 27U)
#define MMW_LVDS_STREAM_HW_SESSION_EDMA_SHADOW_CH_14  (EDMA_NUM_DMA_CHANNELS + 28U)
/*SW Session*/
#define MMW_LVDS_STREAM_SW_SESSION_EDMA_SHADOW_CH_0   (EDMA_NUM_DMA_CHANNELS + 29U)
#define MMW_LVDS_STREAM_SW_SESSION_EDMA_SHADOW_CH_1   (EDMA_NUM_DMA_CHANNELS + 30U)
/*************************LVDS streaming EDMA resources END*******************************/

#endif
