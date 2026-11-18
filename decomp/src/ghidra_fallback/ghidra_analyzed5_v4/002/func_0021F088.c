// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_003583A0(int param_1);
extern int func_0036C42C(int param_1);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00547514(int param_1);
extern int func_00556E64(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int iRam0021f1f8;
extern undefined4 uRam0021f1ec;
extern int *piRam0021f1f0;
extern undefined4 *puRam0021f1f4;
extern int DAT_0028fe70;
extern undefined *PTR_0021f1fc;
extern undefined *PTR_0021f200;
extern undefined *PTR_0021f204;
extern undefined *PTR_0021f208;

// USA 0021F088 <- EU 0021F088 (Ghidra, non-matching)
// GLOBAL DAT_0028fe70 int
// GLOBAL PTR_0021f1fc undefined *
// GLOBAL PTR_0021f200 undefined *
// GLOBAL PTR_0021f204 undefined *
// GLOBAL PTR_0021f208 undefined *
// GLOBAL UNK_0021f1ec undefined4
// GLOBAL UNK_0021f1f0 int *
// GLOBAL UNK_0021f1f4 undefined4 *
// GLOBAL UNK_0021f1f8 int

/* WARNING: Removing unreachable block (ram,0x0028fe5c) */

undefined4 func_0021F088(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  func_004FABDC(param_1,0x16,0,0);
  func_004FAB60(param_1,0,0);
  uVar8 = uRam0021f1ec;
  *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0xa60) = uVar8;
  *(undefined1 *)(param_1 + 0x9dc) = 2;
  *(undefined4 **)(param_1 + 0x910) = (undefined4 *)(param_1 + 0xa5c);
  func_0036C42C(param_1 + 0x8e8);
  puVar2 = puRam0021f1f4;
  piVar1 = piRam0021f1f0;
  puVar6 = (undefined4 *)
           func_005841A8(*piRam0021f1f0,*puRam0021f1f4,*(int **)(iRam0021f1f8 + *piRam0021f1f0));
  puVar4 = PTR_0021f200;
  puVar3 = PTR_0021f1fc;
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6) {
    do {
      puVar9 = (undefined4 *)*puVar6;
      if (((*(uint *)puVar3 & 1) == 0) &&
         (iVar7 = func_00100174((int *)PTR_0021f1fc), iVar7 != 0)) {
        *(undefined **)PTR_0021f204 = puVar4;
      }
      if ((puVar9 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar9)(puVar9,PTR_0021f204), iVar7 == 0)) {
        puVar9 = (undefined4 *)0x0;
      }
      if (puVar9 != (undefined4 *)0x0) {
        func_003583A0((int)puVar9);
      }
      puVar6 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar6 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6);
  }
  func_00547514(param_1 + 4);
  puVar3 = PTR_0021f208;
  bVar5 = func_00556E64(*(int *)PTR_0021f208);
  if (bVar5) {
    if ((*(uint *)(DAT_0028fe70 + *(short *)(*(int *)(*(int *)puVar3 + 0x14) + 0x42) * 0x10 + 4) &
        0x80) == 0) {
      uVar8 = 0;
    }
    else {
      iVar7 = func_002D55D0(*(int *)(*(int *)(*(int *)puVar3 + 0x14) + 0x48),0x69);
      uVar8 = 0;
      if (iVar7 != 0) {
        uVar8 = 1;
      }
    }
    return uVar8;
  }
  return 0;
}

