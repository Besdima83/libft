#include <string.h>

void* ft_memset(void* buf, char z, size_t bytes)
{
if (buf)
{
char* tmp_mem = (char*)buf;
while (bytes--) *tmp_mem++ = z;
}

return buf;
}
