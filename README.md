# MyDwm
## Dependencies
For using dwm with this configure you need:`rofi`, `kitty`, `maim`, `pulseaudio`, `brightnessctl`, `font-awesome`, `nerd-fonts(jetbrians-mono-nerd)`,`xorg-xauth`,`xorg-server`,`xorg-xinit`,`libxinerama`
### Debian/Ubuntu
```sudo apt update && sudo apt install -y rofi kitty maim pulseaudio brightnessctl fonts-font-awesome nerd-fonts xauth xserver-xorg xinit libxinerama1```

### Arch/Cachyos
```sudo pacman -Syu rofi kitty maim pulseaudio brightnessctl ttf-font-awesome nerd-fonts xorg-xauth xorg-server xorg-xinit libxinerama```

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
  git clone https://github.com/nazik0202/MyDwm
  cp MyDwm/xinitrc $HOME/.xinitrc
  chmod +x ~/.xinitrc
  cd $HOME/MyDwm/dwm
  sudo make clean install
  cd $HOME/MyDwm/dwmblocks
  sudo make clean install
```
And then we start a xinitrc session
Congratulations, the installation is complete.
