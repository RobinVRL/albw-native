#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002bc8e8;
extern uint *DAT_002bc8ec;
extern undefined4 *DAT_002bc8f0;
extern undefined4 DAT_002bc8f4;
extern float DAT_002bc8f8;
extern float DAT_002bc8fc;
extern float DAT_002bc900;
extern float DAT_002bc904;
extern int *DAT_002bc908;

// USA 002BC7F8 <- EU 002BC7D4 (Ghidra, non-matching)
// GLOBAL DAT_002bc8e8 int *
// GLOBAL DAT_002bc8ec uint *
// GLOBAL DAT_002bc8f0 undefined4 *
// GLOBAL DAT_002bc8f4 undefined4
// GLOBAL DAT_002bc8f8 float
// GLOBAL DAT_002bc8fc float
// GLOBAL DAT_002bc900 float
// GLOBAL DAT_002bc904 float
// GLOBAL DAT_002bc908 int *

undefined4 func_002BC7F8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002bc8e8 + 0x3dbbc,*(uint *)(param_1 + 0x7a0));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_002bc8ec & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002bc8ec), iVar2 != 0)) {
      *DAT_002bc8f0 = DAT_002bc8f4;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002bc8f0);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
    if ((puVar3 != (undefined4 *)0x0) &&
       (iVar2 = func_00525BE0((int)puVar3,local_20,DAT_002bc8f8), iVar2 != 0)) {
      func_004D838C((float *)(param_1 + 0x3d0),local_20,DAT_002bc904,DAT_002bc900,DAT_002bc8fc);
      if ((*DAT_002bc908 != 0) &&
         (pfVar4 = *(float **)(*DAT_002bc908 + 0x1c), local_20[0] = *pfVar4 - local_20[0],
         local_18 = pfVar4[2] - local_18,
         0x3fbfffff < (int)ALBW_AS_U32(SQRT(local_20[0] * local_20[0] + local_18 * local_18)))) {
        return 0;
      }
    }
  }
  return func_00662A14((undefined4 *)(param_1 + 0x8bc),7);
}

