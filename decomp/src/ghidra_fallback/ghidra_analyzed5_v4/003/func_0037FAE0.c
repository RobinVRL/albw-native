#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int DAT_0037fc24;
extern int DAT_0037fc28;
extern float DAT_0037fc2c;
extern undefined4 DAT_0037fc30;

// USA 0037FAE0 <- EU 0037FABC (Ghidra, non-matching)
// GLOBAL DAT_0037fc24 int
// GLOBAL DAT_0037fc28 int
// GLOBAL DAT_0037fc2c float
// GLOBAL DAT_0037fc30 undefined4

void func_0037FAE0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar5 = DAT_0037fc2c;
  piVar2 = (int *)(param_1 + 0xa18);
  uVar6 = DAT_0037fc30;
  switch(*(undefined1 *)(param_1 + 0xb00)) {
  case 0:
    iVar4 = func_0051D2F4(piVar2,-0x20000000,DAT_0037fc28,DAT_0037fc24,DAT_0037fc2c);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xb00) = 1;
      *(undefined4 *)(param_1 + 0xae0) = 0xf;
LAB_0037fbc0:
      *(undefined4 *)(param_1 + 0xae4) = uVar6;
      *(undefined4 *)(param_1 + 0xadc) = 0;
      return;
    }
    break;
  case 1:
    uVar3 = *(uint *)(param_1 + 0xadc);
    if (*(uint *)(param_1 + 0xae0) <= uVar3) {
      if (*(uint *)(param_1 + 0xaec) <= *(uint *)(param_1 + 0xae8)) {
LAB_0037fb8c:
        *(undefined1 *)(param_1 + 0xb00) = 4;
        return;
      }
      *(uint *)(param_1 + 0xae8) = *(uint *)(param_1 + 0xae8) + 1;
      uVar1 = 2;
LAB_0037fb80:
      *(undefined1 *)(param_1 + 0xb00) = uVar1;
      return;
    }
    goto LAB_0037fb50;
  case 2:
    iVar4 = func_0051D2F4(piVar2,0x20000000,DAT_0037fc28,DAT_0037fc24,DAT_0037fc2c);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xb00) = 3;
      *(undefined4 *)(param_1 + 0xae0) = 0xf;
      goto LAB_0037fbc0;
    }
    break;
  case 3:
    uVar3 = *(uint *)(param_1 + 0xadc);
    if (*(uint *)(param_1 + 0xae0) <= uVar3) {
      if (*(uint *)(param_1 + 0xaec) <= *(uint *)(param_1 + 0xae8)) goto LAB_0037fb8c;
      *(uint *)(param_1 + 0xae8) = *(uint *)(param_1 + 0xae8) + 1;
      uVar1 = 0;
      goto LAB_0037fb80;
    }
LAB_0037fb50:
    *(uint *)(param_1 + 0xadc) = uVar3 + 1;
    break;
  case 4:
    fVar5 = DAT_0037fc2c;
    iVar4 = func_0051D2F4(piVar2,0,DAT_0037fc28,DAT_0037fc24,DAT_0037fc2c);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xb00) = 5;
    }
    return;
  }
  return;
}

