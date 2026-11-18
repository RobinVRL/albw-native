#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_00282C7C(int param_1,uint param_2,undefined4 param_3,uint param_4);
extern int func_00286BF8(int param_1);
extern int func_00286C34(int param_1);
extern int func_00286D70(int param_1);
extern int func_00286DAC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0057EA10(int param_1,int *param_2,uint param_3);
extern int func_00582328(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00282b30;
extern int *DAT_00282b34;
extern uint *DAT_00282b38;
extern int *DAT_00282b3c;
extern int DAT_00282b50;
extern undefined4 DAT_00282b54;
extern undefined4 DAT_00282b58;
extern int DAT_00282b5c;
extern undefined4 *DAT_00282b60;
extern int DAT_00282b64;
extern char s_FortuneMessage_00282b40[];

// USA 00282780 <- EU 002827A8 (Ghidra, non-matching)
// GLOBAL DAT_00282b30 int *
// GLOBAL DAT_00282b34 int *
// GLOBAL DAT_00282b38 uint *
// GLOBAL DAT_00282b3c int *
// GLOBAL DAT_00282b50 int
// GLOBAL DAT_00282b54 undefined4
// GLOBAL DAT_00282b58 undefined4
// GLOBAL DAT_00282b5c int
// GLOBAL DAT_00282b60 undefined4 *
// GLOBAL DAT_00282b64 int
// GLOBAL s_FortuneMessage_00282b40 string

undefined4 func_00282780(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 (*(int *)(albw_frame + 0x0))
  #define local_11c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_118 (*(undefined4 *)(albw_frame + 0x8))
  #define local_114 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x10b))
  puVar1 = DAT_00282b60;
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0x9d1) == '\0') {
      iVar4 = *DAT_00282b34;
      if (iVar4 != 0) {
        if (((*DAT_00282b38 & 1) == 0) &&
           (iVar2 = func_00100174((int *)DAT_00282b38), piVar3 = DAT_00282b3c, iVar2 != 0)) {
          *DAT_00282b3c = DAT_00282b50;
          piVar3[1] = (int)s_FortuneMessage_00282b40;
          param_3 = DAT_00282b54;
        }
        iVar4 = func_00582328(iVar4,DAT_00282b3c,param_3,param_4);
        if (iVar4 != 0) {
          local_11c = local_114;
          uStack_118 = 0x100;
          uStack_15 = 0;
          local_114[0] = 0;
          local_120 = DAT_00282b5c;
          iVar4 = func_0057EA10(iVar4 + 4,&local_120,*(uint *)(param_1 + 0xa24));
          piVar3 = (int *)0x0;
          if (iVar4 != 0) {
            piVar3 = *(int **)(param_1 + 0x770);
          }
          if (iVar4 != 0 && piVar3 != (int *)0x0) {
            uVar5 = (**(code **)(*piVar3 + 0x48))(piVar3,DAT_00282b3c,&local_120);
            return uVar5;
          }
        }
      }
    }
    else if ((*DAT_00282b30 != 0) &&
            (iVar4 = func_0052FBA0(*DAT_00282b30 + 0x3dbbc,*(uint *)(param_1 + 0x9bc)), iVar4 != 0))
    {
      *(undefined1 *)(iVar4 + 0x4cd) = 1;
    }
    break;
  case 1:
    iVar4 = *DAT_00282b30;
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xa20) == 0) {
        piVar3 = (int *)func_005841A8(iVar4,*DAT_00282b60,*(int **)(DAT_00282b64 + iVar4));
        if (*(int **)(iVar4 + 0x3dbc8) != piVar3) {
          do {
            if (*piVar3 != 0) {
              *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(*piVar3 + 0x2cc);
              break;
            }
            piVar3 = (int *)func_005841A8(iVar4,*puVar1,piVar3 + 1);
          } while (*(int **)(iVar4 + 0x3dbc8) != piVar3);
        }
      }
      func_00230610(param_1 + 0x478,*(undefined4 *)(param_1 + 0xa20));
      iVar4 = func_0052FBA0(iVar4 + 0x3dbbc,*(uint *)(param_1 + 0xa20));
      if (iVar4 != 0) {
        uVar5 = func_00286DAC(iVar4);
        return uVar5;
      }
    }
    break;
  case 2:
    if ((*DAT_00282b30 != 0) &&
       (iVar4 = func_0052FBA0(*DAT_00282b30 + 0x3dbbc,*(uint *)(param_1 + 0xa20)), iVar4 != 0)) {
      uVar5 = func_00286BF8(iVar4);
      return uVar5;
    }
    break;
  case 3:
    if ((*DAT_00282b30 != 0) &&
       (iVar4 = func_0052FBA0(*DAT_00282b30 + 0x3dbbc,*(uint *)(param_1 + 0xa20)), iVar4 != 0)) {
      uVar5 = func_00286D70(iVar4);
      return uVar5;
    }
    break;
  case 4:
    if ((*DAT_00282b30 != 0) &&
       (iVar4 = func_0052FBA0(*DAT_00282b30 + 0x3dbbc,*(uint *)(param_1 + 0xa20)), iVar4 != 0)) {
      uVar5 = func_00286C34(iVar4);
      return uVar5;
    }
    break;
  case 5:
    func_00282C7C(param_1,0,param_3,param_4);
    return 1;
  case 6:
    func_00282C7C(param_1,1,param_3,param_4);
    return 1;
  case 7:
    func_00282C7C(param_1,2,param_3,param_4);
    return 1;
  case 8:
    func_00282C7C(param_1,3,param_3,param_4);
    return 1;
  case 9:
    func_00282C7C(param_1,4,param_3,param_4);
    return 1;
  case 10:
    func_00282C7C(param_1,5,param_3,param_4);
    return 1;
  case 0xb:
    func_00282C7C(param_1,6,param_3,param_4);
    return 1;
  case 0xc:
    func_00282C7C(param_1,7,param_3,param_4);
    return 1;
  case 0xd:
    func_00282C7C(param_1,8,param_3,param_4);
    return 1;
  }
  return 1;
}

