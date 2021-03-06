#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_alsps.h>
#include <mach/upmu_common.h>
#if defined(CONFIG_T93_PROJ)
 #if defined(CONFIG_T93E_TS_PROJ)
  #define PS_HIGH 0X3E8
  #define PS_LOW  0x320
 #elif defined(CONFIG_T93Q_LF_PROJ)
  #define PS_HIGH 0X352
  #define PS_LOW  0x320
 #else
  #define PS_HIGH 0X226
  #define PS_LOW  0x210
 #endif
#endif

#if defined(CONFIG_T89P_YX_PROJ)
 #define PS_HIGH 2500
 #define PS_LOW  2400
#endif

#if defined(CONFIG_T89G_TX_PROJ)
 #define PS_HIGH 2500
 #define PS_LOW  2200
#endif

#if defined(CONFIG_T985D_HD_PROJ)
 #define PS_HIGH 550
 #define PS_LOW  450
#endif

#if defined(CONFIG_T99G_DH_PROJ)
 #define PS_HIGH 1800
 #define PS_LOW  700
#endif

#if defined(CONFIG_T99L_DWS_PROJ)
 #define PS_HIGH 3000
 #define PS_LOW  2000
#endif
#if defined(CONFIG_T96_HD_PROJ)
 #define PS_HIGH 3500
 #define PS_LOW  2500
#endif

#if defined(CONFIG_T991_PROJ)
 #define PS_HIGH 2800
 #define PS_LOW  2500
#endif

#if defined(CONFIG_T925_PROJ)
	#if defined(CONFIG_T925C_LG)
		#define PS_HIGH 2500		//lg
		#define PS_LOW  2000		//lg
	#elif defined(CONFIG_T925J_YX)
		//3~5cm
		//#define PS_HIGH 2000
		//#define PS_LOW  1500
		//5~7cm yuxin
		#define PS_HIGH 1200
		#define PS_LOW  950
	#elif defined(CONFIG_T925H_KW_PROJ)
		#define PS_HIGH 1500
		#define PS_LOW  1000
	#elif defined(CONFIG_T925M_DH_PROJ)
		#define PS_HIGH 2000
		#define PS_LOW  1500
	#elif defined(CONFIG_T925U_YS_T925)
		#define PS_HIGH 1300
		#define PS_LOW  900
	#elif defined(CONFIG_T925X_YS_T925)
		#define PS_HIGH 1800
		#define PS_LOW  1400
	#elif defined(CONFIG_T925F_AZYP_PROJ)
		#define PS_HIGH 2500
		#define PS_LOW  2000
	#elif defined(CONFIG_T925R_HAIDI_P700)
		#define PS_HIGH 3500
		#define PS_LOW  3000
	#else
		#define PS_HIGH 3000
		#define PS_LOW  2400
	#endif
#endif

#ifndef PS_HIGH
 #define PS_HIGH 0X1200
 #define PS_LOW  0x1000
#endif

static struct alsps_hw cust_alsps_hw = {
    .i2c_num    = 2,
	.polling_mode_ps =0,
	.polling_mode_als =1,
    .power_id   = MT65XX_POWER_NONE,    /*LDO is not used*/
    .power_vol  = VOL_DEFAULT,          /*LDO is not used*/
    //.i2c_addr   = {0x0C, 0x48, 0x78, 0x00},

    /* MTK: modified to support AAL */
	.als_level	= {5, 8, 16, 32, 60, 90, 140, 180, 400, 900, 4000, 7000, 8000, 10000, 20000},
	.als_value	= {0, 10, 20, 40, 90, 120, 160, 225, 280, 360, 640, 1280, 2600, 3800, 4700, 10240},
    .ps_threshold_high = PS_HIGH,
    .ps_threshold_low = PS_LOW,
    .is_batch_supported_ps = false,
    .is_batch_supported_als = false,
};
struct alsps_hw *get_cust_alsps_hw(void) {
    return &cust_alsps_hw;
}

