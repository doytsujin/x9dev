# x9dev

x9dev is an x11 server which interacts with plan9's /dev filesystem.

## Usage

`x9dev [-w] [-x cmd] dir`

- `-w` uses the /dev's wsys for window creation and control
- `-x` will run the cmd on connection, usually an x11 program in a full screen

Example:

```rc
# Import a remote /dev
9pfuse -a dev 192.168.0.10 /tmp/9/dev
x9dev /tmp/9/dev
```

## Building

Requires plan9port

```rc
git clone https://github.com/halfwit/x9dev
mv x9dev /path/to/xorg-server-source/hw/
cd /path/to/xorg-server-source/hw/x9dev
mk build; mk install
```
