#ifndef _MAIN_H
#define _MAIN_H


int _putchar(char c);
int get_bit(unsigned long int m, unsigned int index);
int set_bit(unsigned long int *j, unsigned int index);
int clear_bit(unsigned long int *d, unsigned int index);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned long int g, unsigned long int p);
void print_binary(unsigned long int z);

#endif /*MAIN_H*/
