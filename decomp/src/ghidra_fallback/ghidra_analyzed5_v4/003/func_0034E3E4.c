#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int *DAT_0034e438;

// USA 0034E3E4 <- EU 0034E3C0 (Ghidra, non-matching)
// GLOBAL DAT_0034e438 int *

int func_0034E3E4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 ((float *)(albw_frame + 0xc))
  #define local_c (*(float *)(albw_frame + 0x14))
  iVar1 = *(int *)(param_1 + 0x264);
  *(int *)(param_1 + 0x264) = param_2;
  iVar2 = 0;
  if ((bool)(param_2 != 0 & ~(iVar1 != 0))) {
    iVar2 = *(int *)(*DAT_0034e438 + 0x18);
    local_18 = *(undefined4 *)(iVar2 + 0x1c4);
    local_20 = *(float *)(iVar2 + 0x1bc);
    uStack_1c = *(undefined4 *)(iVar2 + 0x1c0);
    func_00115C70(local_14,&local_20,(float *)(*(int *)(param_1 + 0x264) + 0x3d0));
    iVar2 = func_004904CC(local_14[0],local_c);
    *(int *)(param_1 + 600) = iVar2;
  }
  return iVar2;
}

