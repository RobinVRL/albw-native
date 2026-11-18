#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_006623B0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002aa5bc;
extern int *DAT_002aa5c0;
extern float DAT_002aa5c4;
extern float DAT_002aa5c8;

// USA 002AA4C8 <- EU 002AA4A4 (Ghidra, non-matching)
// GLOBAL DAT_002aa5bc float
// GLOBAL DAT_002aa5c0 int *
// GLOBAL DAT_002aa5c4 float
// GLOBAL DAT_002aa5c8 float

/* WARNING: Removing unreachable block (ram,0x002aa56c) */
/* WARNING: Removing unreachable block (ram,0x002aa570) */
/* WARNING: Removing unreachable block (ram,0x002aa580) */

void func_002AA4C8(int param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_00520FC0();
  fVar4 = pfVar2[1] - *(float *)(param_1 + 0x3d4);
  if (fVar4 <= DAT_002aa5bc) {
    fVar4 = -fVar4;
  }
  if ((int)ALBW_AS_U32(fVar4) < 0x3f000000) {
    func_00115C70(&local_1c,pfVar2,(float *)(param_1 + 0x3d0));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    iVar3 = func_0068C690(&local_28);
    piVar1 = DAT_002aa5c0;
    *(int *)(param_1 + 0x8f0) = iVar3;
    func_0051D27C((int *)(param_1 + 0x8f4),iVar3,*piVar1);
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8f4),DAT_002aa5c4);
  }
  fVar4 = *(float *)(param_1 + 0x3d4) + DAT_002aa5c8;
  if ((*(float *)(param_1 + 0xc) <= fVar4) || (fVar4 < *(float *)(param_1 + 0x3d4))) {
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc);
  }
  else {
    *(float *)(param_1 + 0x3d4) = fVar4;
  }
  if (*(int *)(param_1 + 0x8f8) < *(int *)(param_1 + 0x8bc)) {
    func_006623B0((undefined4 *)(param_1 + 0x8bc),0);
  }
  return;
}

