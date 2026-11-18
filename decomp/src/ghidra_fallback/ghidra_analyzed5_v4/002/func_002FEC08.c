#include "ghidra_types.h"

extern float DAT_002ff040;

// USA 002FEC08 <- EU 002FEBE4 (Ghidra, non-matching)
// GLOBAL DAT_002ff040 float

void * func_002FEC08(int param_1,int param_2,int param_3,float fparam_0)

{
  char cVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x34) -
                                     (uint)*(byte *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x34) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x35),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x35) -
                                     (uint)*(byte *)(param_1 + 0x35),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x35) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x36) -
                                     (uint)*(byte *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x36) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x30) -
                                     (uint)*(byte *)(param_1 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x30) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x31) -
                                     (uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x31) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x32),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x32) -
                                     (uint)*(byte *)(param_1 + 0x32),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x32) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x38) -
                                     (uint)*(byte *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x38) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x39),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x39) -
                                     (uint)*(byte *)(param_1 + 0x39),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x39) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x3a) -
                                     (uint)*(byte *)(param_1 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x3a) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x3c) -
                                     (uint)*(byte *)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x3c) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x3d),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x3d) -
                                     (uint)*(byte *)(param_1 + 0x3d),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x3d) = (char)iVar3;
  fVar2 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x3e),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*(byte *)(param_2 + 0x3e) -
                                     (uint)*(byte *)(param_1 + 0x3e),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar2 + fVar5 * fparam_0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  *(char *)(param_1 + 0x3e) = (char)iVar3;
  if ((cVar1 == '\n' || cVar1 == '\v') && (*(char *)(param_2 + 0x28) != '\t')) {
    if (param_3 == 0) {
      *(float *)(param_1 + 0x54) =
           *(float *)(param_1 + 0x54) +
           (*(float *)(param_2 + 0x54) - *(float *)(param_1 + 0x54)) * fparam_0;
      *(float *)(param_1 + 0x58) =
           *(float *)(param_1 + 0x58) +
           (*(float *)(param_2 + 0x58) - *(float *)(param_1 + 0x58)) * fparam_0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  }
  fVar2 = DAT_002ff040;
  if (cVar1 == '\t' || cVar1 == '\v') {
    *(float *)(param_1 + 0x40) =
         *(float *)(param_1 + 0x40) +
         fparam_0 * (*(float *)(param_2 + 0x40) - *(float *)(param_1 + 0x40));
    *(float *)(param_1 + 0x44) =
         *(float *)(param_1 + 0x44) +
         fparam_0 * (*(float *)(param_2 + 0x44) - *(float *)(param_1 + 0x44));
    fVar4 = *(float *)(param_1 + 0x48) +
            fparam_0 * (*(float *)(param_2 + 0x48) - *(float *)(param_1 + 0x48));
    *(float *)(param_1 + 0x48) = fVar4;
    fVar6 = *(float *)(param_1 + 0x40);
    fVar5 = *(float *)(param_1 + 0x44);
    fVar2 = fVar2 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    *(float *)(param_1 + 0x40) = fVar6 * fVar2;
    *(float *)(param_1 + 0x44) = fVar5 * fVar2;
    *(float *)(param_1 + 0x48) = fVar4 * fVar2;
  }
  return (void *)param_1;
}

