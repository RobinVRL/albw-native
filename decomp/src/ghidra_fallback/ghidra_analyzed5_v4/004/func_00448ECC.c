#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_00448700(int param_1);
extern int func_0044AEC8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_00584B94(int param_1,int param_2);
extern float DAT_00448f9c;
extern int DAT_00448fa0;
extern int *DAT_00448fa4;

// USA 00448ECC <- EU 00448EA4 (Ghidra, non-matching)
// GLOBAL DAT_00448f9c float
// GLOBAL DAT_00448fa0 int
// GLOBAL DAT_00448fa4 int *

undefined4 func_00448ECC(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar6;
  float fparam_0;
  
  *(undefined1 *)(param_1 + 0x292) = 0;
  fparam_0 = DAT_00448f9c;
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    func_00231448(param_1 + 0x104);
    func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
    func_004727B8(*(int *)(param_1 + 0x20c),1);
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar2 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x218);
    *(int *)(iVar2 + 4) = iVar5;
    puVar3 = (ushort *)(iVar2 + 0x16);
    uVar4 = *puVar3;
    if (iVar5 == 0) {
      uVar4 = uVar4 & 0xffbf;
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    *puVar3 = uVar4;
    bVar1 = func_00584B94(*DAT_00448fa4,DAT_00448fa0);
    uVar6 = extraout_r1;
    if (bVar1) {
      func_001B6C2C(*(int **)(param_1 + 0x214),extraout_r1,param_3,param_4);
      uVar6 = extraout_r1_00;
    }
    if (*(char *)(param_1 + 0x208) != '\0') {
      func_00448700(param_1);
      uVar6 = extraout_r1_01;
    }
    if (*(char *)(param_1 + 0x15c) == '\x02' || *(char *)(param_1 + 0x15c) == '\x01') {
      func_0044AEC8(param_1,uVar6,param_3,param_4);
    }
  }
  func_00231448(param_1 + 0x11c);
  func_002317C0((undefined2 *)(param_1 + 0x110),fparam_0);
  return func_0047E8C4(*(int *)(param_1 + 0x210),1,0);
}

