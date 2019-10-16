romstage-y += gpio.c
ramstage-y += dock.c
ramstage-$(CONFIG_MAINBOARD_USE_LIBGFXINIT) += gma-mainboard.ads
smm-y += smihandler.c
