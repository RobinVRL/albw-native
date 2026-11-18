#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00466C40(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_00464f30;
extern float DAT_00464f34;
extern float DAT_00464f38;
extern uint DAT_00464f3c;

// USA 00464E3C <- EU 00464E14 (Ghidra, non-matching)
// GLOBAL DAT_00464f30 int *
// GLOBAL DAT_00464f34 float
// GLOBAL DAT_00464f38 float
// GLOBAL DAT_00464f3c uint

void func_00464E3C(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fparam_0;
  float fVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0xfc) + *(char *)(param_1 + 0xe4) * 8 + 4);
  pcVar5 = *(code **)(*(int *)(param_1 + 0xfc) + *(char *)(param_1 + 0xe4) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0xf4) + ((int)uVar2 >> 1)));
  }
  (*pcVar5)((int)(*(int *)(param_1 + 0xf4)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0xe0) + 1;
  *(int *)(param_1 + 0xe0) = iVar3;
  if (*(int *)(param_1 + 0xf0) != 0) {
    fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xf0),1,fVar7);
  }
  func_00466C40(param_1);
  piVar1 = DAT_00464f30;
  uVar9 = (ulonglong)DAT_00464f3c;
  uVar2 = 0;
  fVar7 = DAT_00464f34;
  fVar8 = DAT_00464f38;
  do {
    piVar4 = (int *)(param_1 + 0x108);
    if (uVar2 < 4) {
      piVar4 = piVar4 + uVar2;
    }
    if (*piVar4 != 0) {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar2 < 4) {
        piVar4 = piVar4 + uVar2;
      }
      if (*(int *)(*piVar4 + 0xb0) == (int)*(char *)(param_1 + 0x129)) {
        piVar4 = (int *)(param_1 + 0x108);
        if (uVar2 < 4) {
          piVar4 = piVar4 + uVar2;
        }
        iVar6 = *piVar4;
        iVar3 = func_0055696C(*piVar1,0x1f);
        fparam_0 = fVar7;
        if ((iVar3 != 3) && (fparam_0 = fVar8, iVar3 != 4)) {
          fparam_0 = ALBW_AS_F32(uVar9);
        }
        func_002316CC(iVar6 + 0x74,fparam_0);
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return;
}

