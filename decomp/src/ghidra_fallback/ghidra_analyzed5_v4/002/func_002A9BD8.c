#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_002a9c7c;
extern int *DAT_002a9c80;
extern float DAT_002a9c84;

// USA 002A9BD8 <- EU 002A9BB4 (Ghidra, non-matching)
// GLOBAL DAT_002a9c7c float
// GLOBAL DAT_002a9c80 int *
// GLOBAL DAT_002a9c84 float

void func_002A9BD8(int param_1)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_00520FC0();
  piVar1 = DAT_002a9c80;
  fVar4 = pfVar2[1] - *(float *)(param_1 + 0x3d4);
  if (fVar4 <= DAT_002a9c7c) {
    fVar4 = -fVar4;
  }
  if ((int)ALBW_AS_U32(fVar4) < 0x3f000000) {
    func_00115C70(&local_1c,pfVar2,(float *)(param_1 + 0x3d0));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    uVar3 = func_0068C690(&local_28);
  }
  else {
    uVar3 = func_00111A64((uint *)(*DAT_002a9c80 + 0x660));
  }
  *(uint *)(param_1 + 0x8f0) = uVar3;
  fVar4 = DAT_002a9c84;
  *(uint *)(param_1 + 0x8f4) = *(uint *)(param_1 + 0x8f0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x8f0),fVar4);
  uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
  *(int *)(param_1 + 0x8f8) = (int)((ulonglong)uVar3 * 0x3c >> 0x20) + 0x78;
  return;
}

