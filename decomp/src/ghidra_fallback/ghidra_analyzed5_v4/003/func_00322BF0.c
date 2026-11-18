#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_0010EE40(void);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF5DC(uint param_1);
extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601390(void);
extern int func_00601600(undefined4 param_1);
extern int func_00601658(int param_1);
extern int func_006017F0(void);
extern undefined4 *DAT_00322cc0;
extern undefined4 DAT_00322cc4;
extern int DAT_00322cc8;
extern int DAT_00322ccc;

// USA 00322BF0 <- EU 00322BCC (Ghidra, non-matching)
// GLOBAL DAT_00322cc0 undefined4 *
// GLOBAL DAT_00322cc4 undefined4
// GLOBAL DAT_00322cc8 int
// GLOBAL DAT_00322ccc int

undefined4 func_00322BF0(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_18 = param_4;
  (**(code **)(*param_1 + 0x7c))(param_1);
  puVar1 = DAT_00322cc0;
  func_0010E0E0((int *)*DAT_00322cc0);
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1,param_3);
  uVar2 = func_001022F4();
  uVar3 = func_0010EE40();
  func_003E35DC(uVar3,uVar2);
  func_00601390();
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1_00,param_3);
  func_006003D8(DAT_00322cc4,&local_18);
  uVar2 = 0;
  if (local_18 != 0) {
    uVar2 = func_006017F0();
  }
  func_00601600(uVar2);
  func_005FF760();
  iVar4 = param_1[0x49];
  func_005FEF2C(0x400,extraout_r1_01,param_3);
  func_005FF5DC(param_1[iVar4 + 0x4c]);
  func_005FEF2C(0x410,extraout_r1_02,param_3);
  func_005FF5DC(param_1[iVar4 + 0x57]);
  if (*(char *)((int)param_1 + 0x18a) == '\0') {
    func_005FEF2C(DAT_00322cc8,extraout_r1_03,param_3);
    func_005FF5DC(param_1[iVar4 + 0x4f]);
    iVar4 = DAT_00322ccc;
  }
  else {
    iVar4 = 0x400;
  }
  func_00601658(iVar4);
  func_0010E15C((int *)*puVar1);
                    /* WARNING: Could not recover jumptable at 0x00322cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x7c))(param_1);
}

