#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051DAA4(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00125978;
extern float DAT_0012597c;

// USA 001258F0 <- EU 001258F0 (Ghidra, non-matching)
// GLOBAL DAT_00125978 int *
// GLOBAL DAT_0012597c float

void func_001258F0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_0051DAA4(param_1);
  piVar1 = DAT_00125978;
  if (pfVar2 == (float *)0x0) {
    uVar3 = func_00111A64((uint *)(*DAT_00125978 + 0x660));
  }
  else {
    func_00115C70(&local_1c,pfVar2,(float *)(param_1 + 0x3d0));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    uVar3 = func_0068C690(&local_28);
  }
  *(uint *)(param_1 + 0x8e4) = uVar3;
  func_0014FAFC(param_1,uVar3,DAT_0012597c);
  uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
  *(int *)(param_1 + 0x8ec) = (int)((ulonglong)uVar3 * 0x3c >> 0x20) + 0x78;
  return;
}

