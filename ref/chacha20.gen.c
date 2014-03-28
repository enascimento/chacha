static inline void _do_chacha20(register uint32_t x[16],
                                      register const uint32_t input[16]);
static inline void _do_chacha20(register uint32_t x[16],
                                      register const uint32_t input[16]) {
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 16);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 12);
  x[0] += x[4];
  x[12] ^= x[0];
  x[12] = rol(x[12], 8);
  x[8] += x[12];
  x[4] ^= x[8];
  x[4] = rol(x[4], 7);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 16);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 12);
  x[1] += x[5];
  x[13] ^= x[1];
  x[13] = rol(x[13], 8);
  x[9] += x[13];
  x[5] ^= x[9];
  x[5] = rol(x[5], 7);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 16);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 12);
  x[2] += x[6];
  x[14] ^= x[2];
  x[14] = rol(x[14], 8);
  x[10] += x[14];
  x[6] ^= x[10];
  x[6] = rol(x[6], 7);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 16);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 12);
  x[3] += x[7];
  x[15] ^= x[3];
  x[15] = rol(x[15], 8);
  x[11] += x[15];
  x[7] ^= x[11];
  x[7] = rol(x[7], 7);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 16);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 12);
  x[0] += x[5];
  x[15] ^= x[0];
  x[15] = rol(x[15], 8);
  x[10] += x[15];
  x[5] ^= x[10];
  x[5] = rol(x[5], 7);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 16);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 12);
  x[1] += x[6];
  x[12] ^= x[1];
  x[12] = rol(x[12], 8);
  x[11] += x[12];
  x[6] ^= x[11];
  x[6] = rol(x[6], 7);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 16);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 12);
  x[2] += x[7];
  x[13] ^= x[2];
  x[13] = rol(x[13], 8);
  x[8] += x[13];
  x[7] ^= x[8];
  x[7] = rol(x[7], 7);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 16);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 12);
  x[3] += x[4];
  x[14] ^= x[3];
  x[14] = rol(x[14], 8);
  x[9] += x[14];
  x[4] ^= x[9];
  x[4] = rol(x[4], 7);
  x[0] += input[0];
  x[1] += input[1];
  x[2] += input[2];
  x[3] += input[3];
  x[4] += input[4];
  x[5] += input[5];
  x[6] += input[6];
  x[7] += input[7];
  x[8] += input[8];
  x[9] += input[9];
  x[10] += input[10];
  x[11] += input[11];
  x[12] += input[12];
  x[13] += input[13];
  x[14] += input[14];
  x[15] += input[15];
}
