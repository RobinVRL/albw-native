#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0019622c;
extern int *DAT_00196230;
extern int DAT_00196234;
extern uint *DAT_00196238;
extern int *DAT_0019623c;
extern undefined4 DAT_00196240;
extern undefined4 *DAT_00196244;
extern int *DAT_00196248;
extern int DAT_0019624c;
extern float DAT_00196250;
extern int DAT_00196254;
extern int DAT_00196258;
extern float DAT_0019625c;
extern int *DAT_00196260;

// USA 00196024 <- EU 00196024 (Ghidra, non-matching)
// GLOBAL DAT_0019622c float
// GLOBAL DAT_00196230 int *
// GLOBAL DAT_00196234 int
// GLOBAL DAT_00196238 uint *
// GLOBAL DAT_0019623c int *
// GLOBAL DAT_00196240 undefined4
// GLOBAL DAT_00196244 undefined4 *
// GLOBAL DAT_00196248 int *
// GLOBAL DAT_0019624c int
// GLOBAL DAT_00196250 float
// GLOBAL DAT_00196254 int
// GLOBAL DAT_00196258 int
// GLOBAL DAT_0019625c float
// GLOBAL DAT_00196260 int *

undefined4 func_00196024(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_30 (*(float *)(albw_frame + 0x30))
  uVar4 = DAT_00196240;
  piVar3 = DAT_0019623c;
  puVar2 = DAT_00196238;
  bVar1 = false;
  puVar9 = *(undefined4 **)(DAT_00196234 + *DAT_00196230);
  local_44 = DAT_0019622c;
  local_40 = DAT_0019622c;
  local_3c = DAT_0019622c;
  for (puVar7 = *(undefined4 **)(*DAT_00196230 + 0x3dbc0); puVar7 != puVar9; puVar7 = puVar7 + 1) {
    puVar8 = (undefined4 *)*puVar7;
    if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00196238), iVar5 != 0)) {
      *DAT_00196244 = uVar4;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar8)(puVar8,DAT_00196244), iVar5 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if ((puVar8 != (undefined4 *)0x0 && puVar8 != param_1) &&
       ((iVar5 = func_00588BE4((int)puVar8), iVar5 == *piVar3 ||
        (iVar5 = func_00588BE4((int)puVar8), iVar5 == *DAT_00196248)))) {
      func_00115C70(&local_38,(float *)(param_1 + 0xf4),(float *)(puVar8 + 0xf4));
      local_54 = local_38;
      uStack_50 = uStack_34;
      fStack_4c = fStack_30;
      if ((int)ALBW_AS_U32(SQRT(local_38 * local_38 + fStack_30 * fStack_30)) <= DAT_0019624c) {
        func_00115DC8(&local_54);
        func_00115C54(&local_44,&local_44,&local_54);
        bVar1 = true;
      }
    }
  }
  func_0014FAFC((int)param_1,param_1[0xfa],DAT_00196250);
  if (bVar1) {
    if (DAT_00196254 <
        (int)ALBW_AS_U32(SQRT(ALBW_AS_F32(param_1[0xf4]) * ALBW_AS_F32(param_1[0xf4]) +
                  ALBW_AS_F32(param_1[0xf6]) * ALBW_AS_F32(param_1[0xf6])))) {
      iVar5 = func_0068C690(&local_44);
      iVar5 = iVar5 + 0x40000000;
    }
    else {
      iVar5 = func_0068C690(&local_44);
    }
    param_1[0x117] = iVar5;
    func_0051D2F4(param_1 + 0xfa,iVar5,1,DAT_00196258,DAT_0019625c);
  }
  else {
    uVar6 = func_00111A64((uint *)(*DAT_00196260 + 0x660));
    if ((uint)((ulonglong)uVar6 * 100 >> 0x20) < 5) {
      return func_00659A54(param_1 + 0x107,7);
    }
  }
  return 0;
}

