#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int iRam003017fc;
extern undefined4 uRam003017f8;
extern undefined4 *DAT_003017f4;

// USA 00301778 <- EU 00301754 (Ghidra, non-matching)
// GLOBAL DAT_003017f4 undefined4 *
// GLOBAL UNK_003017f8 undefined4
// GLOBAL UNK_003017fc int

undefined4 func_00301778(int param_1,int param_2)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  func_004A9120(*DAT_003017f4,param_2 + 0x48);
  *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
  func_004CF478(*(int *)(param_2 + 0x10),0);
  func_00151148(*(int *)(param_2 + 0x14),0);
  *(undefined1 *)param_2 = 4;
  if ((uint)*(byte *)(param_2 + 10) < *(uint *)(param_1 + 0x610)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x618) + (uint)*(byte *)(param_2 + 10) * 4);
  }
  else {
    piVar1 = (int *)0x0;
  }
  (**(code **)(*piVar1 + 0x30))(piVar1);
  uStack_14 = uRam003017f8;
  iStack_18 = iRam003017fc;
  return func_0014DBF4((int *)param_1,&iStack_18,param_2 + 0x24,0);
}

