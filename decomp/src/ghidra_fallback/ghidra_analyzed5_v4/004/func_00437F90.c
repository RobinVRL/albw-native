#include "ghidra_types.h"

extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00438078(int param_1,uint param_2);
extern float DAT_00438054;

// USA 00437F90 <- EU 00437F70 (Ghidra, non-matching)
// GLOBAL DAT_00438054 float

undefined4 func_00437F90(int *param_1,uint param_2,int *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar3;
  bool bVar4;
  float fVar5;
  
  uVar1 = (uint)*(char *)((int)param_1 + 0xd);
  fVar5 = DAT_00438054;
  if (uVar1 == 3) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0xe);
    if (*(byte *)((int)param_1 + 0xe) == 3) goto joined_r0x00437fc4;
  }
  else {
    uVar2 = param_2;
    if (uVar1 == 1) {
      if (*(char *)((int)param_1 + 0xe) == '\x01') {
        func_001B6A48(param_1,param_2,param_3,(int)param_4);
        goto joined_r0x00437fc4;
      }
      goto LAB_00437fec;
    }
  }
  bVar4 = uVar1 != 4;
  if (!bVar4) {
    uVar1 = (uint)*(byte *)((int)param_1 + 0xe);
  }
  if (bVar4 || uVar1 != 4) {
LAB_00437fec:
    func_00438078((int)param_1,param_2);
    return func_001B6C2C(param_1,extraout_r1,param_3,(int)param_4);
  }
  piVar3 = param_3;
  func_001B6C2C(param_1,uVar2,param_3,(int)param_4);
  func_001B6A48(param_1,extraout_r1_00,piVar3,(int)param_4);
joined_r0x00437fc4:
  if (param_3 != (int *)0x0) {
    func_002317C0((undefined2 *)(param_1 + 0x20),fVar5);
  }
  return func_00438078((int)param_1,param_2);
}

