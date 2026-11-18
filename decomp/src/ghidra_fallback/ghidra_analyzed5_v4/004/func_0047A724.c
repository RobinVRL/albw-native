#include "ghidra_types.h"

extern int func_0044F498(int param_1,undefined1 param_2,undefined4 *param_3);
extern int func_0055696C(int param_1,int param_2);
extern float DAT_0047a814;
extern int *DAT_0047a818;

// USA 0047A724 <- EU 0047A6FC (Ghidra, non-matching)
// GLOBAL DAT_0047a814 float
// GLOBAL DAT_0047a818 int *

void func_0047A724(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = *(int *)(param_1 + 0x158);
  uVar3 = 0xff;
  fVar4 = DAT_0047a814;
  if (*(int *)(iVar1 + 0x214) != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x214) + 0x98) != '\x06') {
      iVar2 = *(int *)(**(int **)(*(int *)(iVar1 + 0x1f8) + 0x1c) + 0x10);
      fStack_20 = *(float *)(iVar2 + 0x54) - DAT_0047a814;
      uStack_1c = *(undefined4 *)(iVar2 + 100);
      func_0044F498(*(int *)(iVar1 + 0x214),6,&fStack_20);
    }
    uVar3 = 0;
  }
  if (*(int *)(iVar1 + 0x210) != 0) {
    if ((*DAT_0047a818 == 0) || (iVar2 = func_0055696C(*DAT_0047a818,0x27), iVar2 == 0)) {
      *(undefined1 *)(*(int *)(iVar1 + 0x210) + 0x98) = 9;
    }
    else {
      if (*(char *)(*(int *)(iVar1 + 0x210) + 0x98) != '\x06') {
        iVar2 = *(int *)(**(int **)(*(int *)(iVar1 + 500) + 0x1c) + 0x10);
        fStack_20 = *(float *)(iVar2 + 0x54) - fVar4;
        uStack_1c = *(undefined4 *)(iVar2 + 100);
        func_0044F498(*(int *)(iVar1 + 0x210),6,&fStack_20);
      }
      uVar3 = 1;
    }
  }
  if (*(int *)(iVar1 + 0x218) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x218) + 0x80) = uVar3;
  }
  return;
}

