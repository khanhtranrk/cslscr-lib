# Console Screen
File name: cslscr.h
## Context
Folder: context
#### Color
Foregournd:
```
  FOREGROUND_BLACK
  FOREGROUND_BLUE
  FOREGROUND_GREEN
  FOREGROUND_AQUA
  FOREGROUND_RED
  FOREGROUND_PURPLE
  FOREGROUND_YELLOW
  FOREGROUND_WHITE
  FOREGROUND_GRAY
  FOREGROUND_LIGHT_BLUE
  FOREGROUND_LIGHT_GREEN
  FOREGROUND_LIGHT_AQUA
  FOREGROUND_LIGHT_RED
  FOREGROUND_LIGHT_PURPLE
  FOREGROUND_LIGHT_YELLOW
  FOREGROUND_BRIGHT_WHITE
```
Background:
```
  BACKGROUND_BLACK
  BACKGROUND_BLUE
  BACKGROUND_GREEN
  BACKGROUND_AQUA
  BACKGROUND_RED
  BACKGROUND_PURPLE
  BACKGROUND_YELLOW
  BACKGROUND_WHITE
  BACKGROUND_GRAY
  BACKGROUND_LIGHT_BLUE
  BACKGROUND_LIGHT_GREEN
  BACKGROUND_LIGHT_AQUA
  BACKGROUND_LIGHT_RED
  BACKGROUND_LIGHT_PURPLE
  BACKGROUND_LIGHT_YELLOW
  BACKGROUND_BRIGHT_WHITE
```
Defines:
```
  CURRENT_FOREGROUND - current foreground color (color_tp)
  CURRENT_BACKGROUND - current background color (color_tp)
```
Methods:
```
  void ClearScreen()
  void ClearScreen(color_tp b_color)
  void SetColor(color_tp f_color, color_tp b_color)
  void SetForeground(color_tp f_color)
  void SetBackground(color_tp b_color)
```