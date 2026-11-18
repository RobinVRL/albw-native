#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int DAT_002f90cc;
extern int DAT_002f90d0;
extern float DAT_002f90d4;

// USA 002F9008 <- EU 002F8FE4 (Ghidra, non-matching)
// GLOBAL DAT_002f90cc int
// GLOBAL DAT_002f90d0 int
// GLOBAL DAT_002f90d4 float

void func_002F9008(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  
  fVar4 = DAT_002f90d4;
  piVar3 = (int *)(param_1 + 0x8cc);
  switch(*(undefined4 *)(param_1 + 0x8f4)) {
  case 0:
    iVar2 = func_0051D2F4(piVar3,-0x20000000,DAT_002f90d0,DAT_002f90cc,DAT_002f90d4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x8f0) = 0xf;
      *(undefined4 *)(param_1 + 0x8f4) = 1;
      return;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x8f0) + -1;
    *(int *)(param_1 + 0x8f0) = iVar2;
    if (iVar2 != 0) {
      return;
    }
    uVar1 = 2;
LAB_002f90a8:
    *(undefined4 *)(param_1 + 0x8f4) = uVar1;
    return;
  case 2:
    iVar2 = func_0051D2F4(piVar3,0x20000000,DAT_002f90d0,DAT_002f90cc,DAT_002f90d4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x8f0) = 0xf;
      *(undefined4 *)(param_1 + 0x8f4) = 3;
      return;
    }
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x8f0) + -1;
    *(int *)(param_1 + 0x8f0) = iVar2;
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_002f90a8;
    }
    break;
  case 4:
    fVar4 = DAT_002f90d4;
    iVar2 = func_0051D2F4(piVar3,0,DAT_002f90d0,DAT_002f90cc,DAT_002f90d4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x8f4) = 5;
    }
    return;
  }
  return;
}

