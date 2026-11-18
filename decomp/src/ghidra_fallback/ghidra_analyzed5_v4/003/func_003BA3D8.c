#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int DAT_003ba4a4;
extern int *DAT_003ba4a8;
extern undefined4 DAT_003ba4d0;
extern char s_SE_CrossOldMan_V_Sword_SWING_360_003ba4ac[];
extern char s_SE_PL_Sword_SWING_360_Lv2_003ba488[];

// USA 003BA3D8 <- EU 003BA3B4 (Ghidra, non-matching)
// GLOBAL DAT_003ba4a4 int
// GLOBAL DAT_003ba4a8 int *
// GLOBAL DAT_003ba4d0 undefined4
// GLOBAL s_SE_CrossOldMan_V_Sword_SWING_360_003ba4ac string
// GLOBAL s_SE_PL_Sword_SWING_360_Lv2_003ba488 string

void func_003BA3D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x20,0,0);
  iVar2 = DAT_003ba4a4;
  local_1c = s_SE_PL_Sword_SWING_360_Lv2_003ba488;
  local_20 = DAT_003ba4a4;
  func_004EABB8(*DAT_003ba4a8,&local_20,(undefined4 *)0x0);
  if (**(char **)(*(int *)(param_1 + 0x48) + 0x8bc) != '\0') {
    local_14 = s_SE_CrossOldMan_V_Sword_SWING_360_003ba4ac;
    local_18 = iVar2;
    func_00150A84(*(int **)(param_1 + 0x48),&local_18,0);
  }
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,3);
  uVar1 = DAT_003ba4d0;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003ba4d0;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}

