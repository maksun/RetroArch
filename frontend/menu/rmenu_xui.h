/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2013 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2013 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RMENU_XUI_H_
#define _RMENU_XUI_H_

#include "menu_common.h"

enum
{
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_B = 0,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_Y,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_SELECT,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_START,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_UP,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_DOWN,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_LEFT,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_RIGHT,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_A,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_X,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L2,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R2,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L3,
   SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R3,
   SETTING_CONTROLS_DPAD_EMULATION,
   SETTING_CONTROLS_DEFAULT_ALL
};

enum
{
   INPUT_LOOP_NONE = 0,
   INPUT_LOOP_RESIZE_MODE,
   INPUT_LOOP_FILEBROWSER
};

enum
{
    INGAME_MENU_CHANGE_LIBRETRO_CORE = 0,
    INGAME_MENU_LOAD_GAME_HISTORY_MODE,
    INGAME_MENU_CHANGE_GAME,
    INGAME_MENU_CORE_OPTIONS_MODE,
    INGAME_MENU_VIDEO_OPTIONS_MODE,
    INGAME_MENU_AUDIO_OPTIONS_MODE,
    INGAME_MENU_INPUT_OPTIONS_MODE,
    INGAME_MENU_PATH_OPTIONS_MODE,
    INGAME_MENU_SETTINGS_MODE,
    INGAME_MENU_LOAD_STATE,
    INGAME_MENU_SAVE_STATE,
    INGAME_MENU_SCREENSHOT_MODE,
    INGAME_MENU_RETURN_TO_GAME,
    INGAME_MENU_RESET,
    INGAME_MENU_QUIT_RETROARCH,
    INGAME_MENU_MAIN_MODE,
};

#define XUI_CONTROL_NAVIGATE_OK (XUI_CONTROL_NAVIGATE_RIGHT + 1)

bool menu_iterate_xui(void);
void filebrowser_fetch_directory_entries(uint64_t action);

#endif
