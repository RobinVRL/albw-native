#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_001139F8(int param_1);
extern int func_002D1C78(int param_1,int param_2,int param_3);
extern int func_002FF74C(int param_1,int param_2,int param_3);
extern int func_002FF7D0(int param_1,int param_2);
extern int func_00504BC4(undefined4 *param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern undefined4 *DAT_002d1884;
extern int DAT_002d1888;
extern int *DAT_002d188c;
extern undefined4 *DAT_002d1890;
extern undefined4 DAT_002d1894;

// USA 002D175C <- EU 002D1738 (Ghidra, non-matching)
// GLOBAL DAT_002d1884 undefined4 *
// GLOBAL DAT_002d1888 int
// GLOBAL DAT_002d188c int *
// GLOBAL DAT_002d1890 undefined4 *
// GLOBAL DAT_002d1894 undefined4

void func_002D175C(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_3b (*(undefined1 *)(albw_frame + 0x35))
  #define local_3a (*(undefined1 *)(albw_frame + 0x36))
  #define local_2c (*(int *)(albw_frame + 0x44))
  #define local_24 (*(undefined1 *)(albw_frame + 0x4c))
  *(char *)(param_1 + 200) = (char)param_2;
  if (-1 < param_2) {
    iVar8 = 0;
    do {
      iVar9 = param_1 + iVar8 * 0x28;
      iVar5 = *(int *)(iVar9 + 0x28);
      if (iVar5 != 0) {
        func_002FF7D0(*(int *)(param_1 + 0x20),iVar5);
        *(undefined4 *)(iVar9 + 0x28) = 0;
      }
      puVar1 = DAT_002d1884;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    if (param_3 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = func_0010983C(*DAT_002d1884,param_3);
    }
    func_00504BC4(auStack_70,DAT_002d1888 + param_2 * 8);
    local_3b = 0xff;
    local_3a = 10;
    local_24 = 0;
    local_2c = param_3;
    puVar3 = func_00504D48(*DAT_002d188c,(int)auStack_70);
    func_002D1C78(param_1,(int)puVar3,0);
    uVar2 = DAT_002d1894;
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar5 != 0) {
      uVar6 = DAT_002d1890[1];
      uVar7 = DAT_002d1890[2];
      *(undefined4 *)(iVar5 + 0x88) = *DAT_002d1890;
      *(undefined4 *)(iVar5 + 0x8c) = uVar6;
      *(undefined4 *)(iVar5 + 0x90) = uVar7;
      *(undefined4 *)(iVar5 + 0x94) = uVar2;
      iVar5 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x24) * 0x28 + 0x28);
      if (iVar5 != 0) {
        func_002FF74C(*(int *)(param_1 + 0x20),iVar5,1);
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        func_002FF74C(*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x10),0);
      }
      iVar5 = *(int *)(param_1 + 8);
      uVar4 = func_001139F8(*(int *)(*(int *)(param_1 + 0x20) + 0x3c));
      **(uint **)(iVar5 + 0x1e8) = uVar4 >> 3;
    }
    if (iVar8 != 1) {
      func_0010983C(*puVar1,iVar8);
    }
    return;
  }
  return;
}

