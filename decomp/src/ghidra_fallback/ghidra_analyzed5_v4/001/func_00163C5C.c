// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00521184();
extern float func_00521298(int param_1);
extern int func_0058A7D4(void);
extern int DAT_00163d7c;
extern uint DAT_00163d80;
extern float DAT_00163d84;
extern float DAT_00163d88;
extern float DAT_00163d8c;

// USA 00163C5C <- EU 00163C60 (Ghidra, non-matching)
// GLOBAL DAT_00163d7c int
// GLOBAL DAT_00163d80 uint
// GLOBAL DAT_00163d84 float
// GLOBAL DAT_00163d88 float
// GLOBAL DAT_00163d8c float

void func_00163C5C(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  if (*(char *)(param_1 + 0x921) == '\x01') {
    *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + -0x80000000;
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = DAT_00163d80;
    uVar3 = func_00111A64(puVar1);
    *(int *)(param_1 + 0x904) =
         (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20) + uVar2 + 0x80000001 +
         *(int *)(param_1 + 0x904);
    goto LAB_00163d10;
  }
  fVar5 = func_00521298(param_1);
  if (DAT_00163d7c < (int)ALBW_AS_U32(fVar5)) {
LAB_00163cf8:
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
  }
  else {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    if (0x1d < (uint)((ulonglong)uVar2 * 100 >> 0x20)) goto LAB_00163cf8;
    uVar2 = func_00521184(param_1);
  }
  *(uint *)(param_1 + 0x904) = uVar2;
LAB_00163d10:
  fVar5 = DAT_00163d84;
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x904),DAT_00163d84);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar4 = (int)((ulonglong)uVar2 * 0x28 >> 0x20) + 0x14;
  if (iVar4 == 0) {
    fVar5 = DAT_00163d88;
  }
  *(int *)(param_1 + 0x90c) = iVar4;
  if (iVar4 == 0) {
    *(float *)(param_1 + 0x910) = fVar5;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x910) = DAT_00163d8c / fVar5;
  }
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined1 *)(param_1 + 0x921) = 0;
  return;
}

