
Debian
====================
This directory contains files used to package alltd/allt-qt
for Debian-based Linux systems. If you compile alltd/allt-qt yourself, there are some useful files here.

## allt: URI support ##


allt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install allt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your allt-qt binary to `/usr/bin`
and the `../../share/pixmaps/allt128.png` to `/usr/share/pixmaps`

allt-qt.protocol (KDE)

