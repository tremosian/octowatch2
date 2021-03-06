// OctoWatch2
// A Pebble watch app for monitoring and basic controlling of 3D printers via Octoprint
//
// Licence: CC BY-SA 3.0, http://creativecommons.org/licenses/by-sa/3.0/
// Author: Dominik Scholz <pebble@schlotzz.com>, go4u.de Webdesign <info@go4u.de>

#pragma once
#include <pebble.h>

void window_confirm_init(void);
void window_confirm_init_custom(const char *, GColor, void(*)(void));
void window_confirm_destroy(void);
