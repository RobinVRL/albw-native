#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010DB90(void);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004ADEDC(int param_1,int *param_2);
extern int func_004AE144(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_004AE81C(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
extern undefined4 *DAT_004af26c;
extern undefined4 DAT_004af270;
extern undefined4 DAT_004af274;

// USA 004AF18C <- EU 004AF164 (Ghidra, non-matching)
// GLOBAL DAT_004af26c undefined4 *
// GLOBAL DAT_004af270 undefined4
// GLOBAL DAT_004af274 undefined4

int func_004AF18C(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = DAT_004af26c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  piVar2 = (int *)func_0010DB90();
  local_1c = DAT_004af270;
  local_20 = DAT_004af274;
  puVar4 = (uint *)0x1;
  piVar3 = func_004A107C(0,(int)&local_20,piVar2,1,0);
  if (piVar3 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*puVar1,piVar3);
  }
  func_004ADEDC(param_1,(int *)0x0);
  func_004AE144(param_1,extraout_r1,piVar2,(uint)puVar4);
  func_004AE81C(param_1,extraout_r1_00,piVar2,puVar4);
  (**(code **)(*piVar3 + 0x14))(piVar3);
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return param_1;
}

