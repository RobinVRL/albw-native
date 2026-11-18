#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004DECDC(int param_1);
extern int func_00583B1C(int param_1);
extern int func_00588BF0(int param_1,int param_2);

// USA 004DE2F0 <- EU 004DE2C8 (Ghidra, non-matching)

undefined4 func_004DE2F0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  
  piVar7 = (int *)((char)param_1[0x259] * 8 + 4);
  uVar2 = *(uint *)(param_1[0x25f] + (int)piVar7);
  pcVar4 = *(code **)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(param_1[0x25d] + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(param_1[0x25d]) + ((int)uVar2 >> 1));
  iVar6 = param_1[0x25c];
  iVar3 = param_1[600] + 1;
  param_1[600] = iVar3;
  uVar5 = extraout_r1;
  if (iVar6 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar6,1,fparam_0);
    uVar5 = extraout_r1_00;
  }
  func_004C00F4((int)param_1,uVar5,iVar6,piVar7);
  func_004BCAA8((int)param_1);
  if ((*(char *)((int)param_1 + 0x855) == '\b') && (iVar3 = func_00583B1C((int)param_1), iVar3 != 0)
     ) {
    *(undefined1 *)((int)param_1 + 0x853) = 9;
    *(undefined1 *)((int)param_1 + 0x855) = 9;
    (**(code **)(*param_1 + 0xac))(param_1,9,0);
  }
  bVar1 = func_00588BF0((int)param_1,1);
  if (bVar1) {
    func_004DECDC((int)param_1);
  }
  return func_004BC8D8((int)param_1);
}

