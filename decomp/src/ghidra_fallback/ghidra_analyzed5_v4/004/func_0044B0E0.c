#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_004478BC(int param_1);
extern int func_004A064C(undefined4 *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3);
extern int func_00580A88(int param_1);
extern int *DAT_0044b238;

// GLOBAL DAT_0044b238 int *
// USA 0044B0E0 <- EU 0044B0B8 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_0044B0E0(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined4 *)(albw_frame + 0x0))
  if (((*(int *)(param_1 + 0x1c) != 0) && ((*(uint *)(param_1 + 0x18) & 4) == 0)) &&
     ((*(uint *)(param_1 + 0x18) & 0x10) == 0)) {
    func_004478BC(param_1);
    iVar4 = *(int *)(param_1 + 0x220);
    if (((*(byte *)(iVar4 + 0x44) & 1) == 0) || (*(char *)(iVar4 + 0x45) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x21c) + 0x44);
    bVar5 = (bVar1 & 1) != 0;
    if (bVar5) {
      bVar1 = *(byte *)(iVar4 + 0x45);
    }
    func_00167E04(*(int *)(param_1 + 0x1c),iVar4,0);
    func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x21c),0);
    if (((*(int **)(param_1 + 0x1c))[4] == 0) && (iVar4 = **(int **)(param_1 + 0x1c), iVar4 != 0)) {
      uVar3 = func_0041F7CC();
      uVar3 = (**(code **)(*param_2 + 0x24))(param_2,uVar3,iVar4,param_3);
      func_0041F7DC(uVar3);
    }
    func_004A064C(auStack_40,*DAT_0044b238,in_s0,in_s1,in_s2,in_s3);
    func_00580A88(param_1 + 0x400);
    if (bVar2) {
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x220),1);
    }
    if (bVar5 && bVar1 != 0) {
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x21c),1);
    }
    if (((*(int **)(param_1 + 0x1c))[4] == 0) && (iVar4 = **(int **)(param_1 + 0x1c), iVar4 != 0)) {
      uVar3 = func_0041F7CC();
      uVar3 = (**(code **)(*param_2 + 0x24))(param_2,uVar3,iVar4,param_3);
      func_0041F7DC(uVar3);
    }
    func_00580A88((int)auStack_40);
  }
  return;
}

