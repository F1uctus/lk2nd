// SPDX-License-Identifier: GPL-2.0-only
// Based on GCDB panel data: panel_td4291_jdi_720p_video.h

#ifndef _LK_PANEL_TD4291_JDI_720P_VIDEO_H_
#define _LK_PANEL_TD4291_JDI_720P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

#include <panel_td4291_jdi_720p_video.h>

static inline void panel_td4291_jdi_720p_video_select(struct panel_struct *panel,
						      struct msm_panel_info *pinfo,
						      struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &td4291_jdi_720p_video_panel_data;
	panel->panelres = &td4291_jdi_720p_video_panel_res;
	panel->color = &td4291_jdi_720p_video_color;
	panel->videopanel = &td4291_jdi_720p_video_video_panel;
	panel->commandpanel = &td4291_jdi_720p_video_command_panel;
	panel->state = &td4291_jdi_720p_video_state;
	panel->laneconfig = &td4291_jdi_720p_video_lane_config;
	panel->paneltiminginfo = &td4291_jdi_720p_video_timing_info;
	panel->panelresetseq = &td4291_jdi_720p_video_panel_reset_seq;
	panel->backlightinfo = &td4291_jdi_720p_video_backlight;
	pinfo->mipi.panel_on_cmds = td4291_jdi_720p_video_on_command;
	pinfo->mipi.panel_off_cmds = td4291_jdi_720p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(td4291_jdi_720p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(td4291_jdi_720p_video_off_command);
	memcpy(phy_db->timing, td4291_jdi_720p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_LDO_MODE;
}

#endif /* _LK_PANEL_TD4291_JDI_720P_VIDEO_H_ */
