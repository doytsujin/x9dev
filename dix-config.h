/*
 * Copyright (c) 2020 Michael Misch michaelmisch1985@gmail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _DIX_CONFIG_H_
#define _DIX_CONFIG_H_

#undef X_BYTE_ORDER
#define X_BYTE_ORDER    X_LITTLE_ENDIAN
#define BITMAP_BIT_ORDER    LSBFirst
#define IMAGE_BYTE_ORDER    LSBFirst
#define ABORTONFATALERROR  1
#define BUILDERADDR "michaelmisch1985@gmail.com"
#define PACKAGE "x9dev"
#define VENDOR_NAME "The X.Org Foundation"

/* Revisit this, possibly generate this file and allow a path to be passed in for those that want to use APE fonts from plan9 */
#define COMPILEDDEFAULTFONTPATH "/usr/local/lib/X11/fonts/misc/,/usr/local/lib/X11/fonts/TTF/,/usr/local/lib/X11/fonts/OTF,/usr/local/lib/X11/fonts/Type1/,/usr/local/lib/X11/fonts/100dpi/,/usr/local/lib/X11/fonts/75dpi/"

/* connection types */
/* #define LOCALCONN 1 */
#define TCPCONN 1
#define UNIXCONN 1

/* fb needs these */
#undef GLYPHPADBYTES
#define GLYPHPADBYTES 4
#define GETLEFTBITS_ALIGNMENT 1

#define HAS_FFS 1
#define HAVE_DIRENT_H 1
#define HAVE_FCNTL_H 1
#define HAVE_GETEUID 1
#define HAVE_GETOPT 1
#define HAVE_GETUID 1
#define HAVE_INTTYPES_H 1
#define HAVE_LIBM 1
#define HAVE_LINK 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMSET 1
#define HAVE_STDLIB_H 1
#define HAVE_STRLCPY 1
#define HAVE_STRLCAT 1
#define HAVE_STRCHR 1
#define HAVE_STRING_H 1
#define HAVE_STRRCHR 1
#define HAVE_STRTOL 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_VPRINTF 1
#define STDC_HEADERS 1

#define SHADOWFB 1
#define RENDER 1
#define RES 1
#define SHAPE 1
#define XINPUT 1
#define XResExtension 1

#define NO_LIBCWRAPPER 1
#define NULL_ROOT_CURSOR 1
#define USE_RGB_BUILTIN 1
#define XKB_DFLT_DISABLED  0

#undef BIGREQS /*1*/
#undef BUILTIN_FONTS
#undef COMPOSITE /*1*/
#undef DAMAGE /*1*/
#undef DBE
#undef DDXBEFORERESET
#undef DDXOSFATALERROR
#define DDXOSINIT 1
#undef DDXOSVERRORF
#undef DDXTIME
#undef DPMSExtension
#undef EVI
#undef HASXDMAUTH
#undef MITSHM
#undef MULTIBUFFER
#undef NOFONTSERVERACCESS
#undef PANORAMIX
#undef PIXPRIV /*1*/
#undef PROJECTROOT /* "/sys/lib/ape/X11" */
/* Try to get randr, etc */
#undef RANDR /*1*/
#undef ROOTLESS
#undef SCREENSAVER
#undef SERVER_LOCK /*1*/
#undef SMART_SCHEDULE /*1*/
#undef TOGCUP
#undef XACE
#undef XAPPGROUP
#undef XCMISC /*1*/
#undef XCSECURITY
#undef XDMCP
#undef XEVIE
#undef XF86BIGFONT
/* Try to get DRI*/
#undef XF86DRI
#undef XF86MISC
#undef XF86VIDMODE
#undef XFIXES /*1*/
#undef XFreeXDGA
#undef XINERAMA
#undef XKB /*1*/
#undef XKB_IN_SERVER /*1*/
#undef XRECORD
#undef XSYNC
#undef XTEST /*1*/
#undef XTRAP
#undef XV
#undef XvMCExtension

extern int fsync(int);
extern double hypot(double, double);

#endif /* _DIX_CONFIG_H_ */
