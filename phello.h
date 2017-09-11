#ifndef __PHELLO_H
#define __PHELLO_H
void print_hello(void);
#define EINVAL_ON(condition) do { if (unlikely(condition)) return -EINVAL; } while (0)
#define GET_ON(condition) do { if (unlikely(condition)) try_module_get(&__this_module); } while (0)
#endif
