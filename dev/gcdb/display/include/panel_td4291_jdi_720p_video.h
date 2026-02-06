/* Copyright (c) 2026
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*---------------------------------------------------------------------------
 * Panel: td4291 jdi 720p video
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_TD4291_JDI_720P_VIDEO_H_
#define _PANEL_TD4291_JDI_720P_VIDEO_H_

#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config td4291_jdi_720p_video_panel_data = {
	"qcom,mdss_dsi_td4291_jdi_720p_video", /* panel_node_id */
	"dsi:0:", /* panel_controller */
	"qcom,mdss-dsi-panel", /* panel_compatible */
	10, /* panel_interface */
	0, /* panel_type */
	"DISPLAY_1", /* panel_destination */
	0, /* panel_orientation */
	0, /* panel_clockrate */
	60, /* panel_framerate */
	0, /* panel_channelid */
	0, /* dsi_virtualchannel_id */
	0, /* panel_broadcast_mode */
	0, /* panel_lp11_init */
	20, /* panel_init_delay */
	0, /* dsi_stream */
	0, /* interleave_mode */
	0, /* panel_bitclock_freq */
	0, /* panel_operating_mode */
	0, /* panel_with_enable_gpio */
	0, /* mode_gpio_state */
	0, /* slave_panel_node_id */
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution td4291_jdi_720p_video_panel_res = {
	720,  /* panel_width */
	1280, /* panel_height */
	96,   /* hfront_porch */
	72,   /* hback_porch */
	40,   /* hpulse_width */
	0,    /* hsync_skew */
	12,   /* vfront_porch */
	4,    /* vback_porch */
	4,    /* vpulse_width */
	0,    /* hleft_border */
	0,    /* hright_border */
	0,    /* vtop_border */
	0,    /* vbottom_border */
	0,    /* hactive_res */
	0,    /* vactive_res */
	0,    /* invert_data_polarity */
	0,    /* invert_vsync_polarity */
	0,    /* invert_hsync_polarity */
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info td4291_jdi_720p_video_color = {
	24, /* color_format */
	0, /* color_order */
	0xff, /* underflow_color */
	0, /* border_color */
	0, /* pixel_packing */
	0, /* pixel_alignment */
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char td4291_jdi_720p_video_on_cmd0[] = {
	0x02, 0x00, 0x39, 0xc0, 0xde, 0x00
};

static char td4291_jdi_720p_video_on_cmd1[] = {
	0x02, 0x00, 0x39, 0xc0, 0xb4, 0x32
};

static char td4291_jdi_720p_video_on_cmd2[] = {
	0x02, 0x00, 0x39, 0xc0, 0xb3, 0x70
};

static char td4291_jdi_720p_video_on_cmd3[] = {
	0x02, 0x00, 0x39, 0xc0, 0xb0, 0x7c
};

static char td4291_jdi_720p_video_on_cmd4[] = {
	0x02, 0x00, 0x39, 0xc0, 0xd5, 0x65
};

static char td4291_jdi_720p_video_on_cmd5[] = {
	0x02, 0x00, 0x39, 0xc0, 0xd6, 0x77
};

static char td4291_jdi_720p_video_on_cmd6[] = {
	0x02, 0x00, 0x39, 0xc0, 0xd7, 0x76
};

static char td4291_jdi_720p_video_on_cmd7[] = {
	0x02, 0x00, 0x39, 0xc0, 0xd8, 0x13
};

static char td4291_jdi_720p_video_on_cmd8[] = {
	0x02, 0x00, 0x39, 0xc0, 0xdf, 0x00
};

static char td4291_jdi_720p_video_on_cmd9[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x2c
};

static char td4291_jdi_720p_video_on_cmd10[] = {
	0x02, 0x00, 0x39, 0xc0, 0x51, 0xff
};

static char td4291_jdi_720p_video_on_cmd11[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5e, 0x00
};

static char td4291_jdi_720p_video_on_cmd12[] = {
	0x02, 0x00, 0x39, 0xc0, 0x55, 0x01
};

static char td4291_jdi_720p_video_on_cmd13[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0x00
};

static char td4291_jdi_720p_video_on_cmd14[] = {
	0x02, 0x00, 0x39, 0xc0, 0x29, 0x00
};

static struct mipi_dsi_cmd td4291_jdi_720p_video_on_command[] = {
	{ 6, td4291_jdi_720p_video_on_cmd0, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd1, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd2, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd3, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd4, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd5, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd6, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd7, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd8, 0 },
	{ 6, td4291_jdi_720p_video_on_cmd9, 5 },
	{ 6, td4291_jdi_720p_video_on_cmd10, 5 },
	{ 6, td4291_jdi_720p_video_on_cmd11, 5 },
	{ 6, td4291_jdi_720p_video_on_cmd12, 5 },
	{ 6, td4291_jdi_720p_video_on_cmd13, 50 },
	{ 6, td4291_jdi_720p_video_on_cmd14, 1 },
};

#define TD4291_JDI_720P_VIDEO_ON_COMMAND 15

static char td4291_jdi_720p_video_off_cmd0[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x20
};

static char td4291_jdi_720p_video_off_cmd1[] = {
	0x02, 0x00, 0x39, 0xc0, 0x28, 0x00
};

static char td4291_jdi_720p_video_off_cmd2[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0x00
};

static struct mipi_dsi_cmd td4291_jdi_720p_video_off_command[] = {
	{ 6, td4291_jdi_720p_video_off_cmd0, 5 },
	{ 6, td4291_jdi_720p_video_off_cmd1, 10 },
	{ 6, td4291_jdi_720p_video_off_cmd2, 50 },
};

#define TD4291_JDI_720P_VIDEO_OFF_COMMAND 3

static struct command_state td4291_jdi_720p_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info td4291_jdi_720p_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info td4291_jdi_720p_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration td4291_jdi_720p_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t td4291_jdi_720p_video_timings[] = {
	0x00, 0x12, 0x1c, 0x81, 0x1e, 0x16, 0x42, 0x40, 0x00, 0x04, 0x03, 0x2d
};

static struct panel_timing td4291_jdi_720p_video_timing_info = {
	0, 4, 0x04, 0x1d
};

static struct panel_reset_sequence td4291_jdi_720p_video_panel_reset_seq = {
	{ 0, 1, 1, }, { 5, 150, 0, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/
static struct backlight td4291_jdi_720p_video_backlight = {
	2, 10, 205, 0, 2, "bl_ctrl_dcs"
};

#define TD4291_JDI_720P_VIDEO_SIGNATURE 0x0

#endif /* _PANEL_TD4291_JDI_720P_VIDEO_H_ */
