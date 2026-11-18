#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float DAT_00324380;

// USA 003242F8 <- EU 003242D4 (Ghidra, non-matching)
// GLOBAL DAT_00324380 float

void func_003242F8(int param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  fVar1 = DAT_00324380;
  uVar2 = *(uint *)(param_1 + 0x8c);
  if (1 < (int)uVar2) {
    if (uVar2 == 0) {
      pfVar4 = (float *)0x0;
    }
    else {
      iVar5 = (uVar2 - 1) + *(int *)(param_1 + 0x88);
      if (*(int *)(param_1 + 0x84) <= iVar5) {
        iVar5 = iVar5 - *(int *)(param_1 + 0x84);
      }
      pfVar4 = (float *)(*(int *)(param_1 + 0x80) + iVar5 * 0xc);
    }
    if (uVar2 < 2) {
      pfVar3 = (float *)0x0;
    }
    else {
      iVar5 = (uVar2 - 2) + *(int *)(param_1 + 0x88);
      if (*(int *)(param_1 + 0x84) <= iVar5) {
        iVar5 = iVar5 - *(int *)(param_1 + 0x84);
      }
      pfVar3 = (float *)(*(int *)(param_1 + 0x80) + iVar5 * 0xc);
    }
    func_00115C70(&local_18,pfVar4,pfVar3);
    *param_2 = local_18;
    param_2[1] = fStack_14;
    param_2[2] = fStack_10;
    return;
  }
  *param_2 = DAT_00324380;
  param_2[1] = fVar1;
  param_2[2] = fVar1;
  return;
}

