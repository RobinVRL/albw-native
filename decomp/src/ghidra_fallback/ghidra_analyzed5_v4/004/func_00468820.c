#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00403DDC(undefined4 param_1,int param_2,int *param_3,int param_4);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_0046594C(int param_1);
extern int func_004A064C(undefined4 *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3);
extern int func_00532C78(int param_1);
extern int func_00580A38(int param_1,int param_2);
extern int *DAT_00468d2c;
extern int *DAT_00468d30;

// USA 00468820 <- EU 004687F8 (Ghidra, non-matching)
// GLOBAL DAT_00468d2c int *
// GLOBAL DAT_00468d30 int *

void func_00468820(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 4) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x10) != 0) {
    return;
  }
  func_0046594C(param_1);
  uVar2 = 0;
  if (*(char *)(param_1 + 0x128) == '\x04') {
    do {
      piVar6 = (int *)(param_1 + 0x108);
      if (uVar2 < 4) {
        piVar6 = piVar6 + uVar2;
      }
      if ((*(uint *)(*piVar6 + 0x18) & 4) == 0) {
        piVar6 = (int *)(param_1 + 500);
        if (uVar2 < 4) {
          piVar6 = piVar6 + uVar2;
        }
        iVar9 = *(int *)(param_1 + 0x1c);
        iVar7 = *piVar6;
        if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x44) & 1) == 0)) {
          *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
          *(byte *)(iVar9 + 0x70) = *(byte *)(iVar9 + 0x70) | 2;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
    if (((*(int **)(param_1 + 0x1c))[4] != 0) || (iVar7 = **(int **)(param_1 + 0x1c), iVar7 == 0))
    goto LAB_00468ce0;
    uVar3 = func_0041F7CC();
    iVar7 = (**(code **)(*param_2 + 0x24))(param_2,uVar3,iVar7,param_3);
  }
  else {
    do {
      piVar6 = (int *)(param_1 + 500);
      if (uVar2 < 4) {
        piVar6 = piVar6 + uVar2;
      }
      iVar7 = *piVar6;
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x44) & 1) != 0)) {
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x208),0);
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20c),0);
    if (((*(int **)(param_1 + 0x1c))[4] == 0) && (iVar7 = **(int **)(param_1 + 0x1c), iVar7 != 0)) {
      uVar3 = func_0041F7CC();
      uVar3 = (**(code **)(*param_2 + 0x24))(param_2,uVar3,iVar7,param_3);
      func_0041F7DC(uVar3);
    }
    iVar7 = *DAT_00468d2c;
    func_004A064C(auStack_38,iVar7,in_s0,in_s1,in_s2,in_s3);
    func_00580A38(param_1 + 0x130,iVar7);
    piVar6 = DAT_00468d30;
    if (((*(uint *)(*(int *)(param_1 + 0x114) + 0x18) & 4) == 0) &&
       ((*(char *)(param_1 + 0xe4) != '\x02' ||
        (bVar1 = func_00532C78(*(int *)(param_1 + 0x11c) + 0x84), bVar1)))) {
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x200),1);
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
      iVar9 = *piVar6 + 0x6b4;
      if (puVar4[4] == 0) {
        if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
          (**(code **)(*(int *)*puVar4 + 0x30))((int *)*puVar4,iVar9,1);
        }
        else {
          piVar5 = *(int **)puVar4[1];
          (**(code **)(*piVar5 + 0x30))(piVar5,iVar9,1);
        }
      }
      *(undefined4 *)(param_3 + 0xb0) = **(undefined4 **)(param_1 + 0x1c);
      piVar5 = *(int **)(param_1 + 0x200);
      if (piVar5 != (int *)0x0) {
        iVar9 = func_0041F7CC();
        iVar9 = func_00403DDC(param_2,iVar9,piVar5,param_3);
        func_0041F7DC(iVar9);
      }
    }
    if (((*(uint *)(*(int *)(param_1 + 0x108) + 0x18) & 4) == 0) &&
       ((*(char *)(param_1 + 0xe4) != '\x01' ||
        (bVar1 = func_00532C78(*(int *)(param_1 + 0x120) + 0x84), bVar1)))) {
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 500),1);
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
      iVar9 = *piVar6 + 0x6b4;
      if (puVar4[4] == 0) {
        if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
          (**(code **)(*(int *)*puVar4 + 0x30))((int *)*puVar4,iVar9,1);
        }
        else {
          piVar6 = *(int **)puVar4[1];
          (**(code **)(*piVar6 + 0x30))(piVar6,iVar9,1);
        }
      }
      *(undefined4 *)(param_3 + 0xb0) = **(undefined4 **)(param_1 + 0x1c);
      piVar6 = *(int **)(param_1 + 500);
      if (piVar6 != (int *)0x0) {
        iVar9 = func_0041F7CC();
        iVar9 = func_00403DDC(param_2,iVar9,piVar6,param_3);
        func_0041F7DC(iVar9);
      }
    }
    uVar2 = 1;
    do {
      piVar6 = (int *)(param_1 + 0x108);
      if (uVar2 < 4) {
        piVar6 = piVar6 + uVar2;
      }
      if ((*(uint *)(*piVar6 + 0x18) & 4) == 0) {
        piVar6 = (int *)(param_1 + 500);
        if (uVar2 < 4) {
          piVar6 = piVar6 + uVar2;
        }
        iVar8 = *(int *)(param_1 + 0x1c);
        iVar9 = *piVar6;
        if ((iVar9 != 0) && ((*(byte *)(iVar9 + 0x44) & 1) == 0)) {
          *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe | 1;
          *(byte *)(iVar8 + 0x70) = *(byte *)(iVar8 + 0x70) | 2;
        }
        puVar4 = (undefined4 *)(param_1 + 500);
        if (uVar2 < 4) {
          puVar4 = puVar4 + uVar2;
        }
        *(undefined4 *)(param_3 + 0xb0) = **(undefined4 **)(param_1 + 0x1c);
        piVar6 = (int *)*puVar4;
        if (piVar6 != (int *)0x0) {
          iVar9 = func_0041F7CC();
          iVar9 = func_00403DDC(param_2,iVar9,piVar6,param_3);
          func_0041F7DC(iVar9);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 3);
    func_00580A38((int)auStack_38,iVar7);
    if ((*(uint *)(*(int *)(param_1 + 0x11c) + 0x18) & 4) == 0) {
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x208),1);
      *(undefined4 *)(param_3 + 0xb0) = **(undefined4 **)(param_1 + 0x1c);
      piVar6 = *(int **)(param_1 + 0x208);
      if (piVar6 != (int *)0x0) {
        iVar7 = func_0041F7CC();
        iVar7 = func_00403DDC(param_2,iVar7,piVar6,param_3);
        func_0041F7DC(iVar7);
      }
    }
    if ((*(uint *)(*(int *)(param_1 + 0x120) + 0x18) & 4) != 0) goto LAB_00468ce0;
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20c),1);
    *(undefined4 *)(param_3 + 0xb0) = **(undefined4 **)(param_1 + 0x1c);
    piVar6 = *(int **)(param_1 + 0x20c);
    if (piVar6 == (int *)0x0) goto LAB_00468ce0;
    iVar7 = func_0041F7CC();
    iVar7 = func_00403DDC(param_2,iVar7,piVar6,param_3);
  }
  func_0041F7DC(iVar7);
LAB_00468ce0:
  uVar2 = 0x20;
  do {
    if (uVar2 < *(uint *)(param_1 + 0x148)) {
      piVar6 = *(int **)(*(int *)(param_1 + 0x150) + uVar2 * 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
    if ((piVar6[6] & 2U) != 0) {
      (**(code **)(*piVar6 + 0x10))(piVar6,param_2,param_3);
    }
    uVar2 = uVar2 - 1;
  } while (-1 < (int)uVar2);
  return;
}

