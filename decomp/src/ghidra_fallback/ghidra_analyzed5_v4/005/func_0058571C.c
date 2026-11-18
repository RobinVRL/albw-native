#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float DAT_00585800;
extern float DAT_00585804;

// USA 0058571C <- EU 005856F4 (Ghidra, non-matching)
// GLOBAL DAT_00585800 float
// GLOBAL DAT_00585804 float

void func_0058571C(int param_1,float *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 ((float *)(albw_frame + 0x10))
  #define local_18 (*(float *)(albw_frame + 0x18))
  if (param_2 == (float *)0x0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x624);
  if (param_4 < *(uint *)(param_1 + 0x620)) {
    iVar2 = iVar2 + param_4 * 0x118;
  }
  iVar2 = *(int *)(iVar2 + 0x28);
  if (*(short *)(iVar2 + 0x54) == 8) {
    local_2c = *param_2;
    fStack_28 = param_2[1];
    fStack_24 = param_2[2];
    func_00115C70(local_20,&local_2c,(float *)(iVar2 + 4));
    fVar4 = *(float *)(iVar2 + 0x58) * DAT_00585800;
    fVar3 = *(float *)(iVar2 + 0x60) * DAT_00585800;
    fVar5 = fVar4 + DAT_00585800;
    if ((local_20[0] <= -(*(float *)(iVar2 + 0x58) * DAT_00585800)) || (fVar4 <= local_20[0])) {
      if ((-fVar3 < local_18) &&
         ((local_18 < fVar3 && (bVar1 = local_20[0] <= DAT_00585804, local_20[0] = fVar5, bVar1))))
      {
        local_20[0] = -fVar5;
      }
    }
    else {
      bVar1 = local_18 <= DAT_00585804;
      local_18 = fVar3 + DAT_00585800;
      if (bVar1) {
        local_18 = -(fVar3 + DAT_00585800);
      }
    }
    func_00115C54(param_2,(float *)(iVar2 + 4),local_20);
  }
  return;
}

