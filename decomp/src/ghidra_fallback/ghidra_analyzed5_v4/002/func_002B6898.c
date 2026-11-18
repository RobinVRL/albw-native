#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_00687DB0(undefined4 *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_002b6ac8;
extern uint *DAT_002b6acc;
extern undefined4 *DAT_002b6ad0;
extern undefined4 DAT_002b6ad4;
extern float DAT_002b6ad8;
extern undefined4 DAT_002b6adc;
extern float DAT_002b6ae0;
extern float DAT_002b6ae4;

// USA 002B6898 <- EU 002B6874 (Ghidra, non-matching)
// GLOBAL DAT_002b6ac8 int *
// GLOBAL DAT_002b6acc uint *
// GLOBAL DAT_002b6ad0 undefined4 *
// GLOBAL DAT_002b6ad4 undefined4
// GLOBAL DAT_002b6ad8 float
// GLOBAL DAT_002b6adc undefined4
// GLOBAL DAT_002b6ae0 float
// GLOBAL DAT_002b6ae4 float

undefined4 func_002B6898(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_24 ((float *)(albw_frame + 0x1c))
  piVar5 = DAT_002b6ac8;
  if (*(int *)(param_1 + 0xf1c) < 1) {
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xf1c) == 0) {
      puVar1 = (uint *)0x0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xf18);
      if (*(int *)(param_1 + 0xf14) <= iVar2) {
        iVar2 = iVar2 - *(int *)(param_1 + 0xf14);
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0xf10) + iVar2 * 4);
    }
    uVar6 = *puVar1;
  }
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_002b6ac8 + 0x3dbbc,uVar6);
  if (((*DAT_002b6acc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002b6acc), iVar2 != 0)) {
    *DAT_002b6ad0 = DAT_002b6ad4;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar3)(puVar3,DAT_002b6ad0), iVar2 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    local_28 = DAT_002b6adc;
    piVar5 = func_0052FCA4(*piVar5 + 0x3dbbc,&local_28,*(int **)(*piVar5 + 0x3dbc0));
    puVar3 = func_00687DB0((undefined4 *)*piVar5);
    if (puVar3 != (undefined4 *)0x0) {
      func_00115C70(&local_40,(float *)(puVar3 + 0xf4),(float *)(param_1 + 0x3d0));
      if (((uint)ALBW_AS_U32(DAT_002b6ae0) <
           (uint)ALBW_AS_U32((*(float *)(param_1 + 0x958) * local_40 + *(float *)(param_1 + 0x95c) * local_3c +
                 *(float *)(param_1 + 0x960) * local_38))) &&
         (DAT_002b6ae4 <
          ALBW_AS_F32(puVar3[0xf7]) * *(float *)(param_1 + 0x958) +
          ALBW_AS_F32(puVar3[0xf8]) * *(float *)(param_1 + 0x95c) +
          ALBW_AS_F32(puVar3[0xf9]) * *(float *)(param_1 + 0x960))) {
        pfVar4 = (float *)func_00520FC0();
        func_00115C70(&local_40,(float *)(puVar3 + 0xf4),pfVar4);
        pfVar4 = (float *)func_00520FC0();
        func_00115C70(afStack_34,(float *)(param_1 + 0x3d0),pfVar4);
        func_00115E10(afStack_24,&local_40,afStack_34);
        iVar2 = func_0068C690(&local_40);
        *param_2 = iVar2 + 0x40000000;
      }
    }
    return 0;
  }
  pfVar4 = (float *)func_00520FC0();
  func_00115C70(&local_40,pfVar4,(float *)(puVar3 + 0xf4));
  func_00115DC8(&local_40);
  func_00115D70(&local_40,&local_40,DAT_002b6ad8);
  pfVar4 = (float *)func_00520FC0();
  func_00115C54(&local_40,&local_40,pfVar4);
  iVar2 = func_004D80EC((float *)(param_1 + 0x3d0),&local_40,*(int *)(param_1 + 1000));
  *param_2 = iVar2;
  return 1;
}

