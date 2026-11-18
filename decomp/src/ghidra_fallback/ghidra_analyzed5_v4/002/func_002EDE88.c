#include "ghidra_types.h"

extern int func_002F5CD4(int param_1,int param_2);
extern int func_0035EFF8(int *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern float DAT_002edf40;
extern undefined4 DAT_002edf44;
extern undefined4 DAT_002edf48;
extern undefined4 DAT_002edf4c;

// USA 002EDE88 <- EU 002EDE64 (Ghidra, non-matching)
// GLOBAL DAT_002edf40 float
// GLOBAL DAT_002edf44 undefined4
// GLOBAL DAT_002edf48 undefined4
// GLOBAL DAT_002edf4c undefined4

void func_002EDE88(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  bVar5 = *(char *)(param_1 + 0xd47) == '\0';
  if (bVar5) {
    func_004FC07C(param_1,0x1c,2,0);
  }
  else {
    func_004FC07C(param_1,0x1d,2,0);
  }
  *(bool *)(param_1 + 0xd47) = bVar5;
  piVar2 = (int *)func_002F5CD4(param_1,0);
  if (piVar2 != (int *)0x0) {
    func_0035EFF8(piVar2);
    fparam_0 = DAT_002edf40;
    iVar3 = piVar2[0xf8];
    iVar4 = piVar2[0xf9];
    *(float *)(param_1 + 0xbd8) = ALBW_AS_F32(piVar2[0xf7]);
    *(int *)(param_1 + 0xbdc) = iVar3;
    *(int *)(param_1 + 0xbe0) = iVar4;
    func_0068A3EC((float *)(param_1 + 0xbd8),fparam_0);
    *(undefined4 *)(param_1 + 0xc1c) = DAT_002edf44;
  }
  uVar1 = DAT_002edf48;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002edf48;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0xb98) = uVar1;
  uVar1 = DAT_002edf4c;
  *(undefined4 *)(param_1 + 0xb10) = 0x14;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  return;
}

