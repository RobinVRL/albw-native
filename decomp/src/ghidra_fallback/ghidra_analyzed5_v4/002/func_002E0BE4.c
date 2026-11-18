#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0053F1CC(int param_1,int *param_2);
extern int func_00547514(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00663D20(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002e0d70;
extern float DAT_002e0d74;
extern float DAT_002e0d78;
extern int *DAT_002e0d7c;
extern int *DAT_002e0d80;
extern int *DAT_002e0d84;

// USA 002E0BE4 <- EU 002E0BC0 (Ghidra, non-matching)
// GLOBAL DAT_002e0d70 int *
// GLOBAL DAT_002e0d74 float
// GLOBAL DAT_002e0d78 float
// GLOBAL DAT_002e0d7c int *
// GLOBAL DAT_002e0d80 int *
// GLOBAL DAT_002e0d84 int *

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 func_002E0BE4(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_34 ((int *)(albw_frame + 0x1c))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  if ((char)param_1[0x111] != '\0') {
    return 0;
  }
  objStack_48[0] = 0;
  objStack_48[1] = 0;
  iVar2 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x100,0,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar4 = *DAT_002e0d70;
  local_34[0] = 0;
  iVar2 = func_0053F1CC(iVar4,local_34);
  if (iVar2 == 0) {
    return 0;
  }
  func_004D80A4((float *)objStack_48,**(uint **)(iVar4 + 0x24),DAT_002e0d74);
  objStack_48[1] = (uint)ALBW_AS_U32(DAT_002e0d78);
  fVar5 = DAT_002e0d78;
  func_00115C70(&local_2c,(float *)(param_1 + 0xf4),*(float **)(iVar4 + 0x1c));
  if (ALBW_AS_F32(objStack_48[0]) * local_2c + ALBW_AS_F32(objStack_48[1]) * local_28 + local_40 * local_24 <=
      fVar5) {
    return 0;
  }
  iVar2 = *DAT_002e0d7c;
  iVar4 = func_00588BE4((int)param_1);
  piVar1 = DAT_002e0d80;
  if ((iVar4 == *DAT_002e0d80) || (iVar4 = func_00588BE4((int)param_1), iVar4 == *DAT_002e0d84)) {
    iVar4 = 1;
LAB_002e0cf4:
    iVar2 = 0;
    if (iVar4 < 1) goto LAB_002e0d1c;
  }
  else {
    iVar4 = (int)*(short *)((int)param_1 + 0x2e);
    if (0 < iVar4) {
      if (100 < iVar4) {
        uVar3 = func_00111A64((uint *)(iVar2 + 0x660));
        iVar4 = (int)((ulonglong)(iVar4 - 100) * (ulonglong)uVar3 >> 0x20) + 1;
      }
      goto LAB_002e0cf4;
    }
    iVar4 = 1;
    iVar2 = 0;
  }
  do {
    (**(code **)(*param_1 + 0x4c))(param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar4);
LAB_002e0d1c:
  iVar2 = func_00588BE4((int)param_1);
  if (iVar2 != *piVar1) {
    if (*(short *)((int)param_1 + 0x36) != 0) {
      func_00588C14((int)param_1,0,1);
    }
    func_00547514((int)(param_1 + 1));
  }
  return func_00663D20(param_1 + 0x103,1);
}

