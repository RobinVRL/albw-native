#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3788(int *param_1);
extern undefined DAT_00375238;
extern char s_Appear2_00375240[];
extern char s_Appear_00375248[];
extern char s_Attack_00375250[];
extern char s_TriAttack_00375258[];

// USA 00374FA0 <- EU 00374F7C (Ghidra, non-matching)
// GLOBAL DAT_00375238 undefined
// GLOBAL s_Appear2_00375240 string
// GLOBAL s_Appear_00375248 string
// GLOBAL s_Attack_00375250 string
// GLOBAL s_TriAttack_00375258 string

void func_00374FA0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar5 = (int *)(param_1 + 0x488);
  piVar4 = (int *)(param_1 + 0x478);
  if (param_2 == 0) {
    func_004A3788((int *)(param_1 + 0x480));
    func_004A3788(piVar5);
    iVar1 = *(int *)(param_1 + 0x478);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x47c))) ||
       (((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0 &&
        (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 == 0 ||
          (*(int *)(iVar1 + 0x24) != *(int *)(iVar2 + 0xc))) || (*(int *)(iVar2 + 4) < 1)))))) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar4 = 0;
        *(undefined4 *)(param_1 + 0x47c) = 0;
      }
      else {
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x47c))) {
          func_00110848(iVar1);
        }
        func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)&DAT_00375238);
        *piVar4 = local_20;
        *(undefined4 *)(param_1 + 0x47c) = uStack_1c;
      }
    }
    if (*(char *)(param_1 + 0x4a5) != '\0') {
      *(undefined1 *)(param_1 + 0x4a5) = 0;
      func_00151148(*(int *)(param_1 + 0x45c),1);
      if (*(short *)(param_1 + 0x32) == 0) {
        iVar1 = *(int *)(param_1 + 0x344);
        pcVar3 = s_Appear_00375248;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x344);
        pcVar3 = s_Appear2_00375240;
      }
      if (iVar1 != 0) {
        func_004A1B9C(&local_20,iVar1,(uint *)pcVar3);
      }
    }
  }
  else if (param_2 == 1) {
    func_004A3788(piVar4);
    func_004A3788(piVar5);
    iVar1 = *(int *)(param_1 + 0x480);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x484))) ||
       (((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0 &&
        (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 == 0 ||
          (*(int *)(iVar1 + 0x24) != *(int *)(iVar2 + 0xc))) || (*(int *)(iVar2 + 4) < 1)))))) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *(int *)(param_1 + 0x480) = 0;
        *(undefined4 *)(param_1 + 0x484) = 0;
      }
      else {
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x484))) {
          func_00110848(iVar1);
        }
        func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_Attack_00375250);
        *(int *)(param_1 + 0x480) = local_20;
        *(undefined4 *)(param_1 + 0x484) = uStack_1c;
      }
    }
  }
  else {
    if (param_2 != 2) {
      return;
    }
    func_004A3788(piVar4);
    func_004A3788((int *)(param_1 + 0x480));
    iVar1 = *(int *)(param_1 + 0x488);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x48c))) ||
       (((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0 &&
        (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 == 0 ||
          (*(int *)(iVar1 + 0x24) != *(int *)(iVar2 + 0xc))) || (*(int *)(iVar2 + 4) < 1)))))) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar5 = 0;
        *(undefined4 *)(param_1 + 0x48c) = 0;
      }
      else {
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x48c))) {
          func_00110848(iVar1);
        }
        func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_TriAttack_00375258);
        *piVar5 = local_20;
        *(undefined4 *)(param_1 + 0x48c) = uStack_1c;
      }
    }
  }
  *(char *)(param_1 + 0x4a0) = (char)param_2;
  return;
}

