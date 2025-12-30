# MyDwm
## Dependencies
For using dwm with this configure you need:`rofi`, `kitty`, `maim`, `pulseaudio`, `brightnessctl`, `font-awesome`, `jetbrains-mono-nerd`
### Debian/Ubuntu
```sudo apt update && sudo apt install -y rofi kitty maim pulseaudio brightnessctl fonts-font-awesome fonts-jetbrains-mono```

### Arch/Cachyos
```sudo pacman -Syu rofi kitty maim pulseaudio brightnessctl ttf-font-awesome ttf-jetbrains-mono-nerd```

## How to change?

If you want to change terminal to alacritty or change rofi to wofi, you can make this in file on path `/MyDwm/dwm/config.h` on string `52`,`53`

If you want to add/change keyboard layout, you can make this in file `xinitrc` on string `6`
```
 setxkbmap -layout us,it,sp -option grp:alt_shift_toggle &
                   ^^^^^^^^         ^^^^^^^^^^^^^^^^^^^^^
                 |add layout|  |change keys for change kayboard layout|
```

## Installation
```
  cd
  git clone https://github.com/nazik0202/Mydwm
  cp Mydwm/xinitrc $HOME/.xinitrc
  cd $HOME/Mydwm/dwm
  sudo make clean install
  cd $HOME/Mydwm/dwmblocks
  sudo make clean install
```
And then we start a xinitrc session
Congratulations, the installation is complete.
