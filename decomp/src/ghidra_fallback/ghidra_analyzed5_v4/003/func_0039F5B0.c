#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern float DAT_0039f618;

// USA 0039F5B0 <- EU 0039F58C (Ghidra, non-matching)
// GLOBAL DAT_0039f618 float

undefined4 func_0039F5B0(int param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_004CEA18(*(int *)(param_1 + 4),1,1);
  piVar6 = (int *)0x0;
  puVar2 = (uint *)func_002C11E8(aiStack_68,0,10,0);
  iVar5 = *(int *)(param_1 + 0x1c);
  func_0016898C(iVar5,puVar2);
  fVar1 = DAT_0039f618;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x10) = DAT_0039f618;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(float *)(iVar3 + 8) != fVar1) {
    uVar4 = 1;
    *(float *)(iVar3 + 8) = fVar1;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  return func_00169A80(*(int **)(param_1 + 0x1c),uVar4,iVar5,piVar6);
}

