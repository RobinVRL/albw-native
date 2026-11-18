#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_0039847C(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00564A78(int param_1,int *param_2);
extern int func_006682E0(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_0039827c;
extern int *DAT_00398280;
extern undefined4 DAT_00398284;
extern int DAT_00398288;
extern undefined DAT_0039828c;
extern undefined4 DAT_00398290;

// USA 00398164 <- EU 00398140 (Ghidra, non-matching)
// GLOBAL DAT_0039827c undefined4 *
// GLOBAL DAT_00398280 int *
// GLOBAL DAT_00398284 undefined4
// GLOBAL DAT_00398288 int
// GLOBAL DAT_0039828c undefined
// GLOBAL DAT_00398290 undefined4

undefined4 func_00398164(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
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
  puVar1 = DAT_0039827c;
  if (*(int *)(param_1 + 8) == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = func_0010983C(*DAT_0039827c,*(int *)(param_1 + 8));
  }
  local_58 = func_005532B4(*(undefined4 *)(*DAT_00398280 + 0x10),3,(uint)*(byte *)(param_1 + 0xc),0)
  ;
  iVar2 = DAT_00398288;
  local_68 = DAT_00398288;
  uStack_64 = DAT_00398284;
  iStack_60 = DAT_00398288;
  local_5c = DAT_00398284;
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
  local_24 = &DAT_0039828c;
  local_28 = iVar2;
  uVar5 = func_00564A78(*(int *)(param_1 + 0x34),&local_28);
  *(uint *)(param_1 + 0xfc) = uVar5;
  func_003AB9D8(param_1,*(int *)(param_1 + 0x34),1);
  uVar6 = 8;
  *(undefined1 *)(param_1 + 0xb5) = 8;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  uVar3 = DAT_00398290;
  if (*(char *)(param_1 + 0xc) < '\x02') {
    uVar6 = 4;
  }
  *(undefined2 *)(param_1 + 0xc4) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = uVar3;
  func_0039847C(param_1);
  func_006682E0((undefined4 *)(param_1 + 0x10),0);
  if (iVar7 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar7);
}

