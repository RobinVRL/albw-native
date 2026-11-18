#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0018E15C(int param_1);
extern int func_0028F2A8(int param_1);
extern int func_0028FBF0(int param_1,float *param_2);
extern int func_002B76FC(int param_1,float *param_2);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int *DAT_0018cac4;
extern float DAT_0018cac8;
extern float DAT_0018cacc;
extern int *DAT_0018cad0;
extern uint *DAT_0018cad4;
extern float DAT_0018cad8;
extern float DAT_0018cadc;
extern undefined4 *DAT_0018cae0;
extern undefined4 DAT_0018cae4;
extern int DAT_0018cb00;
extern int *DAT_0018cb04;
extern char s_SE_PL_HookShot_RETURN_0018cae8[];

// USA 0018C8C0 <- EU 0018C8C0 (Ghidra, non-matching)
// GLOBAL DAT_0018cac4 int *
// GLOBAL DAT_0018cac8 float
// GLOBAL DAT_0018cacc float
// GLOBAL DAT_0018cad0 int *
// GLOBAL DAT_0018cad4 uint *
// GLOBAL DAT_0018cad8 float
// GLOBAL DAT_0018cadc float
// GLOBAL DAT_0018cae0 undefined4 *
// GLOBAL DAT_0018cae4 undefined4
// GLOBAL DAT_0018cb00 int
// GLOBAL DAT_0018cb04 int *
// GLOBAL s_SE_PL_HookShot_RETURN_0018cae8 string

undefined4 func_0018C8C0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define afStack_38 ((float *)(albw_frame + 0x28))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  func_0018E15C(param_1);
  piVar1 = DAT_0018cac4;
  local_48 = *(float *)(param_1 + 0x4c0);
  uStack_44 = *(undefined4 *)(param_1 + 0x4c4);
  uStack_40 = *(undefined4 *)(param_1 + 0x4c8);
  pfVar5 = (float *)(param_1 + 0x4cc);
  fVar6 = *pfVar5 - *(float *)(param_1 + 0x4c0);
  fVar7 = *(float *)(param_1 + 0x4d4) - *(float *)(param_1 + 0x4c8);
  fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
  if (((*(int *)(param_1 + 0x57c) != 0) ||
      (iVar3 = func_0028F2A8(*DAT_0018cac4), fVar7 = DAT_0018cac8, iVar3 == 0)) &&
     (fVar7 = DAT_0018cad8, *(char *)(param_1 + 0x55e) == '\0')) {
    fVar7 = DAT_0018cadc;
  }
  fVar2 = DAT_0018cacc;
  fVar6 = fVar6 - fVar7;
  fVar7 = fVar6;
  if (fVar6 <= DAT_0018cacc) {
    fVar7 = DAT_0018cacc;
  }
  fVar9 = DAT_0018cacc;
  func_00115C70(&fStack_54,(float *)(param_1 + 0x4c0),pfVar5);
  local_50 = fVar9;
  func_0068A3EC(&fStack_54,fVar7);
  uVar8 = *(undefined4 *)(param_1 + 0x4c4);
  func_00115C54((float *)(param_1 + 0x4c0),pfVar5,&fStack_54);
  *(undefined4 *)(param_1 + 0x4c4) = uVar8;
  func_00115C70(afStack_38,(float *)(param_1 + 0x4c0),&local_48);
  if (*(uint *)(param_1 + 0x57c) == 0) {
    func_0028FBF0(*piVar1,afStack_38);
  }
  else {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_0018cad0 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
    if (((*DAT_0018cad4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0018cad4), iVar3 != 0)) {
      *DAT_0018cae0 = DAT_0018cae4;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0018cae0), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 0;
    }
    func_002B76FC((int)puVar4,afStack_38);
  }
  if (fVar6 <= fVar2) {
    return func_00659688((undefined4 *)(param_1 + 0x49c),4);
  }
  local_24 = s_SE_PL_HookShot_RETURN_0018cae8;
  local_28 = DAT_0018cb00;
  return func_004E9BEC(*DAT_0018cb04,&local_28,0);
}

