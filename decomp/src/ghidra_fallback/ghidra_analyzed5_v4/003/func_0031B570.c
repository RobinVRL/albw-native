#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0031B348(int param_1,uint param_2);
extern int func_0031B7D0(int param_1);
extern int func_0048AC68(uint param_1);
extern int func_0048ACAC(uint param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0031b674;
extern int DAT_0031b678;

// USA 0031B570 <- EU 0031B54C (Ghidra, non-matching)
// GLOBAL DAT_0031b674 int *
// GLOBAL DAT_0031b678 int

undefined4 func_0031B570(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = func_0031B7D0(param_2);
    if (((*DAT_0031b674 == 0) || (0x1f < uVar1)) ||
       (iVar2 = func_0055696C(*DAT_0031b674,param_2), iVar2 == 0)) {
      return func_0031B348(param_1,0);
    }
    if (param_3 == 0) {
      func_0031B348(param_1,1);
    }
    pfVar4 = (float *)(DAT_0031b678 + uVar1 * 8);
    if (((uint)ALBW_AS_U32(pfVar4[1]) & 0xff & 1 << (iVar2 - 1U & 0xff)) == 0) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = func_0048ACAC((uint)ALBW_AS_U32(pfVar4[1]) & 0xff,iVar2 - 1);
      uVar1 = uVar1 - 1 & 0xff;
    }
    if (uVar1 != 0xff) {
      fVar6 = *pfVar4;
      uVar3 = func_0048AC68((uint)ALBW_AS_U32(pfVar4[1]) & 0xff);
      if ((int)uVar1 <= (int)uVar3) {
        fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
        iVar2 = (int)(fVar6 + fVar5);
        if (*(int *)(param_1 + 0x4c) != iVar2) {
          fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
          func_002316CC(param_1 + 0x30,fVar6);
          (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1 + 0x10);
          *(int *)(param_1 + 0x4c) = iVar2;
        }
      }
    }
  }
  return 0;
}

