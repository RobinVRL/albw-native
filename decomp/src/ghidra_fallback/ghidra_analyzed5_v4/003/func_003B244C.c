#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b2510;
extern uint *DAT_003b2514;
extern undefined4 *DAT_003b2518;
extern undefined4 DAT_003b251c;
extern float DAT_003b2520;
extern float DAT_003b2524;

// USA 003B244C <- EU 003B2428 (Ghidra, non-matching)
// GLOBAL DAT_003b2510 int *
// GLOBAL DAT_003b2514 uint *
// GLOBAL DAT_003b2518 undefined4 *
// GLOBAL DAT_003b251c undefined4
// GLOBAL DAT_003b2520 float
// GLOBAL DAT_003b2524 float

void func_003B244C(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  piVar1 = (int *)func_0052FBA0(*DAT_003b2510 + 0x3dbbc,*(uint *)(param_1 + 0x90));
  if (((*DAT_003b2514 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b2514), iVar2 != 0)) {
    *DAT_003b2518 = DAT_003b251c;
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_003b2518), iVar2 == 0)) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    local_20 = DAT_003b2520;
    local_1c = DAT_003b2520;
    local_18 = DAT_003b2520;
    fVar3 = DAT_003b2520;
    func_004D80A4(&local_20,*(uint *)(*(int *)(param_1 + 0x48) + 1000),DAT_003b2524);
    local_1c = fVar3;
    (**(code **)(*piVar1 + 0x5c))
              (piVar1,*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x2cc),&local_20);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

