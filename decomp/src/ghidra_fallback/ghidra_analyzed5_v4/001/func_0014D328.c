#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00438700(undefined4 *param_1);
extern int func_00443A4C(undefined4 *param_1);
extern int func_00450134(undefined4 *param_1);
extern int func_004647C8(undefined4 *param_1);
extern int func_0047DF20(undefined4 *param_1);
extern int func_0047F02C(undefined4 *param_1);
extern int func_00480DE4(undefined4 *param_1);
extern int func_004847A0(undefined4 *param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int *DAT_0014d48c;
extern int *DAT_0014d490;

// USA 0014D328 <- EU 0014D328 (Ghidra, non-matching)
// GLOBAL DAT_0014d48c int *
// GLOBAL DAT_0014d490 int *

void func_0014D328(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(*DAT_0014d48c + 0x18) == '\a' || *(char *)(*DAT_0014d48c + 0x18) == '%') {
    puVar1 = (undefined4 *)func_0010BAB4(0x74);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_00438700(puVar1);
    }
    *(int **)(param_1 + 0x1c) = piVar2;
    func_004B9958((int)piVar2,2);
    puVar1 = (undefined4 *)func_0010BAB4(0xb8);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_004647C8(puVar1);
    }
    *(int **)(param_1 + 0x20) = piVar2;
    func_004B9958((int)piVar2,4);
    *(undefined1 *)(*(int *)(param_1 + 0x20) + 0xe) = 1;
    puVar1 = (undefined4 *)func_0010BAB4(0xdc);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_00443A4C(puVar1);
    }
    *(int **)(param_1 + 0x34) = piVar2;
    puVar1 = (undefined4 *)func_0010BAB4(0x120);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_00480DE4(puVar1);
    }
    *(int **)(param_1 + 0x38) = piVar2;
    puVar1 = (undefined4 *)func_0010BAB4(0xd8);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = func_0047DF20(puVar1);
    }
    func_004B9958((int)piVar2,8);
    *(int **)(param_1 + 0x24) = piVar2;
    puVar1 = (undefined4 *)func_0010BAB4(0xa8);
    iVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = func_0047F02C(puVar1);
    }
    *(int *)(param_1 + 0x3c) = iVar3;
    *(undefined1 *)(iVar3 + 0xe) = 1;
    puVar4 = (undefined4 *)func_0010BAB4(0x74);
    puVar1 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = func_00450134(puVar4);
    }
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    puVar1 = (undefined4 *)func_0010BAB4(0xf4);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_004847A0(puVar1);
    }
    *(int **)(param_1 + 0x44) = piVar2;
    iVar6 = *DAT_0014d490;
    iVar3 = *(int *)(iVar6 + 0x80);
    uVar5 = *(uint *)(iVar3 + 0x18);
    *(uint *)(iVar3 + 0x18) = uVar5 & 0xfffffffe;
    *(uint *)(*(int *)(iVar6 + 0x80) + 0x18) = uVar5 & 0xfffffffc;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}

