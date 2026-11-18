#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00389558(int param_1);
extern int func_00389570(int param_1);
extern int func_00389584(int param_1,undefined4 *param_2);
extern int func_003895A4(int param_1);
extern int func_00389790(int param_1);
extern int func_003897C8(int param_1);
extern int func_004BC7BC(int param_1);
extern int func_0050E5B8(int param_1);
extern int func_0050F4A8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern uint *DAT_0050f3fc;
extern uint *DAT_0050f400;
extern int *DAT_0050f404;
extern undefined4 DAT_0050f408;
extern undefined4 DAT_0050f40c;
extern undefined4 *DAT_0050f410;
extern undefined4 *DAT_0050f414;
extern int *DAT_0050f418;

// USA 0050EEEC <- EU 0050EEC4 (Ghidra, non-matching)
// GLOBAL DAT_0050f3fc uint *
// GLOBAL DAT_0050f400 uint *
// GLOBAL DAT_0050f404 int *
// GLOBAL DAT_0050f408 undefined4
// GLOBAL DAT_0050f40c undefined4
// GLOBAL DAT_0050f410 undefined4 *
// GLOBAL DAT_0050f414 undefined4 *
// GLOBAL DAT_0050f418 int *

undefined4 func_0050EEEC(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0xa0c) == 0) {
    func_0050E5B8(param_1);
  }
  if (*(int *)(param_1 + 0xa08) == 0) {
    func_0050F4A8(param_1);
  }
  uVar5 = DAT_0050f40c;
  uVar4 = DAT_0050f408;
  piVar3 = DAT_0050f404;
  puVar2 = DAT_0050f400;
  puVar1 = DAT_0050f3fc;
  if (param_2 == 3) {
    puVar7 = (undefined4 *)func_0052FBA0(*DAT_0050f404 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    if (((*puVar1 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f3fc), iVar8 != 0)) {
      *DAT_0050f410 = uVar4;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f410), iVar8 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0xa10) == 5) {
        *(undefined4 *)(param_1 + 0xa10) = 6;
        func_003895A4((int)puVar7);
      }
      else if ((*(int *)(param_1 + 0xa10) == 6) && (bVar6 = func_003897C8((int)puVar7), bVar6)) {
        return 1;
      }
    }
  }
  else {
    if (2 < param_2) {
      if ((param_2 != 4) && (param_2 == 0x15)) {
        if (*(int *)(param_1 + 0xa10) == 0) {
          if (*(int *)(*DAT_0050f418 + 0x18) != 0) {
            func_001212EC(*(int *)(*DAT_0050f418 + 0x18),(int *)(param_1 + 0x98c),0x3c,0);
          }
          puVar7 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0xa0c));
          if (((*puVar2 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f400), iVar8 != 0)) {
            *DAT_0050f414 = uVar5;
          }
          if ((puVar7 == (undefined4 *)0x0) ||
             (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f414), iVar8 == 0)) {
            puVar7 = (undefined4 *)0x0;
          }
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined1 *)((int)puVar7 + 0x991) = 1;
          }
        }
        *(undefined4 *)(param_1 + 0xa10) = 1;
      }
      return 1;
    }
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0xa10) == 2) {
        puVar7 = (undefined4 *)func_0052FBA0(*DAT_0050f404 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
        if (((*puVar1 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f3fc), iVar8 != 0)) {
          *DAT_0050f410 = uVar4;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f410), iVar8 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          func_00389558((int)puVar7);
          *(undefined4 *)(param_1 + 0xa10) = 3;
        }
        puVar7 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0xa0c));
        if (((*puVar2 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f400), iVar8 != 0)) {
          *DAT_0050f414 = uVar5;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f414), iVar8 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          func_004BC7BC((int)puVar7);
        }
      }
      else if (*(int *)(param_1 + 0xa10) == 3) {
        puVar7 = (undefined4 *)func_0052FBA0(*DAT_0050f404 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
        if (((*puVar1 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f3fc), iVar8 != 0)) {
          *DAT_0050f410 = uVar4;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f410), iVar8 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        if ((puVar7 != (undefined4 *)0x0) && (iVar8 = func_00389790((int)puVar7), iVar8 != 0)) {
          return 1;
        }
      }
    }
    else if (param_2 == 1) {
      puVar7 = (undefined4 *)func_0052FBA0(*DAT_0050f404 + 0x3dbbc,*(uint *)(param_1 + 0xa0c));
      if (((*puVar2 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f400), iVar8 != 0)) {
        *DAT_0050f414 = uVar5;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f414), iVar8 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        if (*(uint *)(param_1 + 0xa10) < 2) {
          puVar7[0x263] = *(undefined4 *)(param_1 + 0x3d4);
          *(undefined4 *)(param_1 + 0xa10) = 2;
        }
        else if ((*(uint *)(param_1 + 0xa10) == 2) && (ALBW_AS_F32(puVar7[0xf5]) == ALBW_AS_F32(puVar7[0x263])))
        {
          return 1;
        }
      }
    }
    else {
      if (param_2 != 2) {
        return 1;
      }
      puVar7 = (undefined4 *)func_0052FBA0(*DAT_0050f404 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
      if (((*puVar1 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0050f3fc), iVar8 != 0)) {
        *DAT_0050f410 = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar8 = (**(code **)*puVar7)(puVar7,DAT_0050f410), iVar8 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0xa10) == 3) {
          local_28 = *(undefined4 *)(param_1 + 0x2cc);
          *(undefined4 *)(param_1 + 0xa10) = 5;
          func_00389584((int)puVar7,&local_28);
        }
        else if ((*(int *)(param_1 + 0xa10) == 5) && (bVar6 = func_00389570((int)puVar7), bVar6)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

