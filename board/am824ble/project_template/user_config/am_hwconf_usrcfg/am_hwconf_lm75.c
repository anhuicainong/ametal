/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Stock Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
* e-mail:      ametal.support@zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief LM75 用户配置文件
 * \sa am_hwconf_lm75.c
 *
 * \internal
 * \par Modification history
 * - 1.00 17-07-13  tee, first implementation
 * \endinternal
 */

#include "ametal.h"
#include "am_temp_lm75.h"
#include "am_lpc82x.h"
#include "am_lpc82x_inst_init.h"

/**
 * \addtogroup am_if_src_hwconf_lm75
 * \copydoc am_hwconf_lm75.c
 * @{
 */

/** \brief LM75 设备信息 */
am_local am_const am_temp_lm75_info_t __g_temp_lm75_devinfo = {
    0x48    /* LM75 I2C 7 位地址  */
};

/** \brief LM75 设备实例 */
am_local am_temp_lm75_t __g_temp_lm75_dev;

/**
 * \brief LM75 实例初始化
 */
am_temp_handle_t am_temp_lm75_inst_init (void)
{
    return am_temp_lm75_init(&__g_temp_lm75_dev,
                             &__g_temp_lm75_devinfo,
                              am_lpc82x_i2c0_inst_init());
}

/**
 * @}
 */

/* end of file */
