patches used:

https://tools.suckless.org/slock/patches/alternate-colors/
https://tools.suckless.org/slock/patches/mediakeys/
https://tools.suckless.org/slock/patches/dpms/
https://tools.suckless.org/slock/patches/quickcancel/
https://tools.suckless.org/slock/patches/xresources/
```
git clone https://github.com/beats-exe/slock-beats.git
cd slock-beats
sudo make clean install
cd .. && rm -rfv slock-beats
```
I like this patch better because you can change colors using the values in xresources file so its says consistent with your entire theme.

.xresources file:
```
! Slock
*init: #282828
*input: #282828
*inputAlt: #282828
*failed: #fb4934
```
load xrdb ``xrdb -load path/to/xresources``

![](https://cdn.discordapp.com/attachments/1081840920158273568/1081841132893380668/2023-03-05_02-27-11.gif)
