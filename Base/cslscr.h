/* Console Screen */

/* Include */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <iostream>

/* Define */

// Debug
#define show(obj) std::cout << obj << std::endl

// Utilities
#define __SaveColorContext__ color_tp __current_foreground__ = CURRENT_FOREGROUND; \
                             color_tp __current_background__ = CURRENT_BACKGROUND;

#define __ApplyColorContext__ SetColor(__current_foreground__, __current_background__)

#define __SavePositionContext__ position_tp __position_x__ = CURSOR_POSITION_X; \
                                position_tp __position_y__ = CURSOR_POSITION_Y

#define __ApplyPositionContext__ GotoXY(__position_x__, __position_y__)

#define __SaveContext__ color_tp __current_foreground__ = CURRENT_FOREGROUND; \
                        color_tp __current_background__ = CURRENT_BACKGROUND; \
                        position_tp __position_x__ = CURSOR_POSITION_X; \
                        position_tp __position_y__ = CURSOR_POSITION_Y

#define __ApplyContext__ GotoXY(__position_x__, __position_y__); \
                         SetColor(__current_foreground__, __current_background__)

#define __InitStash__ int __stash_postion_x__; \
                      int __stash_postion_y__; \
                      int __stash_b_color__; \
                      int __stash_f_color__

#define __SaveStash__ int __stash_postion_x__ = CURSOR_POSITION_X; \
                  int __stash_postion_y__ = CURSOR_POSITION_Y; \
                  int __stash_b_color__ = CURRENT_BACKGROUND; \
                  int __stash_f_color__ = CURRENT_FOREGROUND

#define __ApplyStash__ GotoXY(__stash_postion_x__, __stash_postion_y__); \
                   SetColor(__stash_f_color__, __stash_b_color__)

#define CharToNumber(c) (c - 48)
#define IsNumericChar(c) (c >= 48 && c <= 57)
#define CanExceedMaxValue(num, c, max) ((max - num < max - max/10) || (max - num == max - max/10 && CharToNumber(c) > max%10))
#define CanExceedMinValue(num, c, min) ((min - obj > min - min/10) || (min - obj == min - min/10 && 48 - c < min%10))

// Data type
#define size_tp int
#define color_tp int
#define position_tp int

/* include cslscr feature */

#include "color.h"
#include "cursor.h"
#include "print.h"
#include "input.h"