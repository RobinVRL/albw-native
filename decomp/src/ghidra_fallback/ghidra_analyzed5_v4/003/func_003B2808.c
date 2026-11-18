#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b28d8;
extern uint *DAT_003b28dc;
extern undefined4 *DAT_003b28e0;
extern undefined4 DAT_003b28e4;
extern float DAT_003b28e8;
extern float DAT_003b28ec;

// USA 003B2808 <- EU 003B27E4 (Ghidra, non-matching)
// GLOBAL DAT_003b28d8 int *
// GLOBAL DAT_003b28dc uint *
// GLOBAL DAT_003b28e0 undefined4 *
// GLOBAL DAT_003b28e4 undefined4
// GLOBAL DAT_003b28e8 float
// GLOBAL DAT_003b28ec float

void func_003B2808(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  piVar1 = (int *)func_0052FBA0(*DAT_003b28d8 + 0x3dbbc,*(uint *)(param_1 + 0x90));
  if (((*DAT_003b28dc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b28dc), iVar2 != 0)) {
    *DAT_003b28e0 = DAT_003b28e4;
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_003b28e0), iVar2 == 0)) {
    piVar1 = (int *)0x0;
  }
  if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x4f1) != '\0')) {
    local_20 = DAT_003b28e8;
    local_1c = DAT_003b28e8;
    local_18 = DAT_003b28e8;
    fVar3 = DAT_003b28e8;
    func_004D80A4(&local_20,*(uint *)(*(int *)(param_1 + 0x48) + 1000),DAT_003b28ec);
    local_1c = fVar3;
    (**(code **)(*piVar1 + 0x5c))
              (piVar1,*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x2cc),&local_20);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}

