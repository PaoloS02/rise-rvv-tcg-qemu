#ifndef BSWAP_I386_H
#define BSWAP_I386_H

static inline void ldn_host(const void *src, void *dst, size_t size)
{
    //(uint8_t *)dst;
    __builtin_memcpy(dst, src, size);
}

static inline void stn_host(const void *src, void *dst, size_t size)
{
    //(uint8_t *)dst;
    __builtin_memcpy(dst, src, size);
}

//static inline void ldn_le_p(const void *ptr, void *dst, size_t size)
//{
//    *dst = le_bswap(ldn_he_p(ptr), size);
//}

#endif /* BSWAP_I386_H */
