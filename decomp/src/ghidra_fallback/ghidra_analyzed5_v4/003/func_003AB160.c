#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_003AB344(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_00553288(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00668F88(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_003ab258;
extern int *DAT_003ab25c;
extern undefined4 DAT_003ab268;
extern int DAT_003ab26c;
extern undefined DAT_003ab270;
extern undefined4 DAT_003ab278;
extern char s_Shooter_003ab260[];

// USA 003AB160 <- EU 003AB13C (Ghidra, non-matching)
// GLOBAL DAT_003ab258 undefined4 *
// GLOBAL DAT_003ab25c int *
// GLOBAL DAT_003ab268 undefined4
// GLOBAL DAT_003ab26c int
// GLOBAL DAT_003ab270 undefined
// GLOBAL DAT_003ab278 undefined4
// GLOBAL s_Shooter_003ab260 string

undefined4 func_003AB160(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
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
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  puVar1 = DAT_003ab258;
  if (*(int *)(param_1 + 8) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_003ab258,*(int *)(param_1 + 8));
  }
  local_58 = func_00553288(*(undefined4 *)(*DAT_003ab25c + 0x10),4,(uint)*(byte *)(param_1 + 0xc),
                           s_Shooter_003ab260);
  iVar2 = DAT_003ab26c;
  local_68 = DAT_003ab26c;
  uStack_64 = DAT_003ab268;
  iStack_60 = DAT_003ab26c;
  local_5c = DAT_003ab268;
  uStack_54 = 0;
  local_30 = 1;
  local_4b = 0;
  local_44 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = 0;
  local_2f = 0xc4;
  local_48 = 0;
  local_40 = 0;
  local_4c = 1;
  local_50 = 1;
  piVar3 = func_002C2D00(&local_68);
  *(int **)(param_1 + 0x34) = piVar3;
  func_003AB9D8(param_1,(int)piVar3,1);
  local_24 = &DAT_003ab270;
  local_28 = iVar2;
  uVar4 = func_00584C14(*(int *)(param_1 + 0x34),&local_28);
  *(uint *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003ab278;
  func_003AB344(param_1);
  func_00668F88((undefined4 *)(param_1 + 0x10),0);
  if (iVar5 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar5);
}

