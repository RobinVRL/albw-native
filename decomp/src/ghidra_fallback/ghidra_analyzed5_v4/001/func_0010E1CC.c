#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010EAE8(undefined4 *param_1,undefined4 param_2);
extern int func_0010EDBC(int *param_1,undefined4 param_2);
extern int func_0010EFDC(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4);
extern undefined4 *DAT_0010e244;
extern undefined4 *DAT_0010e248;
extern int DAT_0010e24c;

// USA 0010E1CC <- EU 0010E1CC (Ghidra, non-matching)
// GLOBAL DAT_0010e244 undefined4 *
// GLOBAL DAT_0010e248 undefined4 *
// GLOBAL DAT_0010e24c int

undefined4 func_0010E1CC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  puVar1 = DAT_0010e244;
  local_18 = in_r3;
  uVar2 = func_0010EAE8(&local_18,*DAT_0010e248);
  if ((int)uVar2 < 0) {
    func_0010A98C(uVar2);
  }
  puVar3 = (undefined4 *)func_0010CF28(0x8c,param_2,4);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_0010EFDC(puVar3,param_2,puVar1,local_18);
    iVar5 = DAT_0010e24c + 0x4c;
    *piVar4 = DAT_0010e24c;
    piVar4[6] = iVar5;
  }
  *(int **)(param_1 + 0x20) = piVar4;
  return func_0010EDBC((int *)(param_1 + 0x24),piVar4);
}

