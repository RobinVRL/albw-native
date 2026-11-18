#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float DAT_00471904;
extern int DAT_00471908;
extern float DAT_0047190c;
extern uint DAT_00471910;
extern float DAT_00471914;
extern int DAT_00471918;
extern float DAT_0047191c;

// USA 00471760 <- EU 00471738 (Ghidra, non-matching)
// GLOBAL DAT_00471904 float
// GLOBAL DAT_00471908 int
// GLOBAL DAT_0047190c float
// GLOBAL DAT_00471910 uint
// GLOBAL DAT_00471914 float
// GLOBAL DAT_00471918 int
// GLOBAL DAT_0047191c float

undefined4 func_00471760(int param_1,uint *param_2,int param_3)

{
  float fparam_0;
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fparam_0 = DAT_00471904;
  *(uint *)(param_1 + 0xe0) = *param_2;
  *(uint *)(param_1 + 0xe4) = param_2[1];
  iVar1 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  uVar2 = param_2[1];
  *(uint *)(iVar1 + 0x1c) = *param_2;
  *(uint *)(iVar1 + 0x20) = uVar2;
  *(float *)(iVar1 + 0x24) = fparam_0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = DAT_00471908;
  uVar2 = param_2[1];
  if (DAT_00471908 < (int)uVar2) {
    *(undefined1 *)(param_1 + 0xe9) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe9) = 1;
  }
  fVar4 = fparam_0;
  if (iVar1 < (int)uVar2) {
    fVar4 = DAT_0047190c;
  }
  fVar3 = DAT_00471914;
  if ((DAT_00471910 < *param_2) || (fVar3 = DAT_0047191c, DAT_00471918 < (int)*param_2)) {
    fVar4 = fVar4 + fVar3;
  }
  func_001672F8(*(int *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0xd6),fparam_0,fparam_0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0xd6) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar1 = iVar1 + *(short *)(param_1 + 0xd6) * 0x38;
  }
  *(float *)(iVar1 + 0x14) = fVar4;
  *(float *)(*(int *)(iVar1 + 0x10) + 0x10) = fVar4;
  *(char *)(param_1 + 0xe8) = (char)param_3;
  if (param_3 == 1) {
    func_00231524(param_1 + 0x80);
    func_00231448(param_1 + 0x8c);
    func_00231448(param_1 + 0x98);
    func_00231448(param_1 + 0xa4);
    func_00231524(param_1 + 0xb0);
    return func_00231524(param_1 + 0xbc);
  }
  if (param_3 == 2) {
    func_00231448(param_1 + 0x80);
    func_00231524(param_1 + 0x8c);
    func_00231448(param_1 + 0x98);
    func_00231524(param_1 + 0xa4);
    func_00231448(param_1 + 0xb0);
    return func_00231524(param_1 + 0xbc);
  }
  if (param_3 == 3) {
    func_00231448(param_1 + 0x80);
    func_00231448(param_1 + 0x8c);
    func_00231524(param_1 + 0x98);
    func_00231524(param_1 + 0xa4);
    func_00231524(param_1 + 0xb0);
    return func_00231448(param_1 + 0xbc);
  }
  return 0;
}

