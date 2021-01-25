sxhkd &

# Fix the error of flatpak making gtk apps take a lot to start 
dbus-update-activation-environment --systemd DBUS_SESSION_BUS_ADDRESS DISPLAY XAUTHORITY

## Disable X weird cursor
xsetroot -cursor_name left_ptr

# exec dbus-launch bspwm -c $HOME/.config/bspwm/bspwmrc
