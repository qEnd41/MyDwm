# MyDwm
## Dependencies
For using dwm with this configure you need:`rofi`, `kitty`, `maim`, `pulseaudio`, `brightnessctl`, `font-awesome`, `jetbrains-mono-nerd`
If you want to change terminal to alacritty or change rofi to wofi, you can make this in file on path /MyDwm/dwm/config.h on string 52,53
## Installation

  cd
  git clone https://github.com/nazik0202/Mydwm
  cp Mydwm/xinitrc $HOME/.xinitrc
  cd $HOME/Mydwm/dwm
  sudo make clean install
  cd $HOME/Mydwm/dwmblocks
  sudo make clean install

And then we start a xinitrc session
Congratulations, the installation is complete.
