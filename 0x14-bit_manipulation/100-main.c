#include "main.h"
/**
 * get_endianness - checks whether a machine is little or big endian
 * Return: 0 as big, 1 as little
 */
int get_endianness(void)
{
        unsigned int i = 1;
        char *c = (char *) &i;
        return (*c);
}
