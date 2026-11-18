#include "ghidra_types.h"

extern int func_0011593C(undefined4 *param_1);
extern int func_00115B68(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014D7F4(float *param_1,float *param_2,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001696F8(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern float DAT_0023a780;
extern float DAT_0023a784;
extern float DAT_0023a788;
extern undefined4 DAT_0023a78c;
extern undefined4 DAT_0023a790;

// USA 0023A5E0 <- EU 0023A5E0 (Ghidra, non-matching)
// GLOBAL DAT_0023a780 float
// GLOBAL DAT_0023a784 float
// GLOBAL DAT_0023a788 float
// GLOBAL DAT_0023a78c undefined4
// GLOBAL DAT_0023a790 undefined4

undefined4 func_0023A5E0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define fStack_78 (*(float *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  fVar5 = DAT_0023a780;
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0023a780) {
      if (DAT_0023a780 < *(float *)(iVar1 + 8)) goto LAB_0023a688;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_0023a688;
    puVar2 = (uint *)func_002C11E8((int *)&local_7c,0,10,0);
    func_001696F8(*(int *)(param_1 + 0x410),puVar2);
  }
LAB_0023a688:
  func_0014D7F4((float *)(param_1 + 0x44c),(float *)(param_1 + 0x434),DAT_0023a788,DAT_0023a784);
  local_84 = DAT_0023a78c;
  iVar1 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  local_88 = fVar5;
  local_80 = fVar5;
  iVar3 = func_00115B68(&fStack_78,&local_88,(float *)(param_1 + 0x44c));
  if (iVar3 == 0) {
    func_0011593C((float *)(iVar1 + 0x80));
  }
  else {
    func_00491B3C((float *)(iVar1 + 0x80),&fStack_78);
  }
  iVar1 = *(int *)(param_1 + 0x40c);
  local_84 = DAT_0023a790;
  local_88 = fVar5;
  local_80 = fVar5;
  func_00115C54(&local_7c,(float *)(param_1 + 0x3d0),&local_88);
  *(float *)(iVar1 + 0x8c) = local_7c;
  *(float *)(iVar1 + 0x9c) = fStack_78;
  *(undefined4 *)(iVar1 + 0xac) = uStack_74;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  iVar1 = *(int *)(param_1 + 0x40c);
  uVar4 = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(iVar1 + 0x74) = uVar4;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar4;
  *(undefined4 *)(iVar1 + 0x7c) = uVar4;
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}

