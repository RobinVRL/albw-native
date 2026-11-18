#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined DAT_0019b7c8;

// USA 0019B758 <- EU 0019B758 (Ghidra, non-matching)
// GLOBAL DAT_0019b7c8 undefined

void func_0019B758(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar2 = (int *)(param_1 + 0x450);
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)&DAT_0019b7c8);
    *piVar2 = local_18;
    *(undefined4 *)(param_1 + 0x454) = uStack_14;
    return;
  }
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  return;
}

