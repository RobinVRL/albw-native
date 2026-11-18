#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_00399ED4(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int *DAT_00399b2c;
extern undefined4 *DAT_00399b30;
extern undefined4 DAT_00399b34;
extern int DAT_00399b38;
extern undefined4 DAT_00399b3c;

// USA 00399A44 <- EU 00399A20 (Ghidra, non-matching)
// GLOBAL DAT_00399b2c int *
// GLOBAL DAT_00399b30 undefined4 *
// GLOBAL DAT_00399b34 undefined4
// GLOBAL DAT_00399b38 int
// GLOBAL DAT_00399b3c undefined4

undefined4 func_00399A44(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int unaff_r5;
  int iVar5;
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
  puVar1 = DAT_00399b30;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    unaff_r5 = 1;
  }
  iVar5 = *(int *)(*DAT_00399b2c + 0x10);
  if (iVar4 != 0) {
    unaff_r5 = func_0010983C(*DAT_00399b30,iVar4);
  }
  local_58 = DAT_00399b38;
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 10) < '\x02') {
    bVar2 = 0xd;
  }
  else {
    bVar2 = 0xe;
  }
  *(byte *)(param_1 + 0x48) = bVar2;
  local_48 = *(undefined4 *)(iVar5 + 0x10 + (uint)bVar2 * 4);
  uStack_54 = DAT_00399b34;
  iStack_50 = local_58;
  local_4c = DAT_00399b34;
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
  piVar3 = func_002C2D00(&local_58);
  *(int **)(param_1 + 0x34) = piVar3;
  func_003AB9D8(param_1,(int)piVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_00399b3c;
  func_00399ED4(param_1);
  if (unaff_r5 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,unaff_r5);
}

