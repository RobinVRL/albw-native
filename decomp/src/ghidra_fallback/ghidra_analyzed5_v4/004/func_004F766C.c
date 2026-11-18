#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern uint *DAT_004f774c;
extern undefined4 *DAT_004f7750;
extern undefined4 DAT_004f7754;
extern float DAT_004f7758;

// USA 004F766C <- EU 004F7644 (Ghidra, non-matching)
// GLOBAL DAT_004f774c uint *
// GLOBAL DAT_004f7750 undefined4 *
// GLOBAL DAT_004f7754 undefined4
// GLOBAL DAT_004f7758 float

void func_004F766C(int param_1,float *param_2,float *param_3,float fparam_0)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    if (((*DAT_004f774c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004f774c), iVar1 != 0)) {
      *DAT_004f7750 = DAT_004f7754;
    }
    iVar1 = (**(code **)*piVar2)(piVar2,DAT_004f7750);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      func_00115C54(&local_24,param_2,param_3);
      local_30 = local_24;
      iStack_2c = iStack_20;
      iStack_28 = iStack_1c;
      func_00115D70(&local_30,&local_30,DAT_004f7758);
      piVar2[7] = piVar2[1];
      piVar2[8] = piVar2[2];
      piVar2[9] = piVar2[3];
      piVar2[4] = piVar2[1];
      piVar2[5] = piVar2[2];
      piVar2[6] = piVar2[3];
      piVar2[1] = (int)ALBW_AS_U32(local_30);
      piVar2[2] = iStack_2c;
      piVar2[3] = iStack_28;
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      fVar5 = *param_2;
      fVar6 = param_2[1];
      fVar7 = param_2[2];
      piVar2[0x19] = (int)ALBW_AS_U32(*param_3);
      piVar2[0x1a] = (int)ALBW_AS_U32(fVar3);
      piVar2[0x16] = (int)ALBW_AS_U32(fVar5);
      piVar2[0x17] = (int)ALBW_AS_U32(fVar6);
      piVar2[0x18] = (int)ALBW_AS_U32(fVar7);
      piVar2[0x1b] = (int)ALBW_AS_U32(fVar4);
      piVar2[0x1c] = (int)ALBW_AS_U32(fparam_0);
      func_004356B4(piVar2);
    }
  }
  return;
}

