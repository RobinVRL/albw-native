#include "ghidra_types.h"

extern int func_0067F490(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00403e7c;

// USA 00403E34 <- EU 00403E14 (Ghidra, non-matching)
// GLOBAL DAT_00403e7c undefined4

int func_00403E34(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define puStack_1c (*(undefined4 * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_4 + 0xc0);
  }
  if ((param_2 != 0 && iVar1 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    *(int *)(param_4 + 0xb0) = param_3;
    puStack_1c = &uStack_18;
    uStack_18 = DAT_00403e7c;
    local_14 = param_2;
    iStack_10 = param_4;
    uStack_c = param_1;
    func_0067F490(&puStack_1c,*(int **)(param_3 + 0x10));
    *(undefined4 *)(param_4 + 0xb0) = 0;
    param_2 = local_14;
  }
  return param_2;
}

