#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF850(int param_1,int param_2);
extern int func_00600148(int param_1,int param_2);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern undefined4 *DAT_002fe83c;
extern undefined4 DAT_002fe840;
extern undefined4 DAT_002fe844;

// USA 002FE7B4 <- EU 002FE790 (Ghidra, non-matching)
// GLOBAL DAT_002fe83c undefined4 *
// GLOBAL DAT_002fe840 undefined4
// GLOBAL DAT_002fe844 undefined4

void func_002FE7B4(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  puVar1 = DAT_002fe83c;
  uVar3 = param_3;
  func_0010E0E0((int *)*DAT_002fe83c);
  func_006003D8(DAT_002fe840,(int *)(local_30 + 3));
  uVar2 = DAT_002fe844;
  iVar4 = 0;
  do {
    func_00600148(1,(int)(local_30 + iVar4));
    func_005FF418(local_30[iVar4],extraout_r1,uVar3);
    func_005FF850(param_2,param_3);
    func_006003D8(uVar2,(int *)(param_1 + iVar4 * 4 + 0x38));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  func_005FF418(local_30[3],extraout_r1_00,uVar3);
  func_0010E15C((int *)*puVar1);
  *(uint *)(param_1 + 0x28) = local_30[0];
  *(uint *)(param_1 + 0x2c) = local_30[1];
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

