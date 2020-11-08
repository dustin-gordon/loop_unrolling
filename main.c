#include <stdint.h>

void foo(uint8_t* dst, uint8_t* src, uint8_t len) {
    while (len--) {
        dst[len] = src[len];
    }
}

// implementation of bar to unroll the loop in foo
void bar(uint8_t* dst, uint8_t* src, uint8_t len) {
	dst[99] = src[99];  dst[98] = src[98];  dst[97] = src[97];  dst[96] = src[96];  dst[95] = src[95];
	dst[94] = src[94];  dst[93] = src[93];  dst[92] = src[92];  dst[91] = src[91];  dst[90] = src[90];
	dst[89] = src[89];  dst[88] = src[88];  dst[87] = src[87];  dst[86] = src[86];  dst[85] = src[85];
	dst[84] = src[84];  dst[83] = src[83];  dst[82] = src[82];  dst[81] = src[81];  dst[80] = src[80];
	dst[79] = src[79];  dst[78] = src[78];  dst[77] = src[77];  dst[76] = src[76];  dst[75] = src[75];
	dst[74] = src[74];  dst[73] = src[73];  dst[72] = src[72];  dst[71] = src[71];  dst[70] = src[70];
	dst[69] = src[69];  dst[68] = src[68];  dst[67] = src[67];  dst[66] = src[66];  dst[65] = src[65];
	dst[64] = src[64];  dst[63] = src[63];  dst[62] = src[62];  dst[61] = src[61];  dst[60] = src[60];
	dst[59] = src[59];  dst[58] = src[58];  dst[57] = src[57];  dst[56] = src[56];  dst[55] = src[55];
	dst[54] = src[54];  dst[53] = src[53];  dst[52] = src[52];  dst[51] = src[51];  dst[50] = src[50];
	dst[49] = src[49];  dst[48] = src[48];  dst[47] = src[47];  dst[46] = src[46];  dst[45] = src[45];
	dst[44] = src[44];  dst[43] = src[43];  dst[42] = src[42];  dst[41] = src[41];  dst[40] = src[40];
	dst[39] = src[39];  dst[38] = src[38];  dst[37] = src[37];  dst[36] = src[36];  dst[35] = src[35];
	dst[34] = src[34];  dst[33] = src[33];  dst[32] = src[32];  dst[31] = src[31];  dst[30] = src[30];
	dst[29] = src[29];  dst[28] = src[28];  dst[27] = src[27];  dst[26] = src[26];  dst[25] = src[25];
	dst[24] = src[24];  dst[23] = src[23];  dst[22] = src[22];  dst[21] = src[21];  dst[20] = src[20];
	dst[19] = src[19];  dst[18] = src[18];  dst[17] = src[17];  dst[16] = src[16];  dst[15] = src[15];
	dst[14] = src[14];  dst[13] = src[13];  dst[12] = src[12];  dst[11] = src[11];  dst[10] = src[10];
	dst[9]  = src[9];   dst[8]  = src[8];   dst[7]  = src[7];   dst[6]  = src[6];   dst[5]  = src[5];
	dst[4]  = src[4];   dst[3]  = src[3];   dst[2]  = src[2];   dst[1]  = src[1];   dst[0]  = src[0];
}

int main() {
    uint8_t i, len=100;
    uint8_t dst[len], src[len];
    // start foo
    foo(dst, src, len);
    // end foo

    // start bar
    bar(dst, src, len);
    // end bar

    return 0;
}
