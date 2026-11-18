#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0037864c;
extern int *DAT_00378650;
extern undefined4 DAT_00378654;
extern uint DAT_00378658;
extern uint *DAT_0037865c;
extern undefined4 *DAT_00378660;
extern int *DAT_00378670;
extern int *DAT_00378674;
extern int *DAT_00378678;
extern uint *DAT_0037868c;
extern undefined4 *DAT_00378690;
extern char s_SE_PV_HOLD_00378664[];
extern char s_SE_PV_PUSH_PULL_0037867c[];

// USA 003783F4 <- EU 003783D0 (Ghidra, non-matching)
// GLOBAL DAT_0037864c int *
// GLOBAL DAT_00378650 int *
// GLOBAL DAT_00378654 undefined4
// GLOBAL DAT_00378658 uint
// GLOBAL DAT_0037865c uint *
// GLOBAL DAT_00378660 undefined4 *
// GLOBAL DAT_00378670 int *
// GLOBAL DAT_00378674 int *
// GLOBAL DAT_00378678 int *
// GLOBAL DAT_0037868c uint *
// GLOBAL DAT_00378690 undefined4 *
// GLOBAL s_SE_PV_HOLD_00378664 string
// GLOBAL s_SE_PV_PUSH_PULL_0037867c string

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_003783F4(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  uVar5 = DAT_00378658;
  uVar4 = DAT_00378654;
  piVar3 = DAT_00378650;
  piVar2 = DAT_0037864c;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0x73:
    if (*(char *)(param_2 + 4) != '\x11') {
      uVar8 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x70) = uVar8;
      puVar6 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,uVar8);
      if (((*DAT_0037865c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0037865c), iVar7 != 0)) {
        *DAT_00378660 = uVar4;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_00378660), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      *(undefined4 **)(param_1 + 0x74) = puVar6;
      objStack_28[1] = (uint)s_SE_PV_HOLD_00378664;
      objStack_28[0] = uVar5;
      func_004EAF8C(*piVar3,(int *)objStack_28,0);
    }
    if ((*(int *)(param_1 + 0x74) != 0) &&
       (((iVar7 = func_00588BE4(*(int *)(param_1 + 0x74)), *DAT_00378670 == iVar7 ||
         (*DAT_00378674 == iVar7)) || (*DAT_00378678 == iVar7)))) {
      iVar7 = *(int *)(param_1 + 0x4c);
      *(undefined1 *)(param_1 + 0x84) = 1;
      objStack_28[0] = 6;
      func_0028D580((uint *)(iVar7 + 0x3c),0x5f,1,1,6);
      objStack_28[0] = 6;
      func_0028D580((uint *)(iVar7 + 0x5c),0x5f,1,1,6);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    return 0;
  case 0x74:
  case 0x75:
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,param_3,param_4);
switchD_00378400_caseD_77:
    objStack_28[1] = (uint)s_SE_PV_PUSH_PULL_0037867c;
    objStack_28[0] = uVar5;
    return func_004EAF8C(*piVar3,(int *)objStack_28,0);
  case 0x76:
    cVar1 = *(char *)(param_2 + 4);
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,param_3,param_4);
    if (cVar1 != '\x11') {
      uVar8 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x70) = uVar8;
      puVar6 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,uVar8);
      if (((*DAT_0037868c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0037868c), iVar7 != 0)) {
        *DAT_00378690 = uVar4;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_00378690), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      *(undefined4 **)(param_1 + 0x78) = puVar6;
    }
    objStack_28[1] = (uint)s_SE_PV_HOLD_00378664;
    objStack_28[0] = uVar5;
    return func_004EAF8C(*piVar3,(int *)objStack_28,0);
  case 0x77:
    goto switchD_00378400_caseD_77;
  default:
    return 0;
  }
}

