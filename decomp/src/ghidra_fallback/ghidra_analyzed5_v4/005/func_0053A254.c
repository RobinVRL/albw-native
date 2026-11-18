#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int DAT_0053a2b0;

// USA 0053A254 <- EU 0053A22C (Ghidra, non-matching)
// GLOBAL DAT_0053a2b0 int

undefined4 func_0053A254(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_c (*(float *)(albw_frame + 0x14))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_14,pfVar1,(float *)(param_1 + 0x3d0));
  local_20 = local_14;
  uStack_1c = uStack_10;
  local_18 = fStack_c;
  iVar2 = func_0068C690(&local_20);
  if ((int)ALBW_AS_U32((local_20 * local_20 + local_18 * local_18)) < DAT_0053a2b0) {
    local_14 = ALBW_AS_F32((iVar2 - *(int *)(param_1 + 1000)));
    uVar3 = func_0058E2B8((int *)&local_14);
    if (uVar3 < 0x40000000) {
      return 1;
    }
  }
  return 0;
}

