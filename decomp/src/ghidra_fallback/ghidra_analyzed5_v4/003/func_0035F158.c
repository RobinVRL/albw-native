#include "ghidra_types.h"

extern int func_002ECA9C(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0035f22c;
extern char s_Break_0035f230[];

// USA 0035F158 <- EU 0035F134 (Ghidra, non-matching)
// GLOBAL DAT_0035f22c int *
// GLOBAL s_Break_0035f230 string

void func_0035F158(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  iVar1 = func_0052FBA0(*DAT_0035f22c + 0x3dbbc,*(uint *)(param_1 + 0x50));
  if (iVar1 != 0) {
    func_002ECA9C(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x47c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x480))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    local_14 = 0;
    local_18 = 0;
  }
  else {
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_Break_0035f230);
  }
  if ((local_18 != 0) && (*(int *)(local_18 + 0x1c) == local_14)) {
    *(undefined4 *)(local_18 + 0x28) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(local_18 + 0x2c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(local_18 + 0x30) = *(undefined4 *)(param_1 + 0x4f8);
    *(uint *)(local_18 + 0x3c) = *(uint *)(local_18 + 0x3c) | 0x10;
  }
  return;
}

