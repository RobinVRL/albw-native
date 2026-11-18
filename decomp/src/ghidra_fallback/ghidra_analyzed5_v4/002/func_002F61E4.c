#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int DAT_002f64c8;
extern float DAT_002f64cc;
extern int *DAT_002f64d0;
extern undefined4 DAT_002f64e8;
extern int DAT_002f6504;
extern undefined4 *DAT_002f6508;
extern float DAT_002f650c;
extern float DAT_002f6510;
extern int DAT_002f6514;

// USA 002F61E4 <- EU 002F61C0 (Ghidra, non-matching)
// GLOBAL DAT_002f64c8 int
// GLOBAL DAT_002f64cc float
// GLOBAL DAT_002f64d0 int *
// GLOBAL DAT_002f64e8 undefined4
// GLOBAL DAT_002f6504 int
// GLOBAL DAT_002f6508 undefined4 *
// GLOBAL DAT_002f650c float
// GLOBAL DAT_002f6510 float
// GLOBAL DAT_002f6514 int

undefined4 func_002F61E4(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd0 (*(undefined4 *)(albw_frame + 0x0))
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  piVar6 = param_1 + 0x259;
  if (*(char *)((int)param_1 + 0xd45) == '\0') {
    func_0036BE78((int)piVar6);
    fVar7 = func_0058AA40(param_1);
    fVar8 = func_0058AC38(param_1);
    if ((fVar8 - DAT_002f64cc < fVar7) && (*(char *)((int)param_1 + 0xd46) == '\0')) {
      *(undefined1 *)((int)param_1 + 0xd46) = 1;
    }
  }
  else {
    iVar1 = func_0036BE78((int)piVar6);
    iVar2 = DAT_002f64c8;
    piVar4 = param_1 + 0x2df;
    piVar5 = param_1 + 0x2c3;
    switch(param_1[0x2df]) {
    case 0:
      uVar9 = func_0058AB74((int)param_1);
      if (((int)uVar9 == 0x29) && (iVar1 = func_0058A8F0((int)param_1), iVar1 != 0)) {
        func_004FABDC((int)param_1,0x2a,0,0);
        param_1[0x2c4] = 0x3c;
        param_1[0x2c5] = iVar2;
        *piVar5 = 0;
        *piVar4 = param_1[0x2df] + 1;
      }
      break;
    case 1:
      if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
        param_1[0x2c3] = param_1[0x2c3] + 1;
        goto LAB_002f6480;
      }
      param_1[0x167] = param_1[0x167] & 0xfffffffc;
      iVar2 = func_0052FBA0(*DAT_002f64d0 + 0x3dbbc,param_1[0x324]);
      if (iVar2 != 0) {
        func_00668934((undefined4 *)(iVar2 + 0x40c),2);
      }
      if ((short)param_1[0xe] != 0) {
        func_00588C14((int)param_1,1,1);
      }
      func_001509A4((int)param_1,(int *)&stack0xffffffd0,0);
      func_00150A84(param_1,(int *)&stack0xffffffd0,0);
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      iVar2 = DAT_002f6504;
      *piVar4 = param_1[0x2df] + 1;
      param_1[0x2c4] = 300;
      param_1[0x2c5] = iVar2;
      *piVar5 = 0;
      break;
    case 2:
      uVar3 = param_1[0x2c3];
      if (uVar3 < (uint)param_1[0x2c4]) {
LAB_002f63dc:
        param_1[0x2c3] = uVar3 + 1;
        return 0;
      }
      *piVar4 = 3;
      param_1[0x2c4] = 0x3c;
      param_1[0x2c5] = iVar2;
      *piVar5 = 0;
      func_0036720C((int)(param_1 + 0x35d),0x3c,0x1e,0x3c,0,3,1);
      break;
    case 3:
      uVar3 = param_1[0x2c3];
      if (uVar3 < (uint)param_1[0x2c4]) goto LAB_002f63dc;
      func_0036B758((int)piVar6);
      func_0036C408(piVar6,*DAT_002f6508);
      *piVar4 = param_1[0x2df] + 1;
      break;
    case 4:
      if (*(short *)(DAT_002f6514 + (int)param_1) != 0) {
        return 0;
      }
      if (iVar1 != 0) {
        *piVar4 = 5;
      }
      return 0;
    }
    if (param_1[0x2df] < 2) {
LAB_002f6480:
      return func_002F14EC((int)param_1,0x3c,DAT_002f6510,DAT_002f650c);
    }
  }
  return 0;
}

