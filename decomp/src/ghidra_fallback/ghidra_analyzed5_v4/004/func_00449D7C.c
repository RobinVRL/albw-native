#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0012C790(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0043C4FC(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00448FD0(int param_1);
extern int func_0044AFE8(int param_1);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_004B989C(int param_1);
extern int func_005194F4(int param_1);
extern int func_0051AAF8(int param_1);
extern int func_0051AD38(int param_1);
extern int func_0051B8B0(int param_1);
extern float DAT_00449f98;
extern int *DAT_00449f9c;
extern undefined4 DAT_00449fa0;
extern undefined4 DAT_00449fa4;

// USA 00449D7C <- EU 00449D54 (Ghidra, non-matching)
// GLOBAL DAT_00449f98 float
// GLOBAL DAT_00449f9c int *
// GLOBAL DAT_00449fa0 undefined4
// GLOBAL DAT_00449fa4 undefined4

/* WARNING: Removing unreachable block (ram,0x00449e58) */
/* WARNING: Removing unreachable block (ram,0x00449e68) */

void func_00449D7C(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  float fparam_0;
  ulonglong uVar10;
  
  func_00231448(param_1 + 0xe0);
  uVar10 = (ulonglong)(uint)ALBW_AS_U32(DAT_00449f98);
  func_002317C0((undefined2 *)(param_1 + 0xd4),DAT_00449f98);
  piVar1 = DAT_00449f9c;
  func_0043C4FC(*(int *)(*DAT_00449f9c + 0x80));
  if (*(char *)(param_1 + 0x15d) == '\x02') {
    *(undefined2 *)(param_1 + 200) = 2;
    func_002317C0((undefined2 *)(param_1 + 200),ALBW_AS_F32(uVar10));
    uVar2 = DAT_00449fa0;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x250) = uVar2;
    *(undefined4 *)(param_1 + 0x254) = uVar2;
    *(undefined4 *)(param_1 + 0x260) = DAT_00449fa4;
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    *(undefined1 *)(param_1 + 0x294) = 1;
  }
  fparam_0 = ALBW_AS_F32(uVar10);
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    func_00231448(param_1 + 0xf8);
    func_002317C0((undefined2 *)(param_1 + 0x104),ALBW_AS_F32(uVar10));
    func_004727B8(*(int *)(param_1 + 0x20c),0);
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar3 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar3 + 4) = 0;
    puVar4 = (ushort *)(iVar3 + 0x16);
    *puVar4 = *puVar4 & 0xffbf;
    func_0012C790(*(int *)(param_1 + 0x214));
    if (*(char *)(param_1 + 0x208) != '\0') {
      func_00448FD0(param_1);
    }
    uVar8 = 0;
    do {
      piVar5 = (int *)(param_1 + 0x188);
      if (uVar8 < 4) {
        piVar5 = piVar5 + uVar8;
      }
      func_0012C790(*piVar5);
      fparam_0 = ALBW_AS_F32(uVar10);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 4);
  }
  func_00231448(param_1 + 0x110);
  func_002317C0((undefined2 *)(param_1 + 0x11c),fparam_0);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  func_0051B8B0(*piVar1);
  func_0051AD38(*piVar1);
  func_005194F4(*piVar1);
  func_0051AAF8(*piVar1);
  uVar8 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x1ac);
    if (uVar8 < uVar6) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(char *)(iVar3 + 0x6c) != '\0') {
      if (uVar8 < uVar6) {
        uVar7 = *(uint *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
      }
      else {
        uVar7 = 0;
      }
      bVar9 = *(char *)(uVar7 + 0xd) == '\x03';
      if (bVar9) {
        uVar7 = (uint)*(byte *)(uVar7 + 0xe);
      }
      if (bVar9 && uVar7 == 3) {
        if (uVar8 < uVar6) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
        }
        else {
          iVar3 = 0;
        }
        func_0012C718(iVar3);
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x14);
  func_0044AFE8(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x16;
  func_004B989C(*(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x284) = 0;
  return;
}

