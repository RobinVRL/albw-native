#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010C894(int *param_1);
extern int func_0010C930(int *param_1);
extern int func_0010CDB8(undefined4 *param_1);
extern int *DAT_0010b600;
extern undefined4 DAT_0010b61c;
extern undefined4 *DAT_0010b634;
extern char s_cf_0010b604[];
extern char s_cf_0010b620[];
extern char s_cf_0010b638[];
extern char s_sead__FileDeviceMgr_0010b638[];
extern char s_sead__ResourceMgr_0010b620[];
extern char s_sead__SystemManagers_0010b604[];

// USA 00105C5C <- EU 00105C5C (Ghidra, non-matching)
// GLOBAL DAT_0010b600 int *
// GLOBAL DAT_0010b61c undefined4
// GLOBAL DAT_0010b634 undefined4 *
// GLOBAL s_cf_0010b638 string
// GLOBAL s_cf_0010b620 string
// GLOBAL s_cf_0010b604 string

void func_0010B47C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0xc))
  func_0010CDB8(param_1);
  if (*DAT_0010b600 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)DAT_0010b600[2];
  }
  iVar3 = (**(code **)(*piVar5 + 0x3c))(piVar5,4);
  uVar1 = DAT_0010b61c;
  pcStack_2c = s_sead__SystemManagers_0010b604;
  uStack_30 = DAT_0010b61c;
  piVar5 = func_0010B954(iVar3,(int)&uStack_30,piVar5,1,0);
  iVar3 = (**(code **)(*piVar5 + 0x3c))(piVar5,4);
  pcStack_24 = s_sead__ResourceMgr_0010b620;
  uStack_28 = uVar1;
  piVar4 = func_0010B954(iVar3,(int)&uStack_28,piVar5,1,0);
  puVar2 = DAT_0010b634;
  if (piVar4 == (int *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_0010b634,piVar4);
  }
  func_0010C894(piVar4);
  (**(code **)(*piVar4 + 0x14))(piVar4);
  if (iVar3 != 1) {
    func_0010983C(*puVar2,iVar3);
  }
  iVar3 = (**(code **)(*piVar5 + 0x3c))(piVar5,4);
  pcStack_24 = s_sead__FileDeviceMgr_0010b638;
  uStack_28 = uVar1;
  piVar4 = func_0010B954(iVar3,(int)&uStack_28,piVar5,1,0);
  if (piVar4 == (int *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*puVar2,piVar4);
  }
  func_0010C930(piVar4);
  (**(code **)(*piVar4 + 0x14))(piVar4);
  if (iVar3 != 1) {
    func_0010983C(*puVar2,iVar3);
  }
  (**(code **)(*piVar5 + 0x14))(piVar5);
  return;
}

