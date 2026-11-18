#include "ghidra_types.h"

extern int func_0010E15C(int *param_1);
extern int func_003CC054(int *param_1,int param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern undefined4 *DAT_002fe8f0;

// USA 002FE86C <- EU 002FE848 (Ghidra, non-matching)
// GLOBAL DAT_002fe8f0 undefined4 *

void func_002FE86C(int param_1)

{
  uint uVar1;
  undefined4 extraout_r1;
  uint in_r2;
  int in_r3;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14) & 0xfffffffc;
  if (uVar1 != 0) {
    local_18 = in_r3;
    func_00601378(uVar1);
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
      func_005FFF7C(iVar2);
      *(int *)(param_1 + 0x40) = iVar2;
    }
    func_006003D8(0x208,&local_18);
    func_003CC054((int *)(param_1 + 0x10),local_18);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    func_005FFDC0();
  }
  func_006003D8(0x208,(int *)(param_1 + (uint)*(byte *)(param_1 + 0x44) * 4 + 0x30));
  func_005FF418(*(uint *)(param_1 + 0x24),extraout_r1,in_r2);
  func_0010E15C((int *)*DAT_002fe8f0);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(char *)(param_1 + 0x44) = '\x01' - *(char *)(param_1 + 0x44);
  return;
}

