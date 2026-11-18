#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_0045a6ac;
extern float DAT_0045a6b0;
extern int DAT_0045a6b4;
extern int *DAT_0045a6b8;

// USA 0045A570 <- EU 0045A548 (Ghidra, non-matching)
// GLOBAL DAT_0045a6ac int
// GLOBAL DAT_0045a6b0 float
// GLOBAL DAT_0045a6b4 int
// GLOBAL DAT_0045a6b8 int *

undefined4 func_0045A570(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint extraout_r1;
  int iVar8;
  uint extraout_r1_00;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045a6ac + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_0045a6b0;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x11e) = 0x13;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x11c),fparam_0);
  iVar2 = *(int *)(param_1 + 0x1dc);
  cVar1 = *(char *)(iVar2 + 0xd);
  bVar11 = cVar1 == '\x03';
  if (bVar11) {
    cVar1 = *(char *)(iVar2 + 0xe);
  }
  if (bVar11 && cVar1 == '\x03') {
    func_0012C718(iVar2);
  }
  uVar10 = 0;
  do {
    puVar3 = (uint *)(param_1 + 0x1c4);
    if (uVar10 < 6) {
      puVar3 = puVar3 + uVar10;
    }
    uVar4 = *puVar3;
    uVar7 = (uint)*(byte *)(uVar4 + 0xd);
    if (uVar7 == 3) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (uVar7 == 3 && uVar4 == 3) {
      piVar5 = (int *)(param_1 + 0x1c4);
      if (uVar10 < 6) {
        piVar5 = piVar5 + uVar10;
      }
      func_0012C718(*piVar5);
      uVar7 = extraout_r1;
    }
    iVar2 = DAT_0045a6b4;
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 6);
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  do {
    bVar11 = uVar10 < 3;
    if (bVar11) {
      uVar7 = uVar10 * 3;
    }
    puVar6 = (undefined2 *)(param_1 + 0x158);
    uVar9 = *(undefined4 *)(iVar2 + uVar10 * 4);
    if (bVar11) {
      puVar6 = puVar6 + uVar7 * 2;
    }
    iVar8 = param_1 + 0x158;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x1c);
    puVar6[1] = (short)uVar9;
    *puVar6 = 0;
    if (bVar11) {
      iVar8 = iVar8 + uVar10 * 0xc;
    }
    func_002313DC(iVar8);
    uVar10 = uVar10 + 1;
    uVar7 = extraout_r1_00;
  } while ((int)uVar10 < 3);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045a6b8);
}

