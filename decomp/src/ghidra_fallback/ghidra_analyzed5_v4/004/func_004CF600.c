#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);

// USA 004CF600 <- EU 004CF5D8 (Ghidra, non-matching)

int func_004CF600(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x13c) < 0) {
    return *(int *)(param_1 + 0x13c);
  }
  func_00115074(&local_20,param_2,(float *)(param_1 + 0x140));
  fVar3 = *(float *)(param_1 + 0x78);
  if (fVar3 < *(float *)(param_1 + 0x74)) {
    fVar3 = *(float *)(param_1 + 0x74);
  }
  if (fVar3 <= *(float *)(param_1 + 0x7c)) {
    fVar3 = *(float *)(param_1 + 0x7c);
  }
  iVar2 = 0;
  if (*(byte *)(param_3 + 0x79) != 0) {
    do {
      iVar1 = param_3 + iVar2 * 0x10;
      if (*(float *)(param_1 + 0x14c) * fVar3 <
          *(float *)(iVar1 + 0x1c) * local_1c + *(float *)(iVar1 + 0x20) * fStack_18 +
          *(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x18) * local_20) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_3 + 0x79));
  }
  return 1;
}

