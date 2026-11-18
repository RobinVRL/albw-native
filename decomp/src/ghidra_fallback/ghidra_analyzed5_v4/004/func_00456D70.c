#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00232468(int param_1);
extern int func_00459A84(int param_1,uint param_2);
extern int func_0045A090(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_00456f90;
extern int *DAT_00456f94;
extern int *DAT_00456f98;
extern int *DAT_00456f9c;
extern int *DAT_00456fa0;
extern int *DAT_00456fa4;

// USA 00456D70 <- EU 00456D48 (Ghidra, non-matching)
// GLOBAL DAT_00456f90 int
// GLOBAL DAT_00456f94 int *
// GLOBAL DAT_00456f98 int *
// GLOBAL DAT_00456f9c int *
// GLOBAL DAT_00456fa0 int *
// GLOBAL DAT_00456fa4 int *

void func_00456D70(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  func_00232468(param_1);
  func_0066D544((undefined4 *)(param_1 + 0x17c),'\0');
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_00456f90 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x02');
  uVar1 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x1e4);
    if (uVar1 < 3) {
      puVar4 = puVar4 + uVar1;
    }
    uVar5 = *puVar4;
    bVar7 = *(char *)(uVar5 + 0xd) == '\0';
    if (bVar7) {
      uVar5 = (uint)*(byte *)(uVar5 + 0xe);
    }
    if (bVar7 && uVar5 == 0) {
      piVar6 = (int *)(param_1 + 0x1e4);
      if (uVar1 < 3) {
        piVar6 = piVar6 + uVar1;
      }
      *(undefined1 *)(*piVar6 + 0xe) = 1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  func_00459A84(param_1,*(uint *)(*DAT_00456f94 + 0x4bdc));
  uVar1 = 0;
  do {
    piVar6 = (int *)(param_1 + 0x1c4);
    if (uVar1 < 6) {
      piVar6 = piVar6 + uVar1;
    }
    func_004B948C(param_1,*piVar6);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  func_004B948C(param_1,*(int *)(param_1 + 0x1dc));
  func_004B948C(param_1,*(int *)(param_1 + 0x1e0));
  uVar1 = 0;
  do {
    piVar6 = (int *)(param_1 + 0x1e4);
    if (uVar1 < 3) {
      piVar6 = piVar6 + uVar1;
    }
    func_004B948C(param_1,*piVar6);
    piVar6 = DAT_00456f98;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  func_0016656C(*DAT_00456f98,param_1);
  func_00166C00(*piVar6,1);
  piVar6 = DAT_00456f9c;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0xffffffff;
  if ((*(int *)(param_1 + 0x204) != 0) &&
     (iVar2 = func_005826A4(*DAT_00456f9c,local_28,DAT_00456fa0 + -0x20,DAT_00456fa0), iVar2 != 0))
  {
    func_001788DC(*(int *)(param_1 + 0x200),local_28);
    iVar2 = *(int *)(param_1 + 0x200);
    piVar3 = *(int **)(param_1 + 0x204);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(*(int *)(param_1 + 0x200) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x200) + 0x20) >> 1);
  }
  if ((*(int *)(param_1 + 0x20c) != 0) &&
     (iVar2 = func_005826A4(*piVar6,local_28,DAT_00456fa4 + -0x22,DAT_00456fa4), iVar2 != 0)) {
    func_001788DC(*(int *)(param_1 + 0x208),local_28);
    iVar2 = *(int *)(param_1 + 0x208);
    piVar6 = *(int **)(param_1 + 0x20c);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
    (**(code **)(*piVar6 + 0x60))
              (piVar6,*(undefined4 *)(*(int *)(param_1 + 0x208) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x208) + 0x20) >> 1);
  }
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  return;
}

