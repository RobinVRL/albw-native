#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00230934;
extern uint *DAT_00230938;
extern undefined4 *DAT_0023093c;
extern undefined4 DAT_00230940;
extern float DAT_00230944;
extern float DAT_00230948;
extern float DAT_0023094c;
extern int *DAT_00230950;

// USA 002307E0 <- EU 002307E0 (Ghidra, non-matching)
// GLOBAL DAT_00230934 int *
// GLOBAL DAT_00230938 uint *
// GLOBAL DAT_0023093c undefined4 *
// GLOBAL DAT_00230940 undefined4
// GLOBAL DAT_00230944 float
// GLOBAL DAT_00230948 float
// GLOBAL DAT_0023094c float
// GLOBAL DAT_00230950 int *

void func_002307E0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_00230934 + 0x3dbbc,*(uint *)(param_1 + 0x134));
  if (((*DAT_00230938 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00230938), iVar3 != 0)) {
    *DAT_0023093c = DAT_00230940;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0023093c), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
    if (((*(float *)(param_1 + 0xb4) == ALBW_AS_F32(puVar2[0xf4])) &&
        (*(float *)(param_1 + 0xb8) == ALBW_AS_F32(puVar2[0xf5]))) &&
       (*(float *)(param_1 + 0xbc) == ALBW_AS_F32(puVar2[0xf6]))) {
      bVar1 = 1;
    }
    func_004D838C((float *)(param_1 + 0xb4),(float *)(puVar2 + 0xf4),DAT_0023094c,DAT_00230948,
                  DAT_00230944);
    uStack_1c = *(undefined4 *)(param_1 + 0xb8);
    local_20 = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xf0);
    local_18 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xf4);
    iVar3 = *(int *)(*DAT_00230950 + 0x18);
    func_001E8268(iVar3,(int *)(param_1 + 0xac),&local_20,(undefined4 *)(param_1 + 0xc0));
    bVar1 = bVar1 & (byte)((uint)*(undefined4 *)(iVar3 + 0x10c) >> 0x1f);
  }
  *(byte *)(param_1 + 0x130) = bVar1;
  return;
}

