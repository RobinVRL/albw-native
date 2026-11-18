#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int func_00569310(float *param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int DAT_00444520;
extern int DAT_00444524;
extern int *DAT_00444528;
extern int DAT_0044452c;
extern float DAT_00444530;
extern undefined DAT_00444534;
extern char s_AP_ArrowR_00_00444536[];
extern char s_P_ArrowLS_00_00444560[];
extern char s_P_ArrowL_00_00444554[];
extern char s_P_ArrowRS_00_00444544[];
extern undefined4 _DAT_00444534;

// USA 004441E8 <- EU 004441C8 (Ghidra, non-matching)
// GLOBAL DAT_00444520 int
// GLOBAL DAT_00444524 int
// GLOBAL DAT_00444528 int *
// GLOBAL DAT_0044452c int
// GLOBAL DAT_00444530 float
// GLOBAL DAT_00444534 undefined
// GLOBAL s_AP_ArrowR_00_00444536 string
// GLOBAL s_P_ArrowLS_00_00444560 string
// GLOBAL s_P_ArrowL_00_00444554 string
// GLOBAL s_P_ArrowRS_00_00444544 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_004441E8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(int *)(albw_frame + 0x0))
  #define local_ec (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_e4 ((undefined2 *)(albw_frame + 0xc))
  #define local_66 (*(undefined2 *)(albw_frame + 0x8a))
  #define local_58 (*(int *)(albw_frame + 0x98))
  #define local_54 (*(char * *)(albw_frame + 0x9c))
  #define local_50 ((float *)(albw_frame + 0xa0))
  #define local_48 (*(float *)(albw_frame + 0xa8))
  #define local_40 (*(int *)(albw_frame + 0xb0))
  #define local_3c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_38 ((int *)(albw_frame + 0xb8))
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (1 < *(byte *)(param_1 + 0x94)) {
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(param_1 + 0x90);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    *(undefined1 *)(param_1 + 0x94) = 0xff;
    return;
  }
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x1c);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
  }
  iVar1 = DAT_00444520;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[3] = 0xffffffff;
  local_38[2] = 0;
  local_54 = *(char **)(DAT_00444524 + *(char *)(param_1 + 0x94) * 4);
  local_58 = DAT_00444520;
  local_3c = *(undefined4 *)(DAT_00444524 + -4);
  local_40 = DAT_00444520;
  func_005826A4(*DAT_00444528,local_38,&local_40,&local_58);
  local_ec = local_e4;
  uStack_e8 = 0x40;
  local_66 = 0;
  local_f0 = DAT_0044452c;
  local_e4[0] = 0;
  func_00583794(local_38,&local_f0);
  piVar4 = *(int **)(param_1 + 0x8c);
  (**(code **)(local_f0 + 8))(&local_f0);
  uVar2 = 0;
  do {
    if (local_ec[uVar2] == 0) {
      if ((int)uVar2 < 0x40001) goto LAB_0044431c;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_0044431c:
  (**(code **)(local_f0 + 8))(&local_f0);
  (**(code **)(*piVar4 + 0x60))(piVar4,local_ec,0,uVar2 & 0xffff);
  piVar4 = *(int **)(param_1 + 0x90);
  (**(code **)(local_f0 + 8))(&local_f0);
  uVar2 = 0;
  do {
    if (local_ec[uVar2] == 0) {
      if ((int)uVar2 < 0x40001) goto LAB_00444394;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_00444394:
  (**(code **)(local_f0 + 8))(&local_f0);
  (**(code **)(*piVar4 + 0x60))(piVar4,local_ec,0,uVar2 & 0xffff);
  func_00569310(local_50,*(int *)(param_1 + 0x8c));
  local_54 = s_AP_ArrowR_00_00444536 + 2;
  local_58 = iVar1;
  fVar5 = ALBW_AS_F32(_DAT_00444534) + (local_48 - local_50[0]) * DAT_00444530;
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_58);
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x1c) = fVar5;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  local_54 = s_P_ArrowRS_00_00444544;
  local_58 = iVar1;
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_58);
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x1c) = fVar5;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  local_54 = s_P_ArrowL_00_00444554;
  local_58 = iVar1;
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_58);
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x1c) = -fVar5;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  local_54 = s_P_ArrowLS_00_00444560;
  local_58 = iVar1;
  iVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_58);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x1c) = -fVar5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}

