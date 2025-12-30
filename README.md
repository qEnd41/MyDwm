# MyDwm
<h1>Dependencies</h1>
<p>For using dwm with this configure you need:`rofi`,`kitty`,`maim`,`pulseaudio`, `brightnessctl`, `font-awesome,jetbrains-mono-nerd</p><br>
<p>If you want to change terminal to alacritty or change rofi to wofi, you can make this in file on path /MyDwm/dwm/config.h on string 52,53</p>
<h1>Installation</h1>
<pre>
  cd
  git clone https://github.com/nazik0202/Mydwm
  cp Mydwm/xinitrc $HOME/.xinitrc
  cd $HOME/Mydwm/dwm
  sudo make clean install
  cd $HOME/Mydwm/dwmblocks
  sudo make clean install
</pre>
<p>And then we start a xinitrc session</p>
<h2>Congratulations, the installation is complete.</h2>
