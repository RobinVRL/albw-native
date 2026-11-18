#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam0022edc4;
extern undefined4 uRam0022eda4;
extern undefined4 uRam0022eda8;
extern undefined4 uRam0022edac;
extern char s_cf_0022edb0[];

// USA 0022ED24 <- EU 0022ED24 (Ghidra, non-matching)
// GLOBAL UNK_0022eda4 undefined4
// GLOBAL UNK_0022eda8 undefined4
// GLOBAL UNK_0022edac undefined4
// GLOBAL UNK_0022edc4 int

undefined4 func_0022ED24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,6,0xffffffff,0);
  iStack_10 = iRam0022edc4;
  uVar3 = uRam0022edac;
  uVar2 = uRam0022eda8;
  uVar1 = uRam0022eda4;
  puVar4 = *(undefined4 **)(param_1 + 0xa68);
  *puVar4 = uRam0022eda4;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[4] = uVar1;
  puVar4[3] = uVar1;
  iVar5 = *(int *)(param_1 + 0xa68);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb | 0x80;
  pcStack_c = (char *)((int)s_cf_0022edb0);
  return func_00150A84((int *)param_1,&iStack_10,0);
}

