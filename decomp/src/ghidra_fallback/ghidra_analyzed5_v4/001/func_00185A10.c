#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004BCBE0(int param_1,int *param_2,undefined4 param_3);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int DAT_00185b70;
extern float DAT_00185b74;
extern float DAT_00185b78;
extern char s_dance_00185b68[];

// USA 00185A10 <- EU 00185A10 (Ghidra, non-matching)
// GLOBAL DAT_00185b70 int
// GLOBAL DAT_00185b74 float
// GLOBAL DAT_00185b78 float
// GLOBAL s_dance_00185b68 string

undefined4 func_00185A10(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  char *pcVar6;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((uint *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  iVar2 = func_004BCBE0(param_1,param_2,param_3);
  uVar4 = 0;
  if (iVar2 != 0) {
    pcVar5 = s_dance_00185b68;
    local_28 = DAT_00185b70;
    local_24 = s_dance_00185b68;
    (**(code **)(*param_2 + 8))(param_2);
    (**(code **)(*param_2 + 8))(param_2);
    pcVar6 = (char *)param_2[1];
    (**(code **)(local_28 + 8))(&local_28);
    bVar1 = true;
    if (pcVar6 != local_24) {
      param_4 = (int *)param_2[1];
      iVar2 = 0;
      do {
        pcVar5 = (char *)(int)*(char *)((int)param_4 + iVar2);
        if (pcVar5 != (char *)(int)local_24[iVar2]) break;
        if (pcVar5 == (char *)0x0) goto LAB_00185ac0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40001);
      bVar1 = false;
    }
LAB_00185ac0:
    if (bVar1) {
      fparam_1 = DAT_00185b74;
      fparam_0 = DAT_00185b78;
      puVar3 = (uint *)func_002C11E8((int *)auStack_88,0,0,0);
      func_0016898C(*(int *)(param_1 + 0x7b4),puVar3);
      func_00168D60(*(int *)(param_1 + 0x7b4),fparam_0,fparam_1);
    }
    else {
      func_00168D60(*(int *)(param_1 + 0x7b4),DAT_00185b78,DAT_00185b74);
      func_004C00F4(param_1,extraout_r1,pcVar5,param_4);
      iVar2 = *(int *)(param_1 + 0x7b4);
      func_002C11E8((int *)auStack_88,0xffffffff,10,0);
      func_001692F8(iVar2,auStack_88);
    }
    uVar4 = 1;
  }
  return uVar4;
}

