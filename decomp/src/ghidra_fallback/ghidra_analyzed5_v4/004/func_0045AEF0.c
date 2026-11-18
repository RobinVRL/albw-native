#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_0045b19c;
extern float DAT_0045b1a0;
extern int DAT_0045b1a4;
extern int *DAT_0045b1a8;
extern int *DAT_0045b1ac;
extern int *DAT_0045b1b0;

// USA 0045AEF0 <- EU 0045AEC8 (Ghidra, non-matching)
// GLOBAL DAT_0045b19c int
// GLOBAL DAT_0045b1a0 float
// GLOBAL DAT_0045b1a4 int
// GLOBAL DAT_0045b1a8 int *
// GLOBAL DAT_0045b1ac int *
// GLOBAL DAT_0045b1b0 int *

undefined4 func_0045AEF0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045b19c + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_0045b1a0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  piVar2 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar2 + 200),'\b');
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x136) = 0x1e;
  *(undefined2 *)(param_1 + 0x134) = 1;
  func_002317C0((undefined2 *)(param_1 + 0x134),fparam_0);
  iVar6 = DAT_0045b1a4;
  uVar7 = (3 - *(int *)(param_1 + 0x230)) - *(int *)(param_1 + 0x214);
  piVar2 = (int *)(param_1 + 0x1e4);
  if (uVar7 < 3) {
    piVar2 = piVar2 + uVar7;
  }
  iVar8 = **(int **)(*piVar2 + 0x1c);
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),(int *)(DAT_0045b1a4 + uVar7 * 8));
  func_003FF904(iVar3,*(int *)(iVar8 + 0x10));
  piVar2 = (int *)(param_1 + 0x1e4);
  if (uVar7 < 3) {
    piVar2 = piVar2 + uVar7;
  }
  iVar8 = **(int **)(*piVar2 + 0x1c);
  iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045b1a8);
  func_003FF898(iVar3,*(int *)(iVar8 + 0x10));
  puVar4 = (uint *)(param_1 + 0x1e4);
  if (uVar7 < 3) {
    puVar4 = puVar4 + uVar7;
  }
  uVar5 = *puVar4;
  bVar9 = *(char *)(uVar5 + 0xd) == '\0';
  if (bVar9) {
    uVar5 = (uint)*(byte *)(uVar5 + 0xe);
  }
  if (bVar9 && uVar5 == 0) {
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar7 < 3) {
      piVar2 = piVar2 + uVar7;
    }
    *(undefined1 *)(*piVar2 + 0xe) = 1;
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar7 < 3) {
      piVar2 = piVar2 + uVar7;
    }
    func_0066E58C((undefined4 *)(*piVar2 + 200),'\n');
  }
  uVar7 = *(uint *)(param_1 + 0x230);
  piVar2 = (int *)(param_1 + 0x1e4);
  if (uVar7 < 3) {
    piVar2 = piVar2 + uVar7;
  }
  iVar3 = **(int **)(*piVar2 + 0x1c);
  iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),(int *)(iVar6 + uVar7 * 8));
  func_003FF904(iVar6,*(int *)(iVar3 + 0x10));
  piVar2 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x230) < 3) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0x230);
  }
  iVar3 = **(int **)(*piVar2 + 0x1c);
  iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045b1ac);
  func_003FF898(iVar6,*(int *)(iVar3 + 0x10));
  uVar7 = *(uint *)(param_1 + 0x230);
  puVar4 = (uint *)(param_1 + 0x1e4);
  if (uVar7 < 3) {
    puVar4 = puVar4 + uVar7;
  }
  uVar5 = *puVar4;
  bVar9 = *(char *)(uVar5 + 0xd) == '\0';
  if (bVar9) {
    uVar5 = (uint)*(byte *)(uVar5 + 0xe);
  }
  if (bVar9 && uVar5 == 0) {
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar7 < 3) {
      piVar2 = piVar2 + uVar7;
    }
    *(undefined1 *)(*piVar2 + 0xe) = 1;
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x230) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x230);
    }
    func_0066E58C((undefined4 *)(*piVar2 + 200),'\n');
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  iVar6 = *(int *)(param_1 + 0x1dc);
  cVar1 = *(char *)(iVar6 + 0xd);
  bVar9 = cVar1 == '\x03';
  if (bVar9) {
    cVar1 = *(char *)(iVar6 + 0xe);
  }
  if (bVar9 && cVar1 == '\x03') {
    func_0012C718(iVar6);
  }
  uVar7 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x1c4);
    if (uVar7 < 6) {
      puVar4 = puVar4 + uVar7;
    }
    uVar5 = *puVar4;
    bVar9 = *(char *)(uVar5 + 0xd) == '\x03';
    if (bVar9) {
      uVar5 = (uint)*(byte *)(uVar5 + 0xe);
    }
    if (bVar9 && uVar5 == 3) {
      piVar2 = (int *)(param_1 + 0x1c4);
      if (uVar7 < 6) {
        piVar2 = piVar2 + uVar7;
      }
      func_0012C718(*piVar2);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 6);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045b1b0);
}

