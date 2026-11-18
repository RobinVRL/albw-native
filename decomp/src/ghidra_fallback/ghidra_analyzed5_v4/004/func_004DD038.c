#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004BFF60(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4, undefined1 param_5,undefined4 param_6,undefined4 *param_7,float fparam_0);
extern void func_004BFFC4(int *param_1,uint param_2,undefined1 param_3);
extern int func_00520FC0(void);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_004dd1cc;
extern float DAT_004dd1d0;
extern float DAT_004dd1d4;
extern int DAT_004dd1d8;
extern int DAT_004dd1dc;
extern int *DAT_004dd1e0;

// USA 004DD038 <- EU 004DD010 (Ghidra, non-matching)
// GLOBAL DAT_004dd1cc undefined4
// GLOBAL DAT_004dd1d0 float
// GLOBAL DAT_004dd1d4 float
// GLOBAL DAT_004dd1d8 int
// GLOBAL DAT_004dd1dc int
// GLOBAL DAT_004dd1e0 int *

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 func_004DD038(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(uint *)(albw_frame + 0x1c))
  #define uStack_20 (*(uint *)(albw_frame + 0x20))
  (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
  *(undefined4 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = DAT_004dd1cc;
  pfVar1 = (float *)func_00520FC0();
  func_00115C70((float *)objStack_40,(float *)(param_1 + 0xf4),pfVar1);
  local_34 = ALBW_AS_F32(objStack_40[0]);
  local_30 = objStack_40[1];
  local_2c = DAT_004dd1d0;
  if (ALBW_AS_F32(objStack_40[0]) == DAT_004dd1d0) {
    local_34 = DAT_004dd1d4;
  }
  iVar2 = func_0068C690(&local_34);
  piVar3 = param_1 + 0x271;
  if (local_30 < 0xc0000001) {
    piVar3 = param_1 + 0x271;
    if (0 < iVar2) {
      piVar3 = (int *)((int)param_1 + 0x9c6);
    }
    param_1[0x22e] = DAT_004dd1dc;
    if (iVar2 < 1) {
      piVar3 = piVar3 + 1;
    }
  }
  else {
    param_1[0x22e] = DAT_004dd1d8;
  }
  uVar7 = param_1[0xfa];
  uVar6 = (uint)(short)*piVar3;
  iVar2 = *DAT_004dd1e0;
  if (iVar2 != 0) {
    iVar4 = func_00581B9C(iVar2);
    if ((iVar4 == 1) && (puVar5 = (uint *)func_00582250(iVar2), uVar6 < *puVar5)) {
      iVar2 = *(int *)(puVar5[2] + uVar6 * 4);
    }
    else {
      iVar2 = 0;
    }
    param_1[0x263] = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)((int)param_1 + 0x9c1) = 0;
      *(undefined1 *)((int)param_1 + 0x7e6) = 0;
      iVar2 = param_1[0x1f0];
      piVar3 = *(int **)(iVar2 + 0x28);
      if (piVar3 != (int *)0x0) {
        iVar2 = *(int *)(iVar2 + 0x20);
      }
      if ((piVar3 != (int *)0x0 && iVar2 != 0) && (*piVar3 != 0)) {
        func_00115C70(&local_28,(float *)(*piVar3 + 0x18),(float *)(param_1 + 0xf4));
        objStack_40[0] = (uint)ALBW_AS_U32(local_28);
        objStack_40[1] = uStack_24;
        objStack_40[2] = uStack_20;
        uVar7 = func_0068C690((float *)objStack_40);
      }
    }
  }
  func_004BFFC4(param_1,uVar6 & 0xff,0);
  if ((uint)*(byte *)((int)param_1 + 0x852) == (int)(char)param_1[0x217]) {
    fparam_0 = ALBW_AS_F32(param_1[0x22e]);
  }
  else {
    fparam_0 = ALBW_AS_F32(param_1[0x22d]);
  }
  objStack_40[2] = (uint)(param_1 + 0xf4);
  objStack_40[0] = 0;
  objStack_40[1] = uVar7;
  return func_004BFF60((int)param_1,0,0,0,0,uVar7,(undefined4 *)objStack_40[2],fparam_0);
}

