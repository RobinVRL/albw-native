#include "ghidra_types.h"

extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003A5CC4(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0054C998(int param_1,int param_2);
extern int DAT_00366868;
extern int *DAT_0036686c;
extern int DAT_00366870;
extern uint DAT_003668a8;
extern char s_SE_PL_TornadeRod_BLOWUP_00366874[];
extern char s_SE_PL_TornadeRod_BLOWUP_Lv2_0036688c[];

// USA 00366694 <- EU 00366670 (Ghidra, non-matching)
// GLOBAL DAT_00366868 int
// GLOBAL DAT_0036686c int *
// GLOBAL DAT_00366870 int
// GLOBAL DAT_003668a8 uint
// GLOBAL s_SE_PL_TornadeRod_BLOWUP_00366874 string
// GLOBAL s_SE_PL_TornadeRod_BLOWUP_Lv2_0036688c string

undefined4 func_00366694(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_20 = DAT_00366868;
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x154) = puVar1[1];
  piVar5 = (int *)(*(short *)(param_2 + 2) + -0x3a);
  switch((int)(uintptr_t)(piVar5)) {
  case 0x0:
    *(undefined1 *)(param_1 + 0x13c) = 0;
    iVar3 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    *(int *)(param_1 + 0x58) = iVar3;
  default:
    return 0;
  case 0x1:
    break;
  case 0x3:
    *(undefined1 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x150) = 0;
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_2 + 8);
    local_1c = (char *)local_20;
    local_18 = local_20;
    func_001DC3C4(*(int *)(param_1 + 0x28),&local_20,0);
    return func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar4,piVar5);
  case 0x4:
    *(undefined1 *)(param_1 + 0x13e) = 0;
    *(bool *)(param_1 + 0x13f) = DAT_003668a8 < *(uint *)(*(int *)(param_1 + 0x34) + 4);
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x618);
    uVar2 = *(uint *)(iVar3 + 0x30);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    *(uint *)(iVar3 + 0x30) = uVar2;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined4 *)(param_1 + 0x130) = *puVar1;
  *(undefined4 *)(param_1 + 0x134) = puVar1[1];
  *(undefined4 *)(param_1 + 0x138) = puVar1[2];
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x140) = *puVar1;
  *(undefined4 *)(param_1 + 0x144) = puVar1[1];
  *(undefined4 *)(param_1 + 0x148) = puVar1[2];
  **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
  func_003A5CC4(*(int *)(param_1 + 0x158));
  piVar5 = DAT_0036686c;
  **(int **)(param_1 + 0x34) = local_20;
  *(int *)(*(int *)(param_1 + 0x34) + 8) = local_20;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(iVar3 + 0x178) = *(undefined4 *)(param_1 + 0x148);
  local_20 = DAT_00366870;
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x45c) == 3) {
    local_1c = s_SE_PL_TornadeRod_BLOWUP_Lv2_0036688c;
    return func_004EA104(*piVar5,&local_20,0);
  }
  local_1c = s_SE_PL_TornadeRod_BLOWUP_00366874;
  return func_004EA104(*piVar5,&local_20,0);
}

