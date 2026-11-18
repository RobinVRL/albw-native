#include "ghidra_types.h"

extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined8 func_004C6494(int *param_1,uint *param_2,int param_3);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_00152b54;
extern int *DAT_00152b58;
extern int *DAT_00152b5c;
extern undefined4 DAT_00152b60;
extern uint DAT_00152b64;
extern undefined4 DAT_00152b68;
extern undefined4 DAT_00152b6c;

// USA 00152A08 <- EU 00152A08 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00152b54 undefined4
// GLOBAL DAT_00152b58 int *
// GLOBAL DAT_00152b5c int *
// GLOBAL DAT_00152b60 undefined4
// GLOBAL DAT_00152b64 uint
// GLOBAL DAT_00152b68 undefined4
// GLOBAL DAT_00152b6c undefined4

bool func_00152A08(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define auStack_d8 ((undefined1 *)(albw_frame + 0x8))
  #define local_5a (*(undefined2 *)(albw_frame + 0x86))
  #define local_58 (*(uint *)(albw_frame + 0x88))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(undefined4 *)(albw_frame + 0x94))
  #define local_48 (*(undefined4 *)(albw_frame + 0x98))
  #define local_44 (*(undefined1 * *)(albw_frame + 0x9c))
  #define local_40 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_3c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_38 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xac))
  #define local_30 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_28 ((int *)(albw_frame + 0xb8))
  #define local_14 (*(undefined1 * *)(albw_frame + 0xcc))
  #define local_10 (*(undefined4 *)(albw_frame + 0xd0))
  local_14 = auStack_d8;
  local_28[4] = DAT_00152b54;
  local_28[3] = 0xffffffff;
  local_10 = 0x40;
  local_5a = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  puVar1 = auStack_d8;
  if (*DAT_00152b58 != 0) {
    param_3 = DAT_00152b5c + -2;
    param_4 = DAT_00152b5c;
    iVar2 = func_005826A4(*DAT_00152b58,local_28,param_3,DAT_00152b5c);
    puVar1 = local_14;
    if (iVar2 != 0) {
      func_004994FC((int)(local_28 + 4),local_28[0],(uint)param_3,param_4);
      goto LAB_00152a88;
    }
  }
  local_14 = puVar1;
  func_004994FC((int)(local_28 + 4),DAT_00152b60,(uint)param_3,param_4);
LAB_00152a88:
  local_3c = 0x80000;
  local_34 = 99;
  local_38 = 0x80000;
  local_30 = 99;
  local_58 = DAT_00152b64;
  uStack_54 = DAT_00152b68;
  local_50 = DAT_00152b6c;
  local_4c = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_4c = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  }
  local_48 = 0x1200;
  local_40 = 0x80;
  local_44 = auStack_d8;
  uVar4 = func_004C6494((int *)(param_1 + 0x20),&local_58,0);
  bVar3 = (int)uVar4 == 0;
  *(char *)(param_1 + 0xdec) = (char)uVar4;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x8e0) = 1;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    *(undefined4 *)(param_1 + 0x8e8) = 0;
    *(undefined4 *)(param_1 + 0x8ec) = 0;
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    *(undefined4 *)(param_1 + 0x8f4) = 0;
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0x8fc) = 0;
    *(undefined4 *)(param_1 + 0x900) = 0;
    *(undefined4 *)(param_1 + 0x904) = 0;
    *(undefined4 *)(param_1 + 0x908) = 0;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x910) = 0;
    *(undefined4 *)(param_1 + 0x914) = 0;
    *(undefined4 *)(param_1 + 0x918) = 0;
    *(undefined4 *)(param_1 + 0x91c) = 0;
  }
  return bVar3;
}

