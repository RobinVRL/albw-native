#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern uint DAT_001a9230;

// USA 001A91A8 <- EU 001A91A8 (Ghidra, non-matching)
// GLOBAL DAT_001a9230 uint

void func_001A91A8(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0x3d0));
  local_24 = local_18;
  uStack_20 = uStack_14;
  uStack_1c = uStack_10;
  iVar3 = func_0068C690(&local_24);
  uVar1 = DAT_001a9230;
  local_28 = iVar3 - *(int *)(param_1 + 1000);
  uVar4 = func_0058E2B8((int *)&local_28);
  if (uVar4 < uVar1) {
    uVar4 = -uVar1;
    if (((int)uVar4 <= (int)local_28) && (uVar4 = local_28, (int)uVar1 < (int)local_28)) {
      uVar4 = uVar1;
    }
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x944) = uVar4;
  return;
}

