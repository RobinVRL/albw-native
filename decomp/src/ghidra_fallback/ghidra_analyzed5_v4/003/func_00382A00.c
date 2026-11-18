#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_00382C20(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00667A04(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_00382b4c;
extern int *DAT_00382b50;
extern undefined4 DAT_00382b54;
extern int DAT_00382b58;
extern undefined4 DAT_00382b5c;

// USA 00382A00 <- EU 003829DC (Ghidra, non-matching)
// GLOBAL DAT_00382b4c undefined4 *
// GLOBAL DAT_00382b50 int *
// GLOBAL DAT_00382b54 undefined4
// GLOBAL DAT_00382b58 int
// GLOBAL DAT_00382b5c undefined4

undefined4 func_00382A00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define iStack_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 *)(albw_frame + 0x24))
  #define local_4b (*(undefined1 *)(albw_frame + 0x25))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x40))
  #define local_2f (*(undefined1 *)(albw_frame + 0x41))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  puVar1 = DAT_00382b4c;
  if (*(int *)(param_1 + 8) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_00382b4c,*(int *)(param_1 + 8));
  }
  local_2c = *(undefined4 *)(*DAT_00382b50 + 0x10);
  local_58 = func_005532B4(local_2c,2,(uint)*(byte *)(param_1 + 0xc),0);
  iVar3 = DAT_00382b58;
  uVar2 = DAT_00382b54;
  iStack_68 = DAT_00382b58;
  uStack_64 = DAT_00382b54;
  uStack_54 = 0;
  iStack_60 = DAT_00382b58;
  uStack_5c = DAT_00382b54;
  local_30 = 1;
  local_4b = 0;
  local_38 = 0;
  local_34 = 0;
  local_44 = 0;
  local_3c = 0;
  local_48 = 0;
  local_40 = 0;
  local_2f = 0xc4;
  local_4c = 1;
  local_50 = 1;
  piVar4 = func_002C2D00(&iStack_68);
  *(int **)(param_1 + 0x34) = piVar4;
  func_003AB9D8(param_1,(int)piVar4,1);
  local_58 = func_005532B4(local_2c,0,(uint)*(byte *)(param_1 + 0xc),0);
  iStack_68 = iVar3;
  uStack_64 = uVar2;
  uStack_54 = 0;
  iStack_60 = iVar3;
  uStack_5c = uVar2;
  local_30 = 1;
  local_4b = 0;
  local_38 = 0;
  local_34 = 0;
  local_44 = 0;
  local_3c = 0;
  local_48 = 0;
  local_40 = 0;
  local_2f = 0xc4;
  local_4c = 1;
  local_50 = 1;
  piVar4 = func_002C2D00(&iStack_68);
  *(int **)(param_1 + 0x38) = piVar4;
  func_003AB9D8(param_1,(int)piVar4,1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_00382b5c;
  func_00382C20(param_1);
  func_00667A04((undefined4 *)(param_1 + 0x10),0);
  if (iVar5 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar5);
}

