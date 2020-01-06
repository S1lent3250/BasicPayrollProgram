//
// Created by Gleb Bair on 1/4/20.
//

#ifndef PAYROLL_COLORS_H
#define PAYROLL_COLORS_H

// Normal colors
#ifndef NORMAL_COLORS
#define GS "\033[32m"   // Green
#define RS "\033[31m"   // Red
#define YS "\033[33m"   // Yellow
#define WS "\033[37m"   // White
#define BS "\033[34m"   // Blue
#define RST "\033[0m"   // Normal Color Reset
#endif

// Bold colors
#ifndef BOLD_COLORS
#define GSB "\033[01;32m"   // Green Bold
#define RSB "\033[01;31m"   // Red Bold
#define YSB "\033[01;33m"   // Yellow Bold
#define WSB "\033[01;37m"   // White Bold
#define BSB "\033[01;34m"   // Blue Bold
#define RSTB "\033[00m"     // Bold Color Reset
#endif

// Symbols
#ifndef SYMBOLS
#define PLUS "\033[32m[+]\033[0m "
#define MINUS "\033[31m[-]\033[0m "
#define ASTK "\033[34m[*]\033[0m "
#define WARN "\033[33m(Warn):\033[0m "
#define ERROR "\033[31m[Error]:\033[0m "
#endif

#endif //PAYROLL_COLORS_H
