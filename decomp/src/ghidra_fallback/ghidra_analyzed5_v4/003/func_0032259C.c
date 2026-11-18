#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_00102A2C(int param_1);
extern int func_00104A80(void);
extern int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_0010585C(void);
extern int func_0014AD6C(void);
extern int func_0014B370(int param_1);
extern int func_002DF2B4(int param_1);
extern int func_0032274C(int *param_1);
extern int func_00322944(int *param_1);
extern int func_003E4488(void);
extern int func_003E5120(void);
extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF5DC(uint param_1);
extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601600(undefined4 param_1);
extern int func_00601658(int param_1);
extern int func_006017F0(void);
extern undefined4 DAT_0032270c;
extern int DAT_00322710;
extern int DAT_00322714;
extern int DAT_00322718;
extern int *DAT_0032271c;
extern uint *DAT_00322720;
extern int *DAT_00322724;

// USA 0032259C <- EU 00322578 (Ghidra, non-matching)
// GLOBAL DAT_0032270c undefined4
// GLOBAL DAT_00322710 int
// GLOBAL DAT_00322714 int
// GLOBAL DAT_00322718 int
// GLOBAL DAT_0032271c int *
// GLOBAL DAT_00322720 uint *
// GLOBAL DAT_00322724 int *

/* WARNING: Variable defined which should be unmapped: objStack_20 */

undefined4 func_0032259C(int *param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  #define in_stack_ffffffe4 (*(undefined4 *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  
  if (param_1[0x53] < 1) {
    return 0;
  }
  func_005FF418(param_1[0x4b - param_1[0x52]],param_2,param_3);
  func_006003D8(DAT_0032270c,(int *)objStack_20);
  uVar3 = 0;
  if (objStack_20[0] != 0) {
    uVar3 = func_006017F0();
  }
  func_00601600(uVar3);
  func_005FF760();
  lVar1 = (longlong)DAT_00322710 * (longlong)(param_1[0x49] + 2);
  uVar5 = (uint)lVar1;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  iVar4 = (iVar4 - (iVar4 >> 0x1f)) * -3;
  iVar6 = iVar4 + param_1[0x49] + 2;
  func_005FEF2C(0x400,iVar4,uVar5);
  func_005FF5DC(param_1[iVar6 + 0x4c]);
  func_005FEF2C(0x410,extraout_r1,uVar5);
  func_005FF5DC(param_1[iVar6 + 0x57]);
  if (*(char *)((int)param_1 + 0x18a) == '\0') {
    func_005FEF2C(DAT_00322714,extraout_r1_00,uVar5);
    func_005FF5DC(param_1[iVar6 + 0x4f]);
    iVar4 = DAT_00322718;
  }
  else {
    iVar4 = 0x400;
  }
  func_00601658(iVar4);
  func_00322944(param_1);
  func_0032274C(param_1);
  func_002DF2B4(*DAT_0032271c);
  cVar2 = func_003E5120();
  uVar3 = extraout_r1_01;
  if (cVar2 != '\0') {
    func_0010173C(1);
    func_003E4488();
    uVar5 = 0;
    objStack_20[0] = 0;
    func_001053A8((undefined4 *)0x0,(undefined1 *)0x0,0,(int *)0x0,(int *)0x0,in_stack_ffffffe4,
                  *DAT_00322720,DAT_00322720[1]);
    cVar2 = func_0010585C();
    if ((cVar2 != '\0') || (iVar4 = func_00104A80(), iVar4 != 0)) {
      func_0014AD6C();
    }
    func_00102A2C(1);
    uVar3 = extraout_r1_02;
  }
  if (*DAT_00322724 != 0) {
    func_0014B370(*DAT_00322724);
    uVar3 = extraout_r1_03;
  }
  return func_005FF418(param_1[param_1[0x52] + 0x4a],uVar3,uVar5);
}

