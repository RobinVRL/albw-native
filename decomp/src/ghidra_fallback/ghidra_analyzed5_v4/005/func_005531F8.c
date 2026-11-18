#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0058E2B8(int *param_1);
extern float DAT_0055323c;
extern uint DAT_00553240;

// USA 005531F8 <- EU 005531D0 (Ghidra, non-matching)
// GLOBAL DAT_0055323c float
// GLOBAL DAT_00553240 uint

undefined4 func_005531F8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  iVar3 = *param_2;
  if (*(float *)(param_1 + 0x4c0) != DAT_0055323c || *(float *)(param_1 + 0x4c8) != DAT_0055323c) {
    iVar1 = func_004904CC(*(float *)(param_1 + 0x4c0),*(float *)(param_1 + 0x4c8));
    local_18 = iVar1 - iVar3;
    uVar2 = func_0058E2B8(&local_18);
    if (uVar2 < DAT_00553240) {
      return 0;
    }
    iVar3 = iVar1 + -0x80000000;
  }
  *param_2 = iVar3;
  return 1;
}

