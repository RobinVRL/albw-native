#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8A48(short *param_1);
extern int func_003C8BD8(int *param_1);
extern int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CDF3C(int param_1);
extern int func_003CE6EC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);
extern int DAT_003ce5c4;

// USA 003CE480 <- EU 003CE45C (Ghidra, non-matching)
// GLOBAL DAT_003ce5c4 int

undefined4 func_003CE480(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  short *psVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_20 ((undefined1 *)(albw_frame + 0x0))
  uVar1 = func_003CDF3C((int)param_1);
  piVar4 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1,auStack_20,param_2,0x14);
  if (iVar2 < 0) {
    uVar3 = param_1[2];
    if ((uVar3 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar3 & 1) != 0) {
        func_0010C1B8(uVar3,uVar3 & 0xfffffffe,piVar4);
      }
      func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
      param_1[2] = 0;
    }
    piVar4 = (int *)-(iVar2 >> 0x1f);
    if (piVar4 != (int *)0x0) {
      func_003D302C(iVar2,0x3ce4cc);
    }
  }
  if (*param_2 != 0x4f00) {
    uVar3 = param_1[2];
    uVar1 = 0;
    if ((uVar3 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar3 & 1) != 0) {
        func_0010C1B8(uVar3,uVar3 & 0xfffffffe,piVar4);
      }
      func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
      param_1[2] = 0;
      uVar1 = extraout_r1;
    }
    psVar5 = *(short **)(DAT_003ce5c4 + 4);
    func_003C9BCC(DAT_003ce5c4,uVar1,piVar4);
    uVar3 = func_003C8A48(psVar5);
    if ((((uVar3 & 0x3fc00) != 0x4400) ||
        (uVar6 = CONCAT44(uVar3,uVar3) & 0x3ffffffffff, (uVar3 & 0x3ff) < 100)) ||
       (0xb3 < (uVar3 & 0x3ff))) {
      uVar6 = CONCAT44(0x3ce548,uVar3);
      piVar4 = (int *)-((int)uVar3 >> 0x1f);
      if (piVar4 != (int *)0x0) {
        uVar6 = func_003D302C(uVar3,0x3ce548);
      }
    }
    func_003CE6EC((int)uVar6,(int)(uVar6 >> 0x20),piVar4);
    uVar1 = 1;
    func_003CDF3C((int)param_1);
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,auStack_20,param_2,0x14);
    if (iVar2 < 0) {
      uVar3 = param_1[2];
      if ((uVar3 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
        if ((uVar3 & 1) != 0) {
          func_0010C1B8(uVar3,uVar3 & 0xfffffffe,param_2);
        }
        func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
        param_1[2] = 0;
      }
      if (iVar2 < 0) {
        func_003D302C(iVar2,0x3ce5b8);
      }
    }
  }
  return uVar1;
}

