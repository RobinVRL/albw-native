#include "ghidra_types.h"

extern int func_00199F6C(int param_1);
extern int func_00199F78(int param_1);
extern int func_0019A23C(int param_1);
extern int func_004088D0(int param_1);
extern int func_005697B8(int param_1,uint param_2,undefined4 *param_3);
extern int func_00588174(int param_1,uint param_2);
extern int *DAT_00256a04;

// USA 002568BC <- EU 002568E4 (Ghidra, non-matching)
// GLOBAL DAT_00256a04 int *

undefined4 func_002568BC(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  #define local_27 (*(undefined1 *)(albw_frame + 0x29))
  #define local_24 (*(uint *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char *)(albw_frame + 0x34))
  #define local_1b (*(undefined1 *)(albw_frame + 0x35))
  func_004088D0((int)&local_50);
  puVar2 = (undefined4 *)func_00199F6C(param_3);
  local_50 = *puVar2;
  uStack_4c = puVar2[1];
  local_48 = puVar2[2];
  puVar2 = (undefined4 *)func_00199F78(param_3);
  local_44 = *puVar2;
  uStack_40 = puVar2[1];
  local_3c = puVar2[2];
  local_34 = func_0019A23C(param_3);
  piVar1 = DAT_00256a04;
  iVar3 = func_005697B8(*DAT_00256a04,param_2,&local_24);
  if (iVar3 != 0) {
    local_28 = 1;
    local_38 = local_24;
    local_2c = local_20;
    local_27 = local_1b;
    if ((local_1c != '\x01') && (local_1c == '\x02')) {
      local_28 = 2;
    }
  }
  local_30 = func_00588174(*piVar1,param_2);
  uVar4 = 0x40000000;
  if ((local_38 & 1) != 0) {
    uVar4 = 0x40000001;
  }
  if ((local_38 & 4) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((local_38 & 8) != 0) {
    uVar4 = uVar4 | 8;
  }
  return (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined4 *)(param_1[5] + 0xc),&local_50,param_2,uVar4,param_4);
}

