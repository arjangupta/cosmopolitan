#ifndef COSMOPOLITAN_LIBC_STR_THOMPIKE_H_
#define COSMOPOLITAN_LIBC_STR_THOMPIKE_H_
#include "libc/nexgen32e/bsr.h"

#define ThomPikeCont(x)     (((x)&0b11000000) == 0b10000000)
#define ThomPikeByte(x)     ((x) & (((1 << ThomPikeMsb(x)) - 1) | 3))
#define ThomPikeLen(x)      (7 - ThomPikeMsb(x))
#define ThomPikeMsb(x)      (((x)&0xff) < 252 ? bsr(~(x)&0xff) : 1)
#define ThomPikeMerge(x, y) ((x) << 6 | (y)&0b00111111)

#endif /* COSMOPOLITAN_LIBC_STR_THOMPIKE_H_ */
