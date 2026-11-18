#include "ghidra_types.h"

extern int func_00121C24(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_0012FD38(int param_1,int param_2);
extern int func_0013080C(int param_1,int param_2);
extern int *DAT_00122388;
extern undefined4 DAT_0012239c;
extern float *DAT_001223a0;
extern float DAT_001223a4;
extern float DAT_001223a8;
extern undefined4 DAT_001223ac;
extern undefined4 DAT_001223b0;
extern undefined4 *DAT_001223b4;
extern int *DAT_001223b8;

// USA 001222A0 <- EU 001222A0 (Ghidra, non-matching)
// GLOBAL DAT_00122388 int *
// GLOBAL DAT_0012239c undefined4
// GLOBAL DAT_001223a0 float *
// GLOBAL DAT_001223a4 float
// GLOBAL DAT_001223a8 float
// GLOBAL DAT_001223ac undefined4
// GLOBAL DAT_001223b0 undefined4
// GLOBAL DAT_001223b4 undefined4 *
// GLOBAL DAT_001223b8 int *

undefined4 * func_001222A0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = func_00121C24(param_1,DAT_001223a8,DAT_001223a4,*DAT_001223a0,
                         (*(float *)(*(int *)(*DAT_00122388 + 0x1b0) + 0xc) -
                         *(float *)(*(int *)(*DAT_00122388 + 0x1b0) + 4)) /
                         (*(float *)(*(int *)(*DAT_00122388 + 0x1b0) + 0x10) -
                         *(float *)(*(int *)(*DAT_00122388 + 0x1b0) + 8)));
  uVar4 = DAT_001223ac;
  *puVar3 = DAT_001223b0;
  puVar1 = DAT_001223b4;
  puVar3[0x76] = 0;
  puVar3[0x77] = uVar4;
  puVar3[0x78] = 0;
  piVar2 = DAT_001223b8;
  uVar4 = puVar1[1];
  puVar3[0x79] = *puVar1;
  puVar3[0x7a] = uVar4;
  uVar4 = puVar1[1];
  puVar3[0x7b] = *puVar1;
  puVar3[0x7c] = uVar4;
  puVar3[0x7d] = 0;
  func_0013080C(*piVar2,(int)(puVar3 + 4));
  func_0012FD38(*piVar2,(int)(puVar3 + 0x45));
  return puVar3;
}

