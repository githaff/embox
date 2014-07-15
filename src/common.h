#ifndef __COMMON_H
#define __COMMON_H

#include <stdint.h>


typedef uint8_t  u8_t;
typedef uint16_t u16_t;
typedef uint32_t u32_t;
typedef uint64_t u64_t;

#define BIT(VAL, POS) ((VAL >> POS) & 0x1)
#define ARRAY_SIZE(ARRAY) (sizeof(ARRAY)/sizeof((ARRAY)[0]))

#define COLOR_BOLD "\033[4;97m"
#define COLOR_NONE "\033[0m"
#define COLOR_TEXT(STR) (COLOR_BOLD STR COLOR_NONE)

#define err_msg(...) fprintf(stderr, "Error: " __VA_ARGS__)
#define dbg_msg(...) fprintf(stderr, __VA_ARGS__)


#endif /* __COMMON_H */
