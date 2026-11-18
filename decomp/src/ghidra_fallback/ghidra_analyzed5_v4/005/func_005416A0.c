#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014ABEC(int param_1);
extern undefined8 func_004EF06C(int param_1,char *param_2);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_0052138C(int param_1,char *param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_0054191c;
extern int *DAT_00541920;
extern uint *DAT_00541924;
extern undefined4 *DAT_00541928;
extern undefined4 DAT_0054192c;
extern int *DAT_00541930;
extern int DAT_00541934;
extern int *DAT_00541958;
extern char s_SE_S_STAIR_DOWN_00541948[];
extern char s_SE_S_STAIR_UP_00541938[];

// USA 005416A0 <- EU 00541678 (Ghidra, non-matching)
// GLOBAL DAT_0054191c int *
// GLOBAL DAT_00541920 int *
// GLOBAL DAT_00541924 uint *
// GLOBAL DAT_00541928 undefined4 *
// GLOBAL DAT_0054192c undefined4
// GLOBAL DAT_00541930 int *
// GLOBAL DAT_00541934 int
// GLOBAL DAT_00541958 int *
// GLOBAL s_SE_S_STAIR_DOWN_00541948 string
// GLOBAL s_SE_S_STAIR_UP_00541938 string

undefined4 func_005416A0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  ushort uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((byte *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(undefined2 *)(albw_frame + 0x8))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  local_28 = 0;
  local_30[0] = 0;
  local_2c = 0;
  local_26 = 0;
  iVar2 = func_0052138C(param_1,(char *)local_30);
  piVar1 = DAT_0054191c;
  if (iVar2 == 0) {
    iVar2 = func_0014ABEC(*DAT_00541958);
    if (iVar2 != 0) {
      return 1;
    }
    return 0;
  }
  if ((0 < *(short *)(param_1 + 0x5e)) &&
     (puVar3 = (undefined4 *)
               func_0052FBDC(*DAT_00541920 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
     puVar3 != (undefined4 *)0x0)) {
    if (((*DAT_00541924 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00541924), iVar2 != 0)) {
      *DAT_00541928 = DAT_0054192c;
    }
    iVar2 = (**(code **)*puVar3)(puVar3,DAT_00541928);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (((puVar3 != (undefined4 *)0x0) && (*(byte *)(puVar3 + 0x109) == local_30[0])) &&
       (puVar3[0x10a] == local_2c)) {
      uVar7 = func_004EF06C(*piVar1,(char *)local_30);
      uVar4 = 0;
      if ((int)uVar7 != 0) {
        uVar4 = 2;
      }
      return uVar4;
    }
  }
  iVar2 = 0;
  uVar6 = *(ushort *)(param_1 + 0x2e) & 0xff;
  if (uVar6 == 5) {
    iVar2 = 0xb;
  }
  else if (uVar6 == 7) {
    local_20 = DAT_00541934;
    local_1c = s_SE_S_STAIR_UP_00541938;
    func_00587F74(*DAT_00541930,&local_20,0);
    iVar2 = 5;
  }
  else if (uVar6 == 8) {
    local_20 = DAT_00541934;
    local_1c = s_SE_S_STAIR_UP_00541938;
    func_00587F74(*DAT_00541930,&local_20,0);
  }
  else if (uVar6 == 9) {
    local_20 = DAT_00541934;
    local_1c = s_SE_S_STAIR_DOWN_00541948;
    func_00587F74(*DAT_00541930,&local_20,0);
  }
  else {
    iVar5 = (int)(char)local_30[0];
    if (((*(char *)(*piVar1 + 0x18) != iVar5) || (0xc < iVar5 - 9U)) && (iVar5 != 5)) {
      if (iVar5 < 6) {
        if ((iVar5 != 2 && iVar5 != 3) && iVar5 != 4) goto LAB_0054185c;
      }
      else if (iVar5 != 0x16 && iVar5 != 0x17) goto LAB_0054185c;
    }
    iVar2 = 5;
  }
LAB_0054185c:
  iVar2 = func_004EF418(*piVar1,local_30,iVar2,0);
  if (iVar2 != 0) {
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 5) {
      if ((*(short *)(param_1 + 0x36) != 0) && (*(char *)(param_1 + 0x34) == '\x04')) {
        func_00588C14(param_1,0,1);
      }
      if ((*(short *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x35) == '\x04')) {
        func_00588C14(param_1,1,1);
      }
    }
    return 1;
  }
  return 0;
}

