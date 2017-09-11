#ifndef __PHELLO_H
#define __PHELLO_H
void print_hello(void);
#define EINVAL_ON(condition) do { if (unlikely(condition)) return -EINVAL; } while (0)
#endif
