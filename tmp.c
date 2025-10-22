#include <stdio.h>
#include <stdint.h>
#include <math.h>

const uint32_t primes[] = {
    2,   3,   5,   7,  11,  13,  17,  19,  23,  29,  31,  37,  41,  43,  47,  53,
   59,  61,  67,  71,  73,  79,  83,  89,  97, 101, 103, 107, 109, 113, 127, 131,
  137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223,
  227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311 
};

uint32_t cube_root_frac32(uint32_t prime) {
  long double cuberoot = cbrtl((long double) prime);
  cuberoot = cuberoot - floorl(cuberoot);
  cuberoot = cuberoot * 0x100000000;
  cuberoot = floorl(cuberoot);
  
  return (uint32_t) cuberoot;
}

int main(int argc, char *argv[]) {
  for (int i = 0; i < 64; i++)
    printf("%08x\n", cube_root_frac32(primes[i]));
  
  return 0;
}
