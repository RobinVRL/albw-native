#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern undefined4 uRam0022eb1c;
extern undefined4 uRam0022eb20;
extern undefined4 uRam0022eb24;

// USA 0022EA84 <- EU 0022EA84 (Ghidra, non-matching)
// GLOBAL UNK_0022eb1c undefined4
// GLOBAL UNK_0022eb20 undefined4
// GLOBAL UNK_0022eb24 undefined4

void func_0022EA84(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  func_004FABDC(param_1,2,0xffffffff,0);
  if (*(char *)(param_1 + 0xa6d) == '\0') {
    pfVar4 = (float *)(param_1 + 0xa70);
  }
  else {
    pfVar4 = (float *)func_00520FC0();
  }
  func_00115C70(&fStack_14,pfVar4,(float *)(param_1 + 0x3d0));
  fStack_20 = fStack_14;
  uStack_1c = uStack_10;
  uStack_18 = uStack_c;
  iVar5 = func_0068C690(&fStack_20);
  *(int *)(param_1 + 0xa48) = iVar5;
  uVar2 = uRam0022eb20;
  uVar1 = uRam0022eb1c;
  puVar6 = *(undefined4 **)(param_1 + 0xa68);
  uVar7 = *(undefined4 *)(param_1 + 1000);
  puVar6[6] = iVar5;
  uVar3 = uRam0022eb24;
  puVar6[5] = uVar7;
  *puVar6 = uVar1;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[4] = uVar1;
  puVar6[3] = uVar1;
  puVar6 = *(undefined4 **)(param_1 + 0xa68);
  puVar6[4] = *puVar6;
  puVar6[3] = uVar1;
  return;
}

