#include "common.h"

void putchar(char ch);

void printf(const char *fmt, ...){
    va_list vargs;
    va_start(vargs, fmt);

    while(*fmt){
        if(*fmt == '%'){
            fmt++;
            switch(*fmt){
                case '\0':
                    putchar('%');
                    goto end;
                case '%':
                    putchar('%');
                    break;
                case 's':{
                    const char *s = va_arg(vargs, const char *);
                    while(*s) putchar(*s++);
                    break;
                }
                case 'd':{
                    int value = va_arg(vargs, int);
                    unsigned magnitude = (unsigned)(value < 0 ? -value : value);
                    if(value < 0) putchar('-');

                    unsigned divisor = 1;
                    while(magnitude / divisor > 9) divisor *= 10;

                    while(divisor > 0){
                        putchar('0' + (magnitude / divisor));
                        magnitude %= divisor;
                        divisor /= 10;
                    }
                    break;
                }
                case 'x':{
                    unsigned val = va_arg(vargs, unsigned);
                    for(int i = 7; i >= 0; i--){
                        unsigned nibble = (val >> (i*4)) & 0xF;
                        putchar("0123456789abcdef"[nibble]);
                    }
                    break;
                }
                default:
                    putchar('%');
                    putchar(*fmt ? *fmt : '\0');
                    break;
            }
        } else {
            putchar(*fmt);
        }
        fmt++;
    }

end:
    va_end(vargs);
}

