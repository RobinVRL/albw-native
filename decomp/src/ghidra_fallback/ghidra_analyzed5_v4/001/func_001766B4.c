#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00325DE0(int *param_1,float *param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_0017675c;

// USA 001766B4 <- EU 001766B4 (Ghidra, non-matching)
// GLOBAL DAT_0017675c int *

undefined4 func_001766B4(int *param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  if (((char)param_1[0x13d] == '\0') &&
     (**(int **)(*DAT_0017675c + 0x24) + 0x20000000U >> 0x1e == 2)) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    func_00115C70(&local_24,param_2,pfVar1);
    local_18 = local_24;
    uStack_14 = uStack_20;
    uStack_10 = uStack_1c;
    iVar2 = func_0068C690(&local_18);
    if ((iVar2 + 0x20000000U >> 0x1e == 2) && (iVar2 = func_00325DE0(param_1,param_2), iVar2 != 0))
    {
      return 1;
    }
  }
  return 0;
}

