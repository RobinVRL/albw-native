#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int DAT_002a4a80;
extern int *DAT_002a4a84;

// USA 002A49F8 <- EU 002A49D4 (Ghidra, non-matching)
// GLOBAL DAT_002a4a80 int
// GLOBAL DAT_002a4a84 int *

undefined4 func_002A49F8(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_14 (*(int *)(albw_frame + 0xc))
  if ((param_3 != 0) ||
     (pfVar1 = (float *)func_00520FC0(), fVar4 = *pfVar1 - *(float *)(param_1 + 0x3d0),
     fVar5 = pfVar1[2] - *(float *)(param_1 + 0x3d8),
     (int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) <= DAT_002a4a80)) {
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(afStack_20,pfVar1,(float *)(param_1 + 0x3d0));
    iVar3 = *(int *)(param_1 + 1000);
    local_14 = func_0068C690(afStack_20);
    local_14 = iVar3 - local_14;
    uVar2 = func_0058E2B8(&local_14);
    if (uVar2 <= (uint)(*DAT_002a4a84 + param_2)) {
      return 1;
    }
  }
  return 0;
}

