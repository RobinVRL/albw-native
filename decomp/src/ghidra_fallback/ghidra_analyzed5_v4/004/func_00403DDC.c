#include "ghidra_types.h"

extern int func_0067F490(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00403e10;

// USA 00403DDC <- EU 00403DBC (Ghidra, non-matching)
// GLOBAL DAT_00403e10 undefined4

int func_00403DDC(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  #define local_8 ((undefined4 * *)(albw_frame + 0x18))
  piVar1 = param_3;
  if (param_2 != 0) {
    piVar1 = *(int **)(param_4 + 0xb0);
  }
  local_8[0] = &local_18;
  if ((param_2 != 0 && piVar1 != (int *)0x0) && (*(int *)(param_4 + 0xc0) != 0)) {
    local_18 = DAT_00403e10;
    local_14 = param_2;
    iStack_10 = param_4;
    uStack_c = param_1;
    func_0067F490(local_8,param_3);
    param_2 = local_14;
  }
  return param_2;
}

