#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF8D4(int param_1,int param_2);
extern int func_002C00A8(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00448FD0(int param_1);
extern int func_0044AFE8(int param_1);
extern int func_0046A1D4(int param_1,int param_2);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_005194F4(int param_1);
extern int func_0051AAF8(int param_1);
extern int func_0051AD38(int param_1);
extern float DAT_0044ad2c;
extern undefined4 DAT_0044ad30;
extern undefined4 DAT_0044ad34;
extern int *DAT_0044ad38;

// USA 0044AAE8 <- EU 0044AAC0 (Ghidra, non-matching)
// GLOBAL DAT_0044ad2c float
// GLOBAL DAT_0044ad30 undefined4
// GLOBAL DAT_0044ad34 undefined4
// GLOBAL DAT_0044ad38 int *

/* WARNING: Removing unreachable block (ram,0x0044ab74) */
/* WARNING: Removing unreachable block (ram,0x0044ab80) */

void func_0044AAE8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  ulonglong uVar10;
  
  fVar9 = DAT_0044ad2c;
  uVar10 = (ulonglong)(uint)ALBW_AS_U32(DAT_0044ad2c);
  if (*(char *)(param_1 + 0x15d) == '\x02') {
    *(undefined2 *)(param_1 + 200) = 2;
    func_002317C0((undefined2 *)(param_1 + 200),fVar9);
    uVar1 = DAT_0044ad30;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x250) = uVar1;
    *(undefined4 *)(param_1 + 0x254) = uVar1;
    *(undefined4 *)(param_1 + 0x260) = DAT_0044ad34;
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    *(undefined1 *)(param_1 + 0x294) = 1;
  }
  func_002C00A8(*(int *)(param_1 + 0x14));
  iVar2 = *(int *)(param_1 + 0x14);
  uVar7 = 0;
  *(undefined4 *)(iVar2 + 4) = 0;
  puVar3 = (ushort *)(iVar2 + 0x16);
  *puVar3 = *puVar3 & 0xffbf;
  do {
    puVar4 = (uint *)(param_1 + 0x188);
    if (uVar7 < 4) {
      puVar4 = puVar4 + uVar7;
    }
    uVar5 = *puVar4;
    bVar8 = *(char *)(uVar5 + 0xd) == '\x03';
    if (bVar8) {
      uVar5 = (uint)*(byte *)(uVar5 + 0xe);
    }
    if (bVar8 && uVar5 == 3) {
      piVar6 = (int *)(param_1 + 0x188);
      if (uVar7 < 4) {
        piVar6 = piVar6 + uVar7;
      }
      func_0012C718(*piVar6);
    }
    piVar6 = DAT_0044ad38;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  func_0051AD38(*DAT_0044ad38);
  func_005194F4(*piVar6);
  func_0051AAF8(*piVar6);
  uVar7 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0x1ac);
    if (uVar7 < uVar5) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar7 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (*(char *)(iVar2 + 0x6c) != '\0') {
      if (uVar7 < uVar5) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar7 * 4);
      }
      else {
        iVar2 = 0;
      }
      if ((*(char *)(iVar2 + 0xd) == '\x01') ||
         ((*(char *)(iVar2 + 0xd) == '\x03' && (*(char *)(iVar2 + 0xe) == '\x03')))) {
        if (uVar7 < uVar5) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar7 * 4);
        }
        else {
          iVar2 = 0;
        }
        func_0012C718(iVar2);
      }
    }
    fVar9 = ALBW_AS_F32(uVar10);
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x14);
  func_0044AFE8(param_1);
  func_004727B8(*(int *)(param_1 + 0x20c),0);
  func_00231448(param_1 + 0xf8);
  func_002317C0((undefined2 *)(param_1 + 0x104),fVar9);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  iVar2 = *(int *)(param_1 + 0x214);
  if ((*(char *)(iVar2 + 0xd) == '\x01') ||
     ((*(char *)(iVar2 + 0xd) == '\x03' && (*(char *)(iVar2 + 0xe) == '\x03')))) {
    func_0012C718(iVar2);
    func_0046A1D4(*(int *)(param_1 + 0x214),0);
  }
  if (*(char *)(param_1 + 0x208) != '\0') {
    func_00448FD0(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x210);
  if (*(char *)(iVar2 + 0x5d) != '\0') {
    return;
  }
  func_002BF8D4(iVar2,1);
  func_002317C0((undefined2 *)(iVar2 + 0x6c),fVar9);
  return;
}

