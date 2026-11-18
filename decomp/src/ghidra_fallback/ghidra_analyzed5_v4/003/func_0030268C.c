#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00588F14(int param_1);
extern int *DAT_00302788;
extern float DAT_0030278c;

// USA 0030268C <- EU 00302668 (Ghidra, non-matching)
// GLOBAL DAT_00302788 int *
// GLOBAL DAT_0030278c float

void func_0030268C(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0x8f0);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x8f4))) ||
     ((iVar4 = 0, (*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0 &&
      (((iVar3 = *(int *)(iVar1 + 0x20), iVar3 == 0 ||
        (*(int *)(iVar1 + 0x24) != *(int *)(iVar3 + 0xc))) || (*(int *)(iVar3 + 4) < 1)))))) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x2000;
    return;
  }
  pfVar2 = (float *)func_00588F14(*DAT_00302788);
  func_00115C70(&local_20,(float *)(param_1 + 0x3d0),pfVar2);
  iVar1 = *(int *)(param_1 + 0x8f0);
  fVar5 = SQRT(local_20 * local_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18) * DAT_0030278c;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x8f4))) {
    if ((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0) {
      iVar3 = *(int *)(iVar1 + 0x20);
      if ((iVar3 == 0) || (*(int *)(iVar1 + 0x24) != *(int *)(iVar3 + 0xc))) goto LAB_00302760;
      if (*(int *)(iVar3 + 4) < 1) {
        return;
      }
    }
    iVar4 = *(int *)(iVar1 + 0x20);
  }
LAB_00302760:
  if (iVar4 != 0) {
    *(float *)(iVar4 + 0x214) = fVar5;
    *(float *)(iVar4 + 0x210) = fVar5;
  }
  return;
}

