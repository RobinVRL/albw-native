#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern float DAT_0023944c;
extern float DAT_00239450;
extern float DAT_00239454;
extern int DAT_00239458;
extern uint DAT_0023945c;
extern int DAT_00239460;
extern float DAT_00239464;
extern int DAT_00239468;
extern float DAT_0023946c;

// USA 0023934C <- EU 0023934C (Ghidra, non-matching)
// GLOBAL DAT_0023944c float
// GLOBAL DAT_00239450 float
// GLOBAL DAT_00239454 float
// GLOBAL DAT_00239458 int
// GLOBAL DAT_0023945c uint
// GLOBAL DAT_00239460 int
// GLOBAL DAT_00239464 float
// GLOBAL DAT_00239468 int
// GLOBAL DAT_0023946c float

undefined4 func_0023934C(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_00239450;
  if (*(int *)(param_1 + 100) != 0) {
    fVar5 = (float)VectorSignedToFloat(-*(int *)(param_1 + 0x68),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(fVar5 * DAT_0023944c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar2;
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * fVar1;
    iVar2 = (int)fVar5;
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar6;
    if (fVar6 != fVar5) {
      fVar1 = DAT_00239454;
    }
    if (fVar5 <= fVar1 && (fVar6 != fVar5 && DAT_00239454 != fVar5)) {
      iVar2 = iVar2 + -1;
    }
    *(int *)(param_1 + 100) = iVar2;
    iVar2 = iVar2 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x6c) = iVar2;
  }
  iVar2 = DAT_00239458;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x68)) ||
     (uVar3 = func_0058E2B8((int *)(param_1 + 0x74)), DAT_0023945c < uVar3)) {
    uVar4 = 1;
    func_0051D2F4((int *)(param_1 + 0x74),*(int *)(param_1 + 0x68),DAT_00239460,iVar2,DAT_00239464);
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x6c)) {
    uVar4 = 1;
    func_0051D2F4((int *)(param_1 + 0x78),*(int *)(param_1 + 0x6c),iVar2,DAT_00239468,DAT_0023946c);
  }
  return uVar4;
}

