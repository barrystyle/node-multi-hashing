#ifndef SCRYPT1_H
#define SCRYPT1_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void scrypt_1024_1_1_256(const char* input, char* output, uint32_t len);
void scrypt_1024_1_1_256_sp(const char* input, char* output, char* scratchpad, uint32_t len);
#define  scrypt_scratchpad_size 131583;

#ifdef __cplusplus
}
#endif

#endif
