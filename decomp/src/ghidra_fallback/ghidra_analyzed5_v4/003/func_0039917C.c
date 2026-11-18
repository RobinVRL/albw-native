#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_003993F8(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00668568(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_00399298;
extern int *DAT_0039929c;
extern undefined4 DAT_003992a0;
extern int DAT_003992a4;
extern undefined DAT_003992a8;
extern undefined4 DAT_003992ac;

// USA 0039917C <- EU 00399158 (Ghidra, non-matching)
// GLOBAL DAT_00399298 undefined4 *
// GLOBAL DAT_0039929c int *
// GLOBAL DAT_003992a0 undefined4
// GLOBAL DAT_003992a4 int
// GLOBAL DAT_003992a8 undefined
// GLOBAL DAT_003992ac undefined4

undefined4 func_0039917C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
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
  puVar1 = DAT_00399298;
  if (*(int *)(param_1 + 8) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = func_0010983C(*DAT_00399298,*(int *)(param_1 + 8));
  }
  local_58 = func_005532B4(*(undefined4 *)(*DAT_0039929c + 0x10),10,(uint)*(byte *)(param_1 + 0xc),0
                          );
  iVar2 = DAT_003992a4;
  local_68 = DAT_003992a4;
  uStack_64 = DAT_003992a0;
  iStack_60 = DAT_003992a4;
  local_5c = DAT_003992a0;
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
  piVar4 = func_002C2D00(&local_68);
  *(int **)(param_1 + 0x34) = piVar4;
  local_24 = &DAT_003992a8;
  local_28 = iVar2;
  uVar5 = func_00564A78(*(int *)(param_1 + 0x34),&local_28);
  *(uint *)(param_1 + 0x10c) = uVar5;
  func_003AB9D8(param_1,*(int *)(param_1 + 0x34),1);
  *(undefined1 *)(param_1 + 0xb9) = 0xe;
  *(undefined1 *)(param_1 + 0xba) = 0;
  uVar3 = DAT_003992ac;
  if (*(char *)(param_1 + 0xc) < '\x02') {
    *(undefined2 *)(param_1 + 200) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 200) = 8;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = uVar3;
  func_003993F8(param_1);
  func_00668568((undefined4 *)(param_1 + 0x10),0);
  if (iVar6 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar6);
}

