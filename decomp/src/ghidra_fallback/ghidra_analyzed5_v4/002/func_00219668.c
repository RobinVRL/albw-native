#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern uint DAT_002196d0;
extern int *DAT_002196d4;

// USA 00219668 <- EU 00219668 (Ghidra, non-matching)
// GLOBAL DAT_002196d0 uint
// GLOBAL DAT_002196d4 int *

void func_00219668(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_00115C70(local_20,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
  iVar2 = func_004904CC(local_20[0],local_18);
  uVar1 = DAT_002196d0;
  uVar3 = func_00111A64((uint *)(*DAT_002196d4 + 0x660));
  iVar4 = (int)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x20);
  if (((ulonglong)uVar1 * (ulonglong)uVar3 & 0x100000000) != 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x8d8) = iVar4 + iVar2;
  *(undefined2 *)(param_1 + 0x8e0) = 0x96;
  return;
}

