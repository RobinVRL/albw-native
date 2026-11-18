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
extern int DAT_00459a10;
extern float DAT_00459a14;
extern int DAT_00459a18;
extern int *DAT_00459a1c;
extern int *DAT_00459a20;

// USA 0045972C <- EU 00459704 (Ghidra, non-matching)
// GLOBAL DAT_00459a10 int
// GLOBAL DAT_00459a14 float
// GLOBAL DAT_00459a18 int
// GLOBAL DAT_00459a1c int *
// GLOBAL DAT_00459a20 int *

undefined4 func_0045972C(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_00459a10 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fVar9 = DAT_00459a14;
  if (*(char *)(param_1 + 0x181) == '\x06') {
    *(undefined2 *)(param_1 + 0x140) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x140),fVar9);
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
    }
    func_0066E58C((undefined4 *)(*piVar2 + 200),'\b');
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0x1e;
    *(undefined2 *)(param_1 + 0x134) = 1;
    func_002317C0((undefined2 *)(param_1 + 0x134),fVar9);
    uVar7 = *(uint *)(param_1 + 0x230);
    piVar2 = (int *)(param_1 + 0x1e4);
    if (uVar7 < 3) {
      piVar2 = piVar2 + uVar7;
    }
    iVar6 = **(int **)(*piVar2 + 0x1c);
    iVar4 = func_005229AC(*(int **)(param_1 + 0x1c),(int *)(DAT_00459a18 + uVar7 * 8));
    func_003FF904(iVar4,*(int *)(iVar6 + 0x10));
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x230) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x230);
    }
    iVar6 = **(int **)(*piVar2 + 0x1c);
    iVar4 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_00459a1c);
    func_003FF898(iVar4,*(int *)(iVar6 + 0x10));
    uVar7 = *(uint *)(param_1 + 0x230);
    puVar5 = (uint *)(param_1 + 0x1e4);
    if (uVar7 < 3) {
      puVar5 = puVar5 + uVar7;
    }
    uVar3 = *puVar5;
    bVar8 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar8) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (bVar8 && uVar3 == 0) {
      piVar2 = (int *)(param_1 + 0x1e4);
      if (uVar7 < 3) {
        piVar2 = piVar2 + uVar7;
      }
      *(undefined1 *)(*piVar2 + 0xe) = 1;
      piVar2 = (int *)(param_1 + 0x1e4);
      if (*(uint *)(param_1 + 0x230) < 3) {
        piVar2 = piVar2 + *(uint *)(param_1 + 0x230);
      }
      func_0066E58C((undefined4 *)(*piVar2 + 200),'\r');
    }
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xfa) = 0xf;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    func_002317C0((undefined2 *)(param_1 + 0xf8),fVar9);
    iVar4 = *(int *)(param_1 + 0x1dc);
    cVar1 = *(char *)(iVar4 + 0xd);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(iVar4 + 0xe);
    }
    if (bVar8 && cVar1 == '\x03') {
      func_0012C718(iVar4);
    }
    uVar7 = 0;
    do {
      puVar5 = (uint *)(param_1 + 0x1c4);
      if (uVar7 < 6) {
        puVar5 = puVar5 + uVar7;
      }
      uVar3 = *puVar5;
      bVar8 = *(char *)(uVar3 + 0xd) == '\x03';
      if (bVar8) {
        uVar3 = (uint)*(byte *)(uVar3 + 0xe);
      }
      if (bVar8 && uVar3 == 3) {
        piVar2 = (int *)(param_1 + 0x1c4);
        if (uVar7 < 6) {
          piVar2 = piVar2 + uVar7;
        }
        func_0012C718(*piVar2);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 6);
  }
  else {
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x230) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x230);
    }
    func_0066E58C((undefined4 *)(*piVar2 + 200),'\f');
    if ((*(int *)(param_1 + 0x230) == 2) ||
       ((*(int *)(param_1 + 0x214) == 2 && (*(int *)(param_1 + 0x230) == 1)))) {
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x136) = 0x1f;
      *(undefined2 *)(param_1 + 0x134) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x134),fVar9);
    }
    uVar7 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x214);
      bVar8 = uVar3 != uVar7;
      if (bVar8) {
        uVar3 = *(uint *)(param_1 + 0x230);
      }
      if (bVar8 && uVar3 != uVar7) {
        piVar2 = (int *)(param_1 + 0x1e4);
        if (uVar7 < 3) {
          piVar2 = piVar2 + uVar7;
        }
        cVar1 = *(char *)(*piVar2 + 0xd);
        if ((cVar1 == '\x01') || ((cVar1 == '\x03' && (*(char *)(*piVar2 + 0xe) == '\x03')))) {
          piVar2 = (int *)(param_1 + 0x1e4);
          if (uVar7 < 3) {
            piVar2 = piVar2 + uVar7;
          }
          func_0012C718(*piVar2);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 3);
  }
  iVar4 = *(int *)(param_1 + 0x1c4);
  cVar1 = *(char *)(iVar4 + 0xd);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)(iVar4 + 0xe);
  }
  if (bVar8 && cVar1 == '\0') {
    *(undefined1 *)(iVar4 + 0xe) = 1;
  }
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_00459a20);
}

