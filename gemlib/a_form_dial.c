
#include "gem.h"


int
form_dial (int Flag, int Sx, int Sy, int Sw, int Sh, int Bx, int By, int Bw,
	   int Bh)
{
	aes_intin[0] = Flag;
	aes_intin[1] = Sx;
	aes_intin[2] = Sy;
	aes_intin[3] = Sw;
	aes_intin[4] = Sh;
	aes_intin[5] = Bx;
	aes_intin[6] = By;
	aes_intin[7] = Bw;
	aes_intin[8] = Bh;
	aes_control[0] = 51;
	aes_control[1] = 9;
	aes_control[2] = 1;
	aes_control[3] = 0;
	aes_control[4] = 0;
	aes (&aes_params);
	return aes_intout[0];
}