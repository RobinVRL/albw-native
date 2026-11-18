#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0014E138(int param_1,int param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int DAT_004d3a70;

// USA 004D3A24 <- EU 004D39FC (Ghidra, non-matching)
// GLOBAL DAT_004d3a70 int

undefined4 func_004D3A24(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  uVar2 = *(uint *)(param_1 + 0x414) + *(int *)(DAT_004d3a70 + 8);
  *(uint *)(param_1 + 0x414) = uVar2;
  func_00491624(afStack_38,0,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x410);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar1 + 0x80),afStack_38,(undefined4 *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x410));
  return func_0014E138(param_1,param_2);
}

