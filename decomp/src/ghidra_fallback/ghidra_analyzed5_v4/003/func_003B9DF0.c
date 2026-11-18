#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002B840C(int param_1,float *param_2,float fparam_0,float fparam_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b9efc;
extern uint *DAT_003b9f00;
extern undefined4 *DAT_003b9f04;
extern undefined4 DAT_003b9f08;
extern float DAT_003b9f0c;
extern float DAT_003b9f10;
extern int *DAT_003b9f14;
extern int DAT_003b9f18;

// USA 003B9DF0 <- EU 003B9DCC (Ghidra, non-matching)
// GLOBAL DAT_003b9efc int *
// GLOBAL DAT_003b9f00 uint *
// GLOBAL DAT_003b9f04 undefined4 *
// GLOBAL DAT_003b9f08 undefined4
// GLOBAL DAT_003b9f0c float
// GLOBAL DAT_003b9f10 float
// GLOBAL DAT_003b9f14 int *
// GLOBAL DAT_003b9f18 int

undefined4 func_003B9DF0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003b9efc + 0x3dbbc,*(uint *)(param_1[0x12] + 0xb0c));
  if (((*DAT_003b9f00 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b9f00), iVar2 != 0)) {
    *DAT_003b9f04 = DAT_003b9f08;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003b9f04), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = param_1[0x12];
  }
  else {
    local_20 = ALBW_AS_F32(puVar1[0xf4]);
    uStack_18 = puVar1[0xf6];
    local_1c = *(undefined4 *)(param_1[0x12] + 0x3d4);
    func_002B840C(param_1[0x12],&local_20,DAT_003b9f10,DAT_003b9f0c);
    iVar2 = param_1[0x12];
    fVar3 = *(float *)(iVar2 + 0x3d0) - **(float **)(*DAT_003b9f14 + 0x1c);
    fVar4 = *(float *)(iVar2 + 0x3d8) - (*(float **)(*DAT_003b9f14 + 0x1c))[2];
    if (DAT_003b9f18 < (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4))) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0xb0c) = 0;
  return (**(code **)(*param_1 + 0x138))(param_1,6,1);
}

