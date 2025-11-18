#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// When use dwmblocks with dwm status2d patch you can use the first column as color
#define BLOCKS(X)             \
    X("", "sb-volume", 1, 2)    \
    X("^c#7daea3^", "sb-battery", 1, 0)   \
    X("^c#d8a657^", "sb-wifi", 1, 0)      \
    X("^c#d3869b^", "sb-bluetooth", 1, 0) \
    X("^c#e78a4e^", "sb-time", 60, 0)

#endif  // CONFIG_H
