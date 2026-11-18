#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern float DAT_00525d88;
extern float DAT_00525d8c;
extern undefined4 DAT_00525d90;
extern float DAT_00525d94;
extern int *DAT_00525d98;
extern uint *DAT_00525d9c;
extern int *DAT_00525da0;
extern undefined4 *DAT_00525da4;
extern undefined4 DAT_00525da8;

// USA 00525BE0 <- EU 00525BB8 (Ghidra, non-matching)
// GLOBAL DAT_00525d88 float
// GLOBAL DAT_00525d8c float
// GLOBAL DAT_00525d90 undefined4
// GLOBAL DAT_00525d94 float
// GLOBAL DAT_00525d98 int *
// GLOBAL DAT_00525d9c uint *
// GLOBAL DAT_00525da0 int *
// GLOBAL DAT_00525da4 undefined4 *
// GLOBAL DAT_00525da8 undefined4

undefined4 func_00525BE0(int param_1,float *param_2,float fparam_0)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  fVar4 = DAT_00525d88;
  if ((*(char *)(param_1 + 0x4a0) != '\x01') &&
     (fVar4 = DAT_00525d8c, *(char *)(param_1 + 0x4a0) != '\x02')) {
    return 0;
  }
  func_00115154(&local_44,&local_40,*(uint *)(param_1 + 1000));
  local_24 = fVar4 * local_44;
  local_1c = fVar4 * local_40;
  local_20 = DAT_00525d90;
  func_00115C54(param_2,(float *)(param_1 + 0x4cc),&local_24);
  if (fparam_0 != DAT_00525d94) {
    fVar4 = DAT_00525d94;
    if (*(uint *)(param_1 + 0x57c) == 0) {
      pfVar2 = *(float **)(*DAT_00525da0 + 0x1c);
      local_3c = *pfVar2;
      local_38 = pfVar2[1];
      local_34 = pfVar2[2];
    }
    else {
      puVar1 = (undefined4 *)func_0052FBA0(*DAT_00525d98 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
      if (((*DAT_00525d9c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00525d9c), iVar3 != 0)) {
        *DAT_00525da4 = DAT_00525da8;
      }
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar1)(puVar1,DAT_00525da4), iVar3 == 0)) {
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      local_3c = ALBW_AS_F32(puVar1[0xf4]);
      local_38 = ALBW_AS_F32(puVar1[0xf5]);
      local_34 = ALBW_AS_F32(puVar1[0xf6]);
    }
    func_00115C70(&local_30,param_2,&local_3c);
    if (local_30 * local_30 + local_28 * local_28 < fparam_0 * fparam_0) {
      local_2c = fVar4;
      func_0068A3EC(&local_30,fparam_0);
      func_00115C54(param_2,&local_3c,&local_30);
    }
  }
  return 1;
}

