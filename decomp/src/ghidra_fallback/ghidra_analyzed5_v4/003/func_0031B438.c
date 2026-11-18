#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0031B348(int param_1,uint param_2);
extern int func_0048AC68(uint param_1);
extern int func_0048ACAC(uint param_1,uint param_2);
extern int DAT_0031b548;

// USA 0031B438 <- EU 0031B414 (Ghidra, non-matching)
// GLOBAL DAT_0031b548 int

void func_0031B438(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = DAT_0031b548;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = 1 << (param_3 - 1U & 0xff);
    if (((param_2 < 0x20) && (param_3 - 1U < 5)) &&
       ((*(byte *)(DAT_0031b548 + param_2 * 8 + 4) & uVar1) != 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if ((param_4 == 0) || (0x1f < param_2)) {
      func_0031B348(param_1,uVar3);
    }
    if (uVar3 != 0) {
      if (((param_2 < 0x20) && (param_3 != 0)) &&
         (uVar3 = *(uint *)(iVar5 + param_2 * 8 + 4) & 0xff, (uVar3 & uVar1) != 0)) {
        uVar1 = func_0048ACAC(uVar3,param_3 - 1);
        uVar1 = uVar1 - 1 & 0xff;
      }
      else {
        uVar1 = 0xff;
      }
      if ((param_2 < 0x20) && (uVar1 != 0xff)) {
        pfVar2 = (float *)(iVar5 + param_2 * 8);
        fVar6 = *pfVar2;
        uVar3 = func_0048AC68((uint)ALBW_AS_U32(pfVar2[1]) & 0xff);
        if ((int)uVar1 <= (int)uVar3) {
          fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
          iVar5 = (int)(fVar6 + fVar4);
          if (*(int *)(param_1 + 0x4c) != iVar5) {
            fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
            func_002316CC(param_1 + 0x30,fVar6);
            (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1 + 0x10);
            *(int *)(param_1 + 0x4c) = iVar5;
          }
        }
      }
    }
  }
  return;
}

