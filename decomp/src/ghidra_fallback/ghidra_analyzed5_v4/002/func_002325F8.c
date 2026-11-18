#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 002325F8 <- EU 002325F8 (Ghidra, non-matching)

void func_002325F8(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar1 = *param_1;
  iVar3 = 0;
  param_1[4] = 0;
  if (iVar1 != 0) {
    iVar3 = param_1[1];
  }
  if (iVar1 != 0 && iVar3 != 0) {
    local_18 = *(float *)(iVar1 + 0x54);
    uVar4 = 0;
    local_14 = *(undefined4 *)(iVar1 + 100);
    local_10 = *(undefined4 *)(iVar1 + 0x74);
    if (0 < param_1[1]) {
      do {
        iVar3 = param_1[4];
        if (iVar3 < param_1[5]) {
          pfVar2 = (float *)(param_1[6] + iVar3 * 0xc);
          param_1[4] = iVar3 + 1;
        }
        else {
          pfVar2 = (float *)0x0;
        }
        if (uVar4 < (uint)param_1[1]) {
          iVar3 = *(int *)(param_1[3] + uVar4 * 4);
        }
        else {
          iVar3 = 0;
        }
        *pfVar2 = *(float *)(iVar3 + 0x54);
        pfVar2[1] = *(float *)(iVar3 + 100);
        pfVar2[2] = *(float *)(iVar3 + 0x74);
        func_00115C70(pfVar2,pfVar2,&local_18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < param_1[1]);
    }
  }
  return;
}

