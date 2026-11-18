#include "ghidra_types.h"

extern int func_00523774(int param_1,uint param_2);
extern float func_005237CC(int param_1);
extern int func_00523ABC(int param_1);
extern int *DAT_0030f96c;
extern undefined4 DAT_0030f970;
extern float DAT_0030f974;

// USA 0030F86C <- EU 0030F848 (Ghidra, non-matching)
// GLOBAL DAT_0030f96c int *
// GLOBAL DAT_0030f970 undefined4
// GLOBAL DAT_0030f974 float

undefined4 func_0030F86C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = DAT_0030f970;
  piVar1 = DAT_0030f96c;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x990) = 10;
    *(undefined4 *)(param_1 + 0x994) = uVar3;
    *(undefined4 *)(param_1 + 0x98c) = 0;
    fVar6 = DAT_0030f974;
    bVar2 = func_00523ABC(*piVar1);
    if (bVar2) {
      bVar2 = func_00523ABC(*piVar1);
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x998) = 2;
        bVar2 = func_00523774(*piVar1,4);
        if (bVar2) {
          fVar4 = func_005237CC(*piVar1);
          uVar3 = VectorFloatToUnsigned(fVar4,3);
          fVar4 = func_005237CC(*piVar1);
          *(undefined4 *)(param_1 + 0x778) = uVar3;
          fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
          uVar3 = VectorFloatToUnsigned((fVar4 - fVar5) * fVar6,3);
          *(undefined4 *)(param_1 + 0x77c) = uVar3;
        }
        else {
          *(undefined4 *)(param_1 + 0x778) = 0x5a;
          *(undefined4 *)(param_1 + 0x77c) = 0;
        }
        return 2;
      }
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x998) = 1;
    }
    else {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x998) = 0;
    }
  }
  else {
    if ((param_4 != 1) || (*(char *)(*DAT_0030f96c + 0x70) != '\x04')) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

