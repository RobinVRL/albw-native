#include "ghidra_types.h"

extern int func_002EC1B8(int param_1,int param_2);
extern int func_002F5CD4(int param_1,int param_2);
extern int func_00360AD0(int *param_1);
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern undefined DAT_0000001b;
extern float DAT_002ea8b8;
extern float DAT_002ea8bc;
extern float DAT_002ea8c0;
extern float DAT_002ea8c4;
extern undefined4 *DAT_002ea8c8;
extern undefined4 DAT_002ea8cc;
extern int DAT_002ea8d0;

// USA 002EA7E4 <- EU 002EA7C0 (Ghidra, non-matching)
// GLOBAL DAT_0000001b undefined
// GLOBAL DAT_002ea8b8 float
// GLOBAL DAT_002ea8bc float
// GLOBAL DAT_002ea8c0 float
// GLOBAL DAT_002ea8c4 float
// GLOBAL DAT_002ea8c8 undefined4 *
// GLOBAL DAT_002ea8cc undefined4
// GLOBAL DAT_002ea8d0 int

uint func_002EA7E4(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *fparam_0;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  func_0068C794((float *)(param_1 + 0xd4c),DAT_002ea8c0,DAT_002ea8b8,DAT_002ea8bc,DAT_002ea8b8);
  func_002EC1B8(param_1,1);
  uVar6 = func_0058AB74(param_1);
  puVar5 = (undefined4 *)uVar6;
  if (puVar5 == (undefined4 *)&DAT_0000001b) {
    lVar7 = func_0058ACC8(param_1,DAT_002ea8c4);
    if ((int)lVar7 != 0) {
      func_0036C09C(param_1 + 0x964,2);
    }
    fparam_0 = DAT_002ea8c8;
    lVar7 = func_0058ACC8(param_1,ALBW_AS_F32(DAT_002ea8c8));
    uVar1 = DAT_002ea8cc;
    if ((int)lVar7 == 0) {
      iVar4 = func_0058A8F0(param_1);
      if ((iVar4 != 0) ||
         (puVar5 = (undefined4 *)ALBW_PTR_BITS(func_0058AA40(param_1)), fparam_0 = puVar5,
         DAT_002ea8d0 < (int)puVar5)) {
        puVar5 = (undefined4 *)(param_1 + 0x8c8);
        func_006640EC(puVar5,0xf,ALBW_AS_F32(fparam_0));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb10) = 0x1e;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      piVar3 = (int *)func_002F5CD4(param_1,0);
      puVar5 = (undefined4 *)0x0;
      if (piVar3 != (int *)0x0) {
        bVar2 = func_00360AD0(piVar3);
        return (uint)bVar2;
      }
    }
  }
  return (uint)puVar5;
}

