#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003CB2E0(int *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int *DAT_002c3460;
extern undefined4 *DAT_002c3464;
extern undefined4 DAT_002c3468;
extern int DAT_002c346c;
extern int DAT_002c3470;
extern int DAT_002c3474;

// USA 002C3304 <- EU 002C32E0 (Ghidra, non-matching)
// GLOBAL DAT_002c3460 int *
// GLOBAL DAT_002c3464 undefined4 *
// GLOBAL DAT_002c3468 undefined4
// GLOBAL DAT_002c346c int
// GLOBAL DAT_002c3470 int
// GLOBAL DAT_002c3474 int

int func_002C3304(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x590];
  #define auStack_590 ((uint *)(albw_frame + 0x0))
  iVar1 = param_1 + 0x10;
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)iVar1 = iVar1;
  piVar3 = DAT_002c3460;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar2 = (**(code **)(*(int *)*DAT_002c3464 + 8))
                    ((int *)*DAT_002c3464,0x30000,DAT_002c3468,0,*piVar3 * 2 * piVar3[1]);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  piVar3 = func_003CB2E0((int *)auStack_590);
  iVar1 = DAT_002c346c;
  piVar3[3] = DAT_002c346c + 1;
  *piVar3 = 0;
  piVar3[1] = iVar1;
  piVar3[2] = 0;
  func_00110490(piVar3 + 4,0x98);
  iVar1 = DAT_002c3474;
  piVar4 = piVar3 + 0x2a;
  piVar3[5] = DAT_002c3470;
  iVar7 = 0;
  iVar9 = 0xc;
  do {
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    *piVar4 = iVar7;
    piVar4[1] = iVar1;
    iVar9 = iVar9 + -1;
    piVar4 = piVar4 + 6;
    iVar7 = iVar7 + 1;
  } while (iVar9 != 0);
  piVar4 = piVar3 + 0x72;
  uVar8 = ((uint)piVar4 & 0xfffffffc) + 8;
  if (((uVar8 & 0xf) != 0) && (uVar8 = 4 - (uVar8 * 0x10000000 >> 0x1e), 0 < (int)uVar8)) {
    piVar3 = piVar3 + 0x71;
    if ((uVar8 & 1) != 0) {
      *piVar4 = 0;
      piVar3 = piVar4;
    }
    for (iVar1 = (int)uVar8 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      piVar3[1] = 0;
      piVar3 = piVar3 + 2;
      *piVar3 = 0;
    }
    piVar4 = piVar4 + uVar8;
  }
  puVar5 = func_003CC030(piVar4,1);
  iVar1 = (int)puVar5 - (int)auStack_590 >> 2;
  *(int *)(param_1 + 0x24) = iVar1;
  *(uint **)(param_1 + 0x20) = auStack_590;
  puVar6 = (uint *)func_0058FAAC(iVar1 << 2,0x10);
  *(uint **)(param_1 + 0x20) = puVar6;
  func_0010E3C4(puVar6,auStack_590,*(int *)(param_1 + 0x24) << 2);
  return param_1;
}

