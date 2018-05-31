
Debian
====================
This directory contains files used to package gdncd/gdnc-qt
for Debian-based Linux systems. If you compile gdncd/gdnc-qt yourself, there are some useful files here.

## gdnc: URI support ##


gdnc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install gdnc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your gdncqt binary to `/usr/bin`
and the `../../share/pixmaps/gdnc128.png` to `/usr/share/pixmaps`

gdnc-qt.protocol (KDE)

