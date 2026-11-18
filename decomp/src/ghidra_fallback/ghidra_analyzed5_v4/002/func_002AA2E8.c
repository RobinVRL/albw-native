#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00125A6C(int param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern int *DAT_002aa3c0;
extern uint *DAT_002aa3c4;
extern undefined4 *DAT_002aa3c8;
extern undefined4 DAT_002aa3cc;

// USA 002AA2E8 <- EU 002AA2C4 (Ghidra, non-matching)
// GLOBAL DAT_002aa3c0 int *
// GLOBAL DAT_002aa3c4 uint *
// GLOBAL DAT_002aa3c8 undefined4 *
// GLOBAL DAT_002aa3cc undefined4

undefined4 func_002AA2E8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = func_0058AB74((int)param_1);
  if (*(char *)((int)param_1 + 0x8ff) == '\0' && (int)uVar5 == 7) {
    fVar3 = func_0058AA40(param_1);
    fVar4 = func_0058AC38(param_1);
    if (fVar3 != fVar4) goto LAB_002aa320;
  }
  func_004F8638(param_1,0xff);
  param_1[0x167] = param_1[0x167] | 0x1000;
LAB_002aa320:
  if ((*(char *)((int)param_1 + 0x8ff) != '\0') &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_002aa3c0 + 0x3dbbc,param_1[0x238]),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_002aa3c4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002aa3c4), iVar2 != 0)) {
      *DAT_002aa3c8 = DAT_002aa3cc;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002aa3c8);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return func_00125A6C((int)puVar1);
    }
  }
  return 0;
}

