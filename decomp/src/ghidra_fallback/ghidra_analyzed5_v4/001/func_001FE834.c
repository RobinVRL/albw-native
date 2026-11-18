#include "ghidra_types.h"

extern int func_002C2D00(int *param_1);
extern int func_00533400(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_001fe914;
extern int DAT_001fe918;
extern char s_skl_root_001fe91c[];

// USA 001FE834 <- EU 001FE834 (Ghidra, non-matching)
// GLOBAL DAT_001fe914 undefined4
// GLOBAL DAT_001fe918 int
// GLOBAL s_skl_root_001fe91c string

undefined4 func_001FE834(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x40))
  #define local_1f (*(undefined1 *)(albw_frame + 0x41))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(char * *)(albw_frame + 0x4c))
  local_48 = func_00533400(param_1[1],param_2);
  iVar1 = DAT_001fe918;
  local_58 = DAT_001fe918;
  uStack_54 = DAT_001fe914;
  iStack_50 = DAT_001fe918;
  local_4c = DAT_001fe914;
  local_20 = 1;
  local_3c = 0;
  local_44 = 0;
  local_3b = 0;
  local_24 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_1f = 0xc4;
  local_40 = 1;
  piVar2 = func_002C2D00(&local_58);
  param_1[2] = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x28) = param_1[2];
    }
    local_14 = s_skl_root_001fe91c;
    local_18 = iVar1;
    uVar4 = func_00564A78(param_1[2],&local_18);
    if (uVar4 != 0xffff) {
      param_1[9] = uVar4;
    }
    if (param_1[2] != 0) {
      return 1;
    }
  }
  return 0;
}

