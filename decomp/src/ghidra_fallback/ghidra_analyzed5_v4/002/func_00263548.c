#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052F654(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0026361c;
extern uint DAT_00263620;

// USA 00263548 <- EU 00263570 (Ghidra, non-matching)
// GLOBAL DAT_0026361c undefined4
// GLOBAL DAT_00263620 uint

void func_00263548(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  float *pfVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  pfVar3 = *(float **)(param_1 + 0xa14);
  fVar4 = func_0051CF68(pfVar3 + 3,*pfVar3,pfVar3[1],pfVar3[2]);
  pfVar3[4] = fVar4;
  uVar1 = func_0052F654(*(int *)(param_1 + 0xa14));
  *(uint *)(param_1 + 1000) = uVar1;
  func_004D80A4((float *)(param_1 + 0x3dc),uVar1,*(float *)(param_1 + 0xa28));
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0026361c;
  local_18 = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0xa10);
  uVar1 = func_0058E2B8(&local_18);
  if (uVar1 < DAT_00263620) {
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0xa1c);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa20);
    if (*(char *)(param_1 + 0xa48) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    func_00660490((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}

