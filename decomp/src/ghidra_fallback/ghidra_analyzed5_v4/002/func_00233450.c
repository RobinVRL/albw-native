#include "ghidra_types.h"

extern int func_003A4060(int param_1,int param_2,uint param_3);
extern int func_004CF600(int param_1,float *param_2,int param_3);
extern int DAT_002334d8;
extern undefined4 DAT_002334dc;

// USA 00233450 <- EU 00233450 (Ghidra, non-matching)
// GLOBAL DAT_002334d8 int
// GLOBAL DAT_002334dc undefined4

void func_00233450(int param_1,int param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  
  iVar1 = param_1 + (int)(short)(ushort)*(byte *)(DAT_002334d8 + param_1) * (int)(short)DAT_002334dc
                    * 4;
  func_003A4060(iVar1 + 0x159c,param_2,param_3);
  if (param_3 < *(uint *)(iVar1 + 0x161c)) {
    pfVar3 = (float *)(*(int *)(iVar1 + 0x1624) + param_3 * 0x38);
  }
  else {
    pfVar3 = *(float **)(iVar1 + 0x1624);
  }
  fVar2 = 0.0;
  if (*(char *)(pfVar3 + 0xd) != '\0') {
    fVar2 = pfVar3[0xc];
  }
  if ((*(char *)(pfVar3 + 0xd) != '\0' && fVar2 != 0.0) && (*(char *)((int)pfVar3 + 0x36) == '\0'))
  {
    iVar1 = func_004CF600((int)ALBW_AS_U32(fVar2),pfVar3,iVar1 + 0x159c);
    *(byte *)((int)pfVar3 + 0x35) = (byte)iVar1 ^ 1;
  }
  return;
}

