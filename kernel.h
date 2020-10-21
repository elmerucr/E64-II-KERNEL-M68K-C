#ifndef KERNEL_H
#define KERNEL_H

#define	VICV_BORDER_COLOR	0x00ff0400
#define VICV_BORDER_SIZE	0x00ff040C

void kinit(void);
void kmain(void);

/*  poke & peek functionality
 *
 */
void kpokeb(unsigned char *address, unsigned char byte);
void kpokew(unsigned int  *address, unsigned int  word);
void kpokel(unsigned long *address, unsigned long lwrd);
unsigned char kpeekb(unsigned char *address);
unsigned char kpeekw(unsigned int  *address);
unsigned char kpeekl(unsigned long *address);

#endif
