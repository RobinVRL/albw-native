#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_0020061c;
extern int *DAT_00200620;
extern int DAT_00200624;
extern float DAT_00200628;

// USA 0020055C <- EU 0020055C (Ghidra, non-matching)
// GLOBAL DAT_0020061c int *
// GLOBAL DAT_00200620 int *
// GLOBAL DAT_00200624 int
// GLOBAL DAT_00200628 float

void func_0020055C(int param_1)

{
  int iVar1;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  iVar1 = func_00588BE4(param_1);
  if ((iVar1 == *DAT_0020061c) && (*(char *)(param_1 + 0x93c) == '\0')) {
    if (*DAT_00200620 != 0) {
      func_00115C70(&local_1c,*(float **)(*DAT_00200620 + 0x1c),(float *)(param_1 + 0x3d0));
      local_28 = local_1c;
      uStack_24 = uStack_18;
      uStack_20 = uStack_14;
      iVar1 = func_0068C690(&local_28);
      *(int *)(param_1 + 0x8d4) = iVar1;
    }
    func_0051D27C((int *)(param_1 + 0x8d8),*(int *)(param_1 + 0x8d4),DAT_00200624);
    in_s0 = DAT_00200628;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8d8),DAT_00200628);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8d8);
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065D120((undefined4 *)(param_1 + 0x8dc),4,in_s0);
  }
  return;
}

