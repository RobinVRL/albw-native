#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AC38(int param_1);
extern float fRam00220844;
extern int iRam00220840;

// USA 00220780 <- EU 00220780 (Ghidra, non-matching)
// GLOBAL UNK_00220840 int
// GLOBAL UNK_00220844 float

void func_00220780(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (((*(char *)(param_1 + 0x8c5) != '\x17') || (*(char *)(param_1 + 0xafc) == '\x01')) ||
     (*(char *)(param_1 + 0xb02) == '\x01')) {
    *(undefined1 *)(param_1 + 0xafc) = 0;
    *(undefined1 *)(param_1 + 0xb02) = 0;
    if (*(char *)(param_1 + 0x8e4) == '\x02') {
      func_004FABDC(param_1,0x1a,0xc,0);
    }
    else {
      func_004FABDC(param_1,0x19,0,0);
    }
    fVar1 = func_0058AC38(param_1);
    iVar2 = VectorFloatToUnsigned(fVar1,3);
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = iRam00220840;
    }
    *(int *)(param_1 + 0xa6c) = iVar2;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0xa70) = iVar3;
    }
    else {
      fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xa70) = fRam00220844 / fVar1;
    }
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  return;
}

