include $(srctree)/drivers/misc/mediatek/Makefile.custom

# In case the platform does NOT support this type of sensors
obj-y   +=  alsps.o
obj-y   +=  alsps_factory.o
obj-y   +=  aal_control.o

ifeq ($(CONFIG_MTK_GP2AP002S00F),y)
obj-y	+=  gp2ap002s00f/
endif

ifeq ($(CONFIG_MTK_CM36283),y)
obj-y	+=  cm36283/
endif

ifeq ($(CONFIG_MTK_APM_16D),y)
obj-y	+=  apm_16d/
endif

ifeq ($(CONFIG_MTK_EPL2182),y)
obj-y	+=  epl2182/
endif

ifeq ($(CONFIG_MTK_EPL2182_NEW),y)
obj-y	+=  EPL2182-new/
endif

ifeq ($(CONFIG_MTK_AP3XX6_NEW),y)
obj-y	+=  AP3XX6_new/
endif

ifeq ($(CONFIG_MTK_STK3X1X_DRIVER),y)
obj-y	+=  stk3x1x_driver/
endif

ifeq ($(CONFIG_MTK_EPL2182_NEW_FAE),y)
obj-y	+=  EPL2182-new-fae/
endif

ifeq ($(CONFIG_MTK_GP2AP054A_PSGS_ALS),y)
obj-y	+=  gp2ap054a_psgs_als/
endif

ifeq ($(CONFIG_MTK_EPL8865),y)
obj-y	+=  epl8865/
endif

ifeq ($(CONFIG_MTK_EPL2182_NEW_XINGFEI),y)
obj-y	+=  EPL2182-new-xingfei/
endif

ifeq ($(CONFIG_MTK_EPL259X),y)
obj-y	+=  epl259x/
endif

ifeq ($(CONFIG_MTK_EPL89XX),y)
obj-y	+=  epl89xx/
endif
ifeq ($(CONFIG_MTK_AP3216C),y)
obj-y	+=  ap3216c/
endif

ifeq ($(CONFIG_MTK_STK3X1X),y)
obj-y	+=  stk3x1x/
endif
ifeq ($(CONFIG_MTK_CM36652_NEW),y)
obj-y	+=  cm36652-new/
endif

ifeq ($(CONFIG_MTK_APDS9930),y)
obj-y	+=  APDS9930/
endif

ifeq ($(CONFIG_MTK_CM3232_NEW),y)
obj-y	+=  cm3232-new/
endif

ifeq ($(CONFIG_MTK_APDS9930_NEW),y)
obj-y	+=  APDS9930-new/
endif
ifeq ($(CONFIG_MTK_STK3X1X_NEW),y)
obj-y	+=  stk3x1x-new/
endif
ifeq ($(CONFIG_MTK_RPR410),y)
obj-y	+=  rpr410/
endif
ifeq ($(CONFIG_MTK_DUMMY_PS),y)
obj-y	+=  dummy_ps/
endif
