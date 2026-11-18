#include "ghidra_types.h"

extern int func_0014D134(int param_1);
extern int func_0043BFD4(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004B083C(void);
extern int func_004B3B10(void);
extern int func_00503970(int param_1,uint param_2);
extern int *DAT_00518f48;
extern int *DAT_00518f4c;
extern int *DAT_00518f50;

// USA 00518D08 <- EU 00518CE0 (Ghidra, non-matching)
// GLOBAL DAT_00518f48 int *
// GLOBAL DAT_00518f4c int *
// GLOBAL DAT_00518f50 int *

void func_00518D08(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_r2;
  int in_r3;
  bool bVar6;
  bool bVar7;
  
  *(undefined1 *)(param_1 + 0x33c) = 0;
  piVar2 = DAT_00518f4c;
  if (*(char *)(*DAT_00518f48 + 0x25) != '\0') {
    return;
  }
  if (((*(char *)(*DAT_00518f4c + 0x18) != '\a') && (*(char *)(*DAT_00518f4c + 0x18) != '%')) &&
     (iVar4 = func_004B083C(), iVar4 == 0)) {
    iVar4 = *(int *)(param_1 + 0x80);
    uVar5 = (uint)*(byte *)(iVar4 + 0xd);
    bVar6 = uVar5 == 3;
    if (bVar6) {
      uVar5 = (uint)*(byte *)(iVar4 + 0xe);
    }
    if (bVar6 && uVar5 == 3) {
      func_0043BFD4(iVar4,uVar5,in_r2,in_r3);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x28))(*(int **)(param_1 + 0x6c));
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined2 *)(param_1 + 0x74) = 0xffff;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      if (*(int **)(param_1 + 0x50) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x50) + 0x28))(*(int **)(param_1 + 0x50));
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0xffff;
    }
  }
  piVar3 = DAT_00518f50;
  uVar5 = (uint)*(char *)(*piVar2 + 0x18);
  bVar7 = 4 < uVar5;
  bVar6 = uVar5 == 5;
  if (5 < uVar5) {
    bVar7 = 3 < uVar5 - 0x16;
    bVar6 = uVar5 - 0x16 == 4;
  }
  if (bVar7 && !bVar6) {
    if (uVar5 - 9 < 0xd) {
      func_00503970(*DAT_00518f50,5);
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      iVar4 = func_004B083C();
      if (iVar4 == 0) {
        if ((*(char *)(*piVar2 + 0x18) == '\a') || (*(char *)(*piVar2 + 0x18) == '%')) {
          func_00503970(*piVar3,0xb);
        }
      }
      else {
        bVar6 = func_004B3B10();
        if (bVar6) {
          func_00503970(*piVar3,10);
        }
        func_00503970(*piVar3,4);
        *(undefined1 *)(param_1 + 0x33c) = 1;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
    }
    goto LAB_00518f38;
  }
  func_00503970(*DAT_00518f50,7);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  cVar1 = *(char *)(*piVar2 + 0x18);
  if (cVar1 == '\n') {
LAB_00518eac:
    func_00503970(*piVar3,9);
  }
  else {
    if (cVar1 < '\v') {
      if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
      goto LAB_00518eac;
    }
    else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
    goto LAB_00518eac;
    func_00503970(*piVar3,3);
  }
  if ((int)*(char *)(*piVar2 + 0x18) - 0x18U < 3) {
    func_00503970(*piVar3,5);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
LAB_00518f38:
  func_0014D134(*(int *)(param_1 + 300));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}

