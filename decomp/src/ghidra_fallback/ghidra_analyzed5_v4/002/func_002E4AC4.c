#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int func_0058A468(int param_1);
extern float DAT_002e4b18;
extern float DAT_002e4b1c;
extern int *DAT_002e4b20;
extern float DAT_002e4b24;
extern float DAT_002e4b28;

// USA 002E4AC4 <- EU 002E4AA0 (Ghidra, non-matching)
// GLOBAL DAT_002e4b18 float
// GLOBAL DAT_002e4b1c float
// GLOBAL DAT_002e4b20 int *
// GLOBAL DAT_002e4b24 float
// GLOBAL DAT_002e4b28 float

void func_002E4AC4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  uVar1 = (uint)*(char *)(param_2 + 0x21);
  if (uVar1 == 0xd) {
    uVar1 = func_0055696C(*DAT_002e4b20,0xc);
    fVar4 = DAT_002e4b24;
    if (uVar1 < 3) {
      iVar2 = func_0058A468(param_1);
      fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar4 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(param_2 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
      return;
    }
  }
  else {
    bVar3 = uVar1 != 2;
    if (bVar3) {
      uVar1 = (uint)*(byte *)(param_2 + 0x23);
    }
    fVar4 = DAT_002e4b18;
    if (bVar3 && uVar1 != 3) {
      fVar4 = DAT_002e4b1c;
    }
  }
  return;
}

