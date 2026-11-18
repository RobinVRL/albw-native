// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E6AB4(int param_1);
extern int func_0028FE00(int param_1,int param_2);
extern int func_00323994(undefined1 *param_1);
extern int func_004AB708(int param_1);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_00520B48(int param_1);
extern int func_00556E64(int param_1);
extern int *DAT_00372930;
extern int *DAT_00372934;
extern int *DAT_00372938;
extern int *DAT_0037293c;

// USA 00372798 <- EU 00372774 (Ghidra, non-matching)
// GLOBAL DAT_00372930 int *
// GLOBAL DAT_00372934 int *
// GLOBAL DAT_00372938 int *
// GLOBAL DAT_0037293c int *

undefined4 func_00372798(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((byte *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined2 *)(albw_frame + 0x10))
  #define local_1e (*(undefined1 *)(albw_frame + 0x12))
  piVar2 = DAT_0037293c;
  piVar1 = DAT_00372930;
  if (*(char *)(param_1 + 0x989) == '\x01') {
    *(undefined1 *)(param_1 + 0x989) = 2;
    func_004AB708(*piVar1);
    iVar5 = *(int *)(param_1 + 0x998);
    local_28[0] = 0;
    if (iVar5 == 10) {
      local_20 = 9;
    }
    else {
      local_20 = 10;
    }
    if (iVar5 == 10) {
      local_24 = 0x16;
    }
    else {
      local_24 = 0x2c;
    }
    if (*(char *)(*DAT_00372934 + 0x18) == '\x01') {
      local_28[0] = 1;
      if (iVar5 == 10) {
        local_24 = 0x16;
      }
      else {
        local_24 = 0x26;
      }
    }
    local_1e = 1;
    return func_004EF418(*DAT_00372934,local_28,2,0);
  }
  iVar6 = param_1 + 0x9a4;
  iVar5 = param_1 + 0x478;
  if (*(char *)(param_1 + 0x98a) == '\x01') {
    iVar4 = func_00520B48(*DAT_00372938);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x98a) = 2;
      func_00323994(local_28);
      return (**(code **)(*(int *)(param_1 + 0x478) + 0x48))(iVar5,iVar6,local_28,0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x98b) == '\x01') {
      bVar3 = func_00556E64(*DAT_0037293c);
      if (bVar3) {
        return func_0028FE00(*piVar2,0);
      }
      *(undefined1 *)(param_1 + 0x98b) = 2;
      func_00323994(local_28);
      return (**(code **)(*(int *)(param_1 + 0x478) + 0x48))(iVar5,iVar6,local_28,0);
    }
    if (*(char *)(param_1 + 0x476) == '\0') {
      return func_001E6AB4(param_1);
    }
    func_00323994(local_28);
    (**(code **)(*(int *)(param_1 + 0x478) + 0x48))(iVar5,iVar6,local_28,0);
    *(undefined1 *)(param_1 + 0x476) = 0;
  }
  return 0;
}

