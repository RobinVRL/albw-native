#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00440C48(int param_1);
extern int func_00532C78(int param_1);
extern int DAT_004878c8;
extern float DAT_004878cc;

// USA 00487828 <- EU 00487800 (Ghidra, non-matching)
// GLOBAL DAT_004878c8 int
// GLOBAL DAT_004878cc float

void func_00487828(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  func_00440C48(param_1);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x100) + *(char *)(param_1 + 0xe8) * 8 + 4);
  piVar4 = (int *)(*(int *)(param_1 + 0x100) + *(char *)(param_1 + 0xe8) * 8);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0xf8) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar3 = *(int *)(param_1 + 0xe4) + 1;
  *(int *)(param_1 + 0xe4) = iVar3;
  if (*(int *)(param_1 + 0xf4) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xf4),1,fparam_0);
  }
  if ((*(short *)(DAT_004878c8 + param_1) == 2) && (bVar1 = func_00532C78(param_1 + 0x108), !bVar1))
  {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x10a) = 6;
    *(undefined2 *)(param_1 + 0x108) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x108),DAT_004878cc);
    return;
  }
  return;
}

