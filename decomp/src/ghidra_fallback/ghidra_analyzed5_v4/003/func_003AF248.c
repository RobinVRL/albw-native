#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_003AF488(int param_1);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00669354(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_003af324;
extern int *DAT_003af328;
extern undefined4 DAT_003af32c;
extern int DAT_003af330;
extern undefined4 DAT_003af334;

// USA 003AF248 <- EU 003AF224 (Ghidra, non-matching)
// GLOBAL DAT_003af324 undefined4 *
// GLOBAL DAT_003af328 int *
// GLOBAL DAT_003af32c undefined4
// GLOBAL DAT_003af330 int
// GLOBAL DAT_003af334 undefined4

undefined4 func_003AF248(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
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
  puVar1 = DAT_003af324;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_003af324,*(int *)(param_1 + 8));
  }
  local_48 = func_005532B4(*(undefined4 *)(*DAT_003af328 + 0x10),1,(uint)*(byte *)(param_1 + 0xc),0)
  ;
  local_58 = DAT_003af330;
  uStack_54 = DAT_003af32c;
  iStack_50 = DAT_003af330;
  local_4c = DAT_003af32c;
  uStack_44 = 0;
  local_20 = 1;
  local_3b = 0;
  local_34 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = 0;
  local_1f = 0xc4;
  local_38 = 0;
  local_30 = 0;
  local_3c = 1;
  local_40 = 1;
  piVar2 = func_002C2D00(&local_58);
  *(int **)(param_1 + 0x34) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003af334;
  func_003AF488(param_1);
  func_00669354((undefined4 *)(param_1 + 0x10),0);
  if (iVar3 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar3);
}

