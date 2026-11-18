#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058AC38(int param_1);
extern undefined4 uRam002f2ed8;
extern undefined4 uRam002f2edc;
extern int DAT_002f2ec8;
extern undefined4 DAT_002f2ecc;
extern float DAT_002f2ed0;
extern float DAT_002f2ed4;

// USA 002F2D44 <- EU 002F2D20 (Ghidra, non-matching)
// GLOBAL DAT_002f2ec8 int
// GLOBAL DAT_002f2ecc undefined4
// GLOBAL DAT_002f2ed0 float
// GLOBAL DAT_002f2ed4 float
// GLOBAL UNK_002f2ed8 undefined4
// GLOBAL UNK_002f2edc undefined4

undefined4 func_002F2D44(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fparam_0;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  fparam_0 = DAT_002f2ed0;
  uVar7 = DAT_002f2ecc;
  cVar1 = *(char *)(DAT_002f2ec8 + param_1);
  if (cVar1 != '!') {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_002f2ecc;
    *(undefined4 *)(param_1 + 0x3e0) = uVar7;
    *(undefined4 *)(param_1 + 0x3e4) = uVar7;
    puVar4 = (undefined4 *)(param_1 + 0xb0c);
    if (cVar1 != '\b') {
      fVar6 = DAT_002f2ed4;
      if (cVar1 == '\x05' || cVar1 == '\x06') {
        func_004FABDC(param_1,8,0,0);
        uVar2 = uRam002f2edc;
        *(undefined4 *)(param_1 + 0xb10) = 0x1e;
        *(undefined4 *)(param_1 + 0xb14) = uVar2;
        *puVar4 = 0;
        fVar5 = func_0058AC38(param_1);
        iVar3 = (int)fVar5 + 0x1e;
        *(int *)(param_1 + 0xb28) = iVar3;
      }
      else {
        func_004FABDC(param_1,9,0xffffffff,0);
        uVar2 = uRam002f2ed8;
        *(undefined4 *)(param_1 + 0xb10) = 0x41;
        *(undefined4 *)(param_1 + 0xb14) = uVar2;
        *puVar4 = 0;
        fVar5 = func_0058AC38(param_1);
        iVar3 = (int)fVar5 + 0x1e;
        *(int *)(param_1 + 0xb28) = iVar3;
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb2c) = uVar7;
      }
      else {
        fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0xb2c) = fparam_0 / fVar5;
      }
      *(undefined4 *)(param_1 + 0xb24) = 0;
      return func_004FB4E0(param_1,fVar6);
    }
    *(undefined4 *)(param_1 + 0xb10) = 0;
    *(undefined4 *)(param_1 + 0xb14) = uVar7;
    *puVar4 = 0;
    func_004FC07C(param_1,10,0xffffffff,0);
    func_004FB4E0(param_1,fparam_0);
    iVar3 = func_00548E78(param_1,0x14,0xc);
    *(int *)(param_1 + 0xb28) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xb2c) = uVar7;
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb2c) = fparam_0 / fVar6;
    }
    *(undefined4 *)(param_1 + 0xb24) = 0;
  }
  return 0;
}

