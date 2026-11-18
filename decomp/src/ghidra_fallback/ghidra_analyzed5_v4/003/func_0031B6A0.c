#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0031B348(int param_1,uint param_2);
extern int func_0031BC9C(int param_1);
extern int func_0048AC68(uint param_1);
extern int func_0048ACAC(uint param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0031b7a4;
extern int DAT_0031b7a8;

// USA 0031B6A0 <- EU 0031B67C (Ghidra, non-matching)
// GLOBAL DAT_0031b7a4 int *
// GLOBAL DAT_0031b7a8 int

uint func_0031B6A0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = func_0031BC9C(param_2);
    if (((*DAT_0031b7a4 == 0) || (0x1f < uVar1)) ||
       (iVar2 = func_0055696C(*DAT_0031b7a4,param_2), iVar2 == 0)) {
      uVar3 = func_0031B348(param_1,0);
      return uVar3;
    }
    if (param_3 == 0) {
      func_0031B348(param_1,1);
    }
    pfVar5 = (float *)(DAT_0031b7a8 + uVar1 * 8);
    uVar1 = (uint)ALBW_AS_U32(pfVar5[1]) & 0xff;
    if ((uVar1 & 1 << (iVar2 - 1U & 0xff)) == 0) {
      uVar4 = 0xff;
    }
    else {
      uVar1 = func_0048ACAC(uVar1,iVar2 - 1);
      uVar1 = uVar1 - 1;
      uVar4 = uVar1 & 0xff;
    }
    if (uVar4 != 0xff) {
      fVar7 = *pfVar5;
      uVar1 = func_0048AC68((uint)ALBW_AS_U32(pfVar5[1]) & 0xff);
      if ((int)uVar4 <= (int)uVar1) {
        uVar1 = *(uint *)(param_1 + 0x4c);
        fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        uVar4 = (uint)(fVar7 + fVar6);
        if (uVar1 != uVar4) {
          fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
          func_002316CC(param_1 + 0x30,fVar7);
          uVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1 + 0x10);
          *(uint *)(param_1 + 0x4c) = uVar4;
        }
      }
    }
  }
  return uVar1;
}

