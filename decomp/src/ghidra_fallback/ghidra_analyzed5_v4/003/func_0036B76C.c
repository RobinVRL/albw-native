#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_0036BC6C(undefined4 param_1,float *param_2,int param_3);
extern int func_0036C1E4(int param_1);
extern int DAT_0036b83c;
extern int *DAT_0036b840;

// USA 0036B76C <- EU 0036B748 (Ghidra, non-matching)
// GLOBAL DAT_0036b83c int
// GLOBAL DAT_0036b840 int *

undefined4 func_0036B76C(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  #define local_8 (*(undefined4 *)(albw_frame + 0x8))
  cVar1 = *(char *)(param_1 + 0xf4);
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x3d0);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x3d4);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x3d8);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar3 + 0x3d0);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x3d4);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar3 + 0x3d8);
      return func_0036BC6C(param_1,(float *)(param_1 + 0x30),*(int *)(param_1 + 8));
    }
  }
  else if (cVar1 == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    if (puVar2 == (undefined4 *)0x0) {
      iVar3 = *(int *)(param_1 + 4);
      local_8 = *(undefined4 *)(iVar3 + 0x3d8);
      local_10 = *(undefined4 *)(iVar3 + 0x3d0);
      uStack_c = *(undefined4 *)(iVar3 + 0x3d4);
    }
    else {
      local_10 = *puVar2;
      uStack_c = puVar2[1];
      local_8 = puVar2[2];
    }
    func_001E8268(*(int *)(*DAT_0036b840 + 0x18),(int *)(*(int *)(param_1 + 0xc) + 0xac),&local_10,
                  (undefined4 *)(DAT_0036b83c + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c));
  }
  else if (cVar1 == '\x03') {
    return func_0036C1E4(param_1);
  }
  return 0;
}

