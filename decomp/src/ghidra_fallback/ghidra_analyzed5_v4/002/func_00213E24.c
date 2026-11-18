#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00213f94;
extern float DAT_00213f98;
extern float DAT_00213f9c;
extern undefined4 DAT_00213fa0;
extern undefined DAT_00213fa4;
extern int DAT_00213fbc;
extern char s__SE_GueldMan_MOVE_00213fa7[];
extern char s_cf_00213fa7[];
extern undefined4 _DAT_00213fa4;

// USA 00213E24 <- EU 00213E24 (Ghidra, non-matching)
// GLOBAL DAT_00213f94 float
// GLOBAL DAT_00213f98 float
// GLOBAL DAT_00213f9c float
// GLOBAL DAT_00213fa0 undefined4
// GLOBAL DAT_00213fa4 undefined
// GLOBAL DAT_00213fbc int
// GLOBAL s_cf_00213fa7 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00213E24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((float *)(albw_frame + 0xc))
  func_005211F4(param_1,DAT_00213f94,*(float *)(param_1 + 0x938));
  iVar3 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x974);
  *(float *)(param_1 + 0x974) = fVar4 + (DAT_00213f98 - fVar4) * (DAT_00213f9c / fVar5);
  func_00115154(&local_18,local_14,*(uint *)(param_1 + 0x978));
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x974) * local_18;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x974) * local_14[0];
  fVar4 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar4);
  if (*(uint *)(param_1 + 0x960) <= *(uint *)(param_1 + 0x95c)) {
    return func_0065D8B8((undefined4 *)(param_1 + 0x8bc),3);
  }
  *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 1;
  uVar2 = _DAT_00213fa4;
  uVar1 = DAT_00213fa0;
  if (*(char *)(param_1 + 0x951) == '\0') {
LAB_00213f24:
    *(undefined1 *)(param_1 + 0x9c1) = 1;
    *(undefined4 *)(param_1 + 0x974) = uVar1;
    return func_0065D8B8((undefined4 *)(param_1 + 0x8bc),3);
  }
  if (*(char *)(param_1 + 0x952) == '\0') {
    *(undefined4 *)(param_1 + 0x96c) = 0x1e;
    *(undefined4 *)(param_1 + 0x970) = uVar2;
    *(undefined4 *)(param_1 + 0x968) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x96c) <= *(uint *)(param_1 + 0x968)) goto LAB_00213f24;
    *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
  }
  local_1c = s__SE_GueldMan_MOVE_00213fa7 + 1;
  local_20 = DAT_00213fbc;
  return func_001507D8(param_1,&local_20,0);
}

