#include "ghidra_types.h"

extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0031E9A8(int param_1);
extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004EBA98(int param_1);
extern int func_00537B48(int param_1);
extern int func_0054C998(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_0031e7d0;
extern int *DAT_0031e7d4;
extern int DAT_0031e7d8;
extern uint *DAT_0031e7dc;
extern undefined4 DAT_0031e7e0;
extern undefined4 DAT_0031e84c;
extern int *DAT_0031e850;
extern undefined4 DAT_0031e854;
extern char s_RollCut_0031e810[];
extern char s_SE_PL_Sword_SWING_360_0031e7e4[];
extern char s_SE_PL_Sword_SWING_360_Lv2_0031e818[];
extern char s_SE_PV_SW_SWING_360_0031e7fc[];
extern char s_SE_PV_SW_SWING_360_Lv2_0031e834[];

// USA 0031E54C <- EU 0031E528 (Ghidra, non-matching)
// GLOBAL DAT_0031e7d0 float
// GLOBAL DAT_0031e7d4 int *
// GLOBAL DAT_0031e7d8 int
// GLOBAL DAT_0031e7dc uint *
// GLOBAL DAT_0031e7e0 undefined4
// GLOBAL DAT_0031e84c undefined4
// GLOBAL DAT_0031e850 int *
// GLOBAL DAT_0031e854 undefined4
// GLOBAL s_RollCut_0031e810 string
// GLOBAL s_SE_PL_Sword_SWING_360_0031e7e4 string
// GLOBAL s_SE_PL_Sword_SWING_360_Lv2_0031e818 string
// GLOBAL s_SE_PV_SW_SWING_360_0031e7fc string
// GLOBAL s_SE_PV_SW_SWING_360_Lv2_0031e834 string

void func_0031E54C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_r3;
  uint uVar6;
  bool bVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  fparam_0 = DAT_0031e7d0;
  *(undefined1 *)(param_1 + 0x74) = 0xff;
  *(float *)(param_1 + 0x148) = fparam_0;
  *(float *)(param_1 + 0x14c) = fparam_0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  bVar7 = *(char *)(param_2 + 4) != *(char *)(param_2 + 5);
  if (bVar7) {
    iVar4 = *(int *)(param_2 + 8);
  }
  else {
    iVar4 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
  }
  *(int *)(param_1 + 0x58) = iVar4;
  iVar4 = **(int **)(param_1 + 0x3c);
  local_30 = iVar4 - *(int *)(param_1 + 0x58);
  func_0058E2B8(&local_30);
  if (bVar7) {
    **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
  }
  iVar2 = DAT_0031e7d8;
  piVar1 = DAT_0031e7d4;
  uVar6 = 0;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0x2a:
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x156) = 0;
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x5b0) == 0x3f800000) {
      func_004D80A4(*(float **)(param_1 + 0x38),*(uint *)(param_1 + 0x58),fparam_0);
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      iVar4 = *(int *)(param_1 + 0x28);
      uVar5 = func_00537B48(iVar4 + 0x40c);
      func_003521F0(iVar4 + 0x324,uVar5);
      func_00352128(*(int *)(param_1 + 0x28) + 0x324,(int *)(param_1 + 0x18c),DAT_0031e7dc);
      func_0031E9A8(param_1);
    }
    func_004EBA98(*piVar1);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x6cc) = DAT_0031e7e0;
    break;
  case 0x2b:
    uVar6 = 0x10000000;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    break;
  case 0x2c:
  case 0x2d:
    uVar6 = 0x10000000;
    break;
  case 0x2e:
    *(undefined4 *)(param_1 + 0x17c) = 0;
    local_2c = s_SE_PL_Sword_SWING_360_0031e7e4;
    local_30 = iVar2;
    func_004EA104(*piVar1,&local_30,0);
    local_2c = s_SE_PV_SW_SWING_360_0031e7fc;
    local_30 = iVar2;
    func_004EAF8C(*piVar1,&local_30,0);
    func_00352128(*(int *)(param_1 + 0x28) + 0x324,(int *)(param_1 + 0x194),
                  (uint *)s_RollCut_0031e810);
    uVar6 = 0x20000000;
    break;
  case 0x2f:
    *(undefined4 *)(param_1 + 0x17c) = 0;
    local_2c = s_SE_PL_Sword_SWING_360_Lv2_0031e818;
    local_30 = iVar2;
    func_004EA104(*piVar1,&local_30,0);
    local_2c = s_SE_PV_SW_SWING_360_Lv2_0031e834;
    local_30 = iVar2;
    func_004EAF8C(*piVar1,&local_30,0);
    uVar6 = 0x40000000;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_0031e84c;
    *(float *)(param_1 + 0x1c4) = fparam_0;
    break;
  case 0x30:
    func_0028C8EC(*(int *)(param_1 + 0x4c),3,iVar4,in_r3);
  }
  iVar4 = func_00537B48(*(int *)(param_1 + 0x28) + 0x40c);
  *(uint *)(param_1 + 0x11c) = uVar6 | iVar4 << 0x1a;
  iVar4 = func_00537B48(*(int *)(param_1 + 0x28) + 0x40c);
  uVar6 = (iVar4 + 1) * 4;
  if (*(char *)(*DAT_0031e850 + 0x18) == '\a' || *(char *)(*DAT_0031e850 + 0x18) == '%') {
    uVar6 = uVar6 >> 1;
  }
  uVar3 = (ushort)uVar6;
  if (*(short *)(param_2 + 2) == 0x2e) {
    uVar3 = (ushort)DAT_0031e854 & (ushort)(uVar6 << 1);
  }
  else if (*(short *)(param_2 + 2) == 0x2f) {
    uVar3 = (ushort)DAT_0031e854 & (ushort)(uVar6 << 2);
  }
  *(ushort *)(param_1 + 0x114) = uVar3;
  return;
}

