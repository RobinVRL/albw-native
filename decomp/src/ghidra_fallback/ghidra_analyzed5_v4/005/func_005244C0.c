#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0054E228(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00524530;

// USA 005244C0 <- EU 00524498 (Ghidra, non-matching)
// GLOBAL DAT_00524530 int *

undefined4 func_005244C0(int *param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  if (**(int **)(*DAT_00524530 + 0x24) + 0x20000000U >> 0x1e == 2) {
    pfVar4 = *(float **)(*DAT_00524530 + 0x1c);
    pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    func_00115C70(&local_2c,pfVar4,pfVar1);
    local_20 = local_2c;
    uStack_1c = uStack_28;
    uStack_18 = uStack_24;
    iVar2 = func_0068C690(&local_20);
    if (iVar2 + 0x20000000U >> 0x1e == 0) {
      uVar3 = func_0054E228(param_1);
      return uVar3;
    }
  }
  return 0;
}

