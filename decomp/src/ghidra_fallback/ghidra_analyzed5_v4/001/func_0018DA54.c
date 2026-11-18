#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0028F2A8(int param_1);
extern int func_0028FBF0(int param_1,float *param_2);
extern int func_002B76FC(int param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0018dbf8;
extern float DAT_0018dbfc;
extern float DAT_0018dc00;
extern int *DAT_0018dc04;
extern uint *DAT_0018dc08;
extern float DAT_0018dc0c;
extern float DAT_0018dc10;
extern undefined4 *DAT_0018dc14;
extern undefined4 DAT_0018dc18;

// USA 0018DA54 <- EU 0018DA54 (Ghidra, non-matching)
// GLOBAL DAT_0018dbf8 int *
// GLOBAL DAT_0018dbfc float
// GLOBAL DAT_0018dc00 float
// GLOBAL DAT_0018dc04 int *
// GLOBAL DAT_0018dc08 uint *
// GLOBAL DAT_0018dc0c float
// GLOBAL DAT_0018dc10 float
// GLOBAL DAT_0018dc14 undefined4 *
// GLOBAL DAT_0018dc18 undefined4

void func_0018DA54(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_0018dbf8;
  if (((*(int *)(param_1 + 0x57c) != 0) ||
      (iVar2 = func_0028F2A8(*DAT_0018dbf8), fVar4 = DAT_0018dbfc, iVar2 == 0)) &&
     (fVar4 = DAT_0018dc0c, *(char *)(param_1 + 0x55e) == '\0')) {
    fVar4 = DAT_0018dc10;
  }
  if (*(float *)(param_1 + 0x51c) < fVar4) {
    fVar4 = *(float *)(param_1 + 0x51c);
  }
  fVar5 = DAT_0018dc00;
  if (fVar4 != DAT_0018dc00) {
    func_00115154(&local_30,&local_2c,*(uint *)(param_1 + 1000));
    if (*(uint *)(param_1 + 0x57c) == 0) {
      local_28 = local_30 * fVar4;
      local_20 = local_2c * fVar4;
      local_24 = fVar5;
      func_0028FBF0(*piVar1,&local_28);
    }
    else {
      puVar3 = (undefined4 *)func_0052FBA0(*DAT_0018dc04 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
      if (((*DAT_0018dc08 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0018dc08), iVar2 != 0)) {
        *DAT_0018dc14 = DAT_0018dc18;
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar3)(puVar3,DAT_0018dc14), iVar2 == 0)) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x2d7) = 1;
        return;
      }
      local_28 = local_30 * fVar4;
      local_20 = local_2c * fVar4;
      local_24 = fVar5;
      func_002B76FC((int)puVar3,&local_28);
    }
  }
  fVar4 = *(float *)(param_1 + 0x51c) - fVar4;
  *(float *)(param_1 + 0x51c) = fVar4;
  if (fVar4 <= fVar5) {
    func_00659688((undefined4 *)(param_1 + 0x49c),5);
  }
  return;
}

