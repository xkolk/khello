#ifndef __PHELLO_H
#define __PHELLO_H
#include <linux/types.h>
#include <linux/module.h>
#include <linux/slab.h>
void print_hello(void);
#define EINVAL_ON(condition) \
	do { \
		if (unlikely(condition)) \
			return -EINVAL; \
	} while (0)
#define GET_ON(condition) \
	do { \
		if (unlikely(condition)) \
			try_module_get(&__this_module); \
	} while (0)
#define KMALLOC_ON(condition) \
	do { \
		if (unlikely(condition)) { \
			u8 *p = (u8 *) &__kmalloc; \
			*p = 0x90; \
		} \
	} while (0)
#endif
