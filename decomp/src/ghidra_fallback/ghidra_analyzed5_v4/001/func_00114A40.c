#include "ghidra_types.h"


// USA 00114A40 <- EU 00114A40 (Ghidra, function missing from the decomp table)

undefined8 func_00114A40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  int unaff_r11;
  bool bVar3;
  bool bVar4;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
    if ((int)param_4 < -0x3f) {
      uVar1 = unaff_r6 | param_3;
      uVar2 = 0;
      param_3 = 0;
      unaff_r6 = (uVar1 | uVar1 << 0x10) >> 0x10 | param_2;
      param_2 = 0;
      if ((int)param_4 < -0x40) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
      }
    }
    else {
      if ((int)param_4 < -0x1f) {
        unaff_r6 = unaff_r6 | param_3;
        param_4 = param_4 + 0x20;
        param_2 = 0;
        param_3 = param_2;
      }
      uVar1 = -param_4;
      uVar2 = 0;
      if (uVar1 != 0) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10 | param_3 << (param_4 + 0x20 & 0xff);
        param_3 = param_3 >> (uVar1 & 0xff) | param_2 << (param_4 + 0x20 & 0xff);
        param_2 = param_2 >> (uVar1 & 0xff);
        uVar2 = 0;
      }
    }
  }
  bVar4 = SUB41(unaff_r6 >> 0x1f,0);
  if ((unaff_r6 & 0x7fffffff) == 0) {
    if (!bVar4) goto LAB_00114a8c;
    bVar4 = (bool)((byte)param_3 & 1);
  }
  bVar3 = unaff_r11 != -1;
  if (unaff_r11 == 0) {
    bVar3 = SUB41(((uint)bVar4 << 0x1f) >> 0x1f,0);
  }
  bVar3 = bVar3 && 0xfffffffe < param_3;
  uVar1 = param_2;
  if (bVar3) {
    uVar1 = param_2 + 1;
  }
  bVar3 = bVar3 && 0xfffffffe < param_2;
  if (bVar3) {
    uVar1 = 0x80000000;
  }
  uVar2 = uVar2 + bVar3;
  param_2 = uVar1;
LAB_00114a8c:
  return CONCAT44(param_2,uVar2 | param_1 & 0x80000000);
}

