#include "ghidra_types.h"

extern int func_001B9374(int param_1,uint param_2,int param_3);
extern int func_00224D78(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_00387FEC(int param_1,int param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int *DAT_0022488c;
extern undefined4 DAT_00224890;
extern int DAT_00224894;
extern int DAT_00224898;

// USA 002247BC <- EU 002247BC (Ghidra, non-matching)
// GLOBAL DAT_0022488c int *
// GLOBAL DAT_00224890 undefined4
// GLOBAL DAT_00224894 int
// GLOBAL DAT_00224898 int

undefined4 func_002247BC(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined1 *)(albw_frame + 0x24))
  #define local_2b (*(undefined1 *)(albw_frame + 0x25))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  #define local_f (*(undefined1 *)(albw_frame + 0x41))
  iVar1 = func_0054D89C(param_1,0);
  *(int *)(param_1 + 0x698) = iVar1;
  local_38 = func_001B9374(*DAT_0022488c,6,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1cc));
  local_48 = DAT_00224894;
  uStack_44 = DAT_00224890;
  iStack_40 = DAT_00224894;
  local_3c = DAT_00224890;
  local_10 = 1;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_14 = 0;
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_2b = 1;
  local_f = 0xc4;
  local_2c = 1;
  piVar2 = func_002C2D00(&local_48);
  iVar1 = DAT_00224898;
  *(int **)(param_1 + 0x69c) = piVar2;
  piVar2[0x4d] = iVar1;
  *(int *)(*(int *)(param_1 + 0x69c) + 0x138) = iVar1;
  func_00387FEC(*(int *)(*(int *)(param_1 + 0x698) + 0x1c),*(int *)(param_1 + 0x69c));
  return func_00224D78(param_1);
}

