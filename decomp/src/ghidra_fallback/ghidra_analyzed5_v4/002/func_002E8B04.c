#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_002F4A68(int param_1);
extern int func_00359590(undefined4 *param_1);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_003A42B0(int param_1,int param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern float fRam002e8dc4;
extern undefined4 uRam002e8dc8;
extern float DAT_002e8da4;
extern undefined4 *DAT_002e8da8;
extern undefined4 *DAT_002e8dac;
extern undefined4 *DAT_002e8db0;
extern undefined4 DAT_002e8db4;
extern undefined4 DAT_002e8db8;
extern undefined4 *DAT_002e8dbc;
extern int *DAT_002e8dc0;
extern float DAT_002f152c;
extern float DAT_002f1534;

// USA 002E8B04 <- EU 002E8AE0 (Ghidra, non-matching)
// GLOBAL DAT_002e8da4 float
// GLOBAL DAT_002e8da8 undefined4 *
// GLOBAL DAT_002e8dac undefined4 *
// GLOBAL DAT_002e8db0 undefined4 *
// GLOBAL DAT_002e8db4 undefined4
// GLOBAL DAT_002e8db8 undefined4
// GLOBAL DAT_002e8dbc undefined4 *
// GLOBAL DAT_002e8dc0 int *
// GLOBAL DAT_002f152c float
// GLOBAL DAT_002f1534 float
// GLOBAL UNK_002e8dc4 float
// GLOBAL UNK_002e8dc8 undefined4

/* WARNING: Removing unreachable block (ram,0x002f14fc) */
/* WARNING: Removing unreachable block (ram,0x002f1508) */

void func_002E8B04(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined8 uVar9;
  
  fVar8 = DAT_002e8da4;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 3;
  *(float *)(param_1 + 0x3dc) = fVar8;
  *(float *)(param_1 + 0x3e0) = fVar8;
  *(float *)(param_1 + 0x3e4) = fVar8;
  func_003A42B0(param_1 + 0x8ec,0);
  func_00359590((undefined4 *)(param_1 + 0x930));
  uVar4 = DAT_002e8db4;
  puVar1 = DAT_002e8da8;
  iVar7 = param_1 + 0x964;
  if (*(char *)(param_1 + 0xd45) == '\0') {
    *(undefined4 *)(param_1 + 0xb10) = 0xf0;
    *(undefined4 *)(param_1 + 0xb14) = uVar4;
    uVar4 = DAT_002e8db8;
    *(undefined4 *)(param_1 + 0xb0c) = 0;
    *(undefined4 *)(param_1 + 0xb34) = 0x3c;
    *(undefined4 *)(param_1 + 0xb38) = uVar4;
    *(undefined4 *)(param_1 + 0xb30) = 0;
    puVar2 = DAT_002e8dbc;
    *(undefined1 *)(param_1 + 0xa5b) = 1;
    *(undefined4 *)(param_1 + 0xc28) = 0;
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    *(int *)(param_1 + 0xd0c) = param_1;
    *(undefined4 *)(param_1 + 0xd10) = uVar4;
    *(undefined4 *)(param_1 + 0xd14) = uVar6;
    *(undefined1 *)(param_1 + 0xa58) = 3;
    *(int *)(param_1 + 0x990) = param_1 + 0xd08;
    func_0036C2B8(iVar7,*puVar1);
    func_0036C058(iVar7,0x28,0,1);
    piVar3 = DAT_002e8dc0;
    iVar5 = func_0052FBA0(*DAT_002e8dc0 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
    if (iVar5 != 0) {
      iVar5 = func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      if (*(char *)(iVar5 + 0x410) != '\0') {
        iVar5 = func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        func_00668934((undefined4 *)(iVar5 + 0x40c),3);
      }
    }
    func_004FABDC(param_1,0x17,0xffffffff,0);
    func_004FAB60(param_1,1,0);
    func_004FB070(param_1,fVar8);
    func_004FB4C4(param_1,fVar8);
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
    if (*(char *)(param_1 + 0x650) == '\0') {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5a8);
    }
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x90000;
    func_0036C09C(iVar7,7);
    fVar8 = fRam002e8dc4;
    *(undefined4 *)(param_1 + 0xc70) = uRam002e8dc8;
    uVar9 = func_00114608((uint)ALBW_AS_U32((fVar8 * DAT_002f152c)),0x96);
    *(int *)(param_1 + 0xc68) = (int)uVar9;
    *(undefined4 *)(param_1 + 0xc78) = 0x96;
    fVar8 = (float)VectorUnsignedToFloat(0x96,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc7c) = DAT_002f1534 / fVar8;
    *(undefined4 *)(param_1 + 0xc74) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined1 *)(param_1 + 0xa58) = 0;
  func_0036C2B8(iVar7,*puVar1);
  func_0036C2B8(iVar7,*DAT_002e8dac);
  puVar1 = DAT_002e8db0;
  *(undefined1 *)(param_1 + 0xa5b) = 1;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  *(int *)(param_1 + 0xd0c) = param_1;
  *(undefined4 *)(param_1 + 0xd10) = uVar4;
  *(undefined4 *)(param_1 + 0xd14) = uVar6;
  *(undefined4 *)(param_1 + 0x97c) = 0x2a;
  *(undefined1 *)(param_1 + 0xa58) = 3;
  *(int *)(param_1 + 0x990) = param_1 + 0xd08;
  func_0036C058(iVar7,0,0,1);
  func_004FABDC(param_1,0x29,0xffffffff,0);
  func_004FAB60(param_1,0,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
  func_002F4A68(param_1);
  if (*(char *)(param_1 + 0x650) == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5a8);
  }
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x90000;
  return;
}

