/*@create-file:build.opt@
// An embedded build.opt file using a "C" block comment. The starting signature
// must be on a line by itself. The closing block comment pattern should be on a
// line by itself. Each line within the block comment will be space trimmed and
// written to build.opt, skipping blank lines and lines starting with '//', '*'
// or '#'.

 * this line is ignored
 # this line is ignored
-D WIFI_OPT=1
*/

#ifndef ESP32CAMSTREAM_INO_GLOBALS_H
#define ESP32CAMSTREAM_INO_GLOBALS_H

#ifndef SCHOOL_WIFI
    #define SCHOOL_WIFI 0
#endif

#if defined(WIFI_OPT) && WIFI_OPT == SCHOOL_WIFI
    #define LOCAL_SSID "Faculdade Impacta v2"
    #define LOCAL_SSID_PASSWORD "impacta2021"

#else
    #define LOCAL_SSID "Lili_2G"
    #define LOCAL_SSID_PASSWORD "@#viper125273@#"
#endif

#endif