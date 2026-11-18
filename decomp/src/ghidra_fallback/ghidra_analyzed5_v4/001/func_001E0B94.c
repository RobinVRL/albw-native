#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00489CE0(int *param_1,int param_2,undefined4 param_3);
extern int DAT_001e0c34;

// USA 001E0B94 <- EU 001E0B94 (Ghidra, non-matching)
// GLOBAL DAT_001e0c34 int

int * func_001E0B94(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_r3;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  bVar1 = true;
  if ((param_3 < 0) || (*(int *)(param_1 + param_3 * 4 + 0x1fd4) == 0)) {
    piVar5 = *(int **)(DAT_001e0c34 + param_1);
  }
  else {
    bVar1 = false;
    piVar5 = (int *)(*(int *)(param_1 + 0x1fd4 + param_3 * 4) + 0xe4);
  }
  iVar2 = 0;
  local_18 = in_r3;
  if (bVar1) {
    func_0010C0B8(param_1 + 0x1fb4);
    iVar2 = param_1 + 0x1fb4;
  }
  local_18 = local_18 & 0xffffff00;
  iVar3 = func_00489CE0(piVar5,(int)&local_18,param_2);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = local_18 & 0xff;
  }
  if (iVar3 == 0 || uVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  if (iVar2 != 0) {
    func_0010EEE0(iVar2);
  }
  return piVar5;
}

