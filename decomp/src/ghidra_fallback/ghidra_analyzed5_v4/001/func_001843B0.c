#include "ghidra_types.h"

extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern undefined4 DAT_0018443c;

// USA 001843B0 <- EU 001843B0 (Ghidra, non-matching)
// GLOBAL DAT_0018443c undefined4

undefined4 func_001843B0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x9ec) * 0x30;
  local_18 = *(float *)(iVar1 + 0xc);
  local_14 = *(undefined4 *)(iVar1 + 0x1c);
  local_10 = *(undefined4 *)(iVar1 + 0x2c);
  iVar2 = *(int *)(param_1 + 1000);
  iVar3 = *(int *)(param_1 + 0x820);
  iVar4 = *(int *)(param_1 + 0x824);
  iVar1 = *(int *)(param_1 + 0x990);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),iVar2 + iVar3 + iVar4,&local_18);
  return func_004CEAF0(*(int *)(param_1 + 0x990));
}

