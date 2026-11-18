#include "ghidra_types.h"

extern int func_004C9684(int param_1,int param_2);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern float func_004FAD90(int param_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004ca458;
extern int *DAT_004ca45c;
extern undefined4 DAT_004ca460;

// USA 004CA3D0 <- EU 004CA3A8 (Ghidra, non-matching)
// GLOBAL DAT_004ca458 int *
// GLOBAL DAT_004ca45c int *
// GLOBAL DAT_004ca460 undefined4

void func_004CA3D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar4;
  int *piVar3;
  
  piVar3 = DAT_004ca458;
  if (*(char *)(param_1 + 0x8e5) != '\x04') {
    piVar3 = DAT_004ca45c;
  }
  iVar2 = *piVar3;
  *(int *)(param_1 + 0x97c) = iVar2;
  func_004C9684(param_1,iVar2);
  puVar4 = func_004CADD8(param_1,*(uint *)(param_1 + 0x930));
  uVar1 = DAT_004ca460;
  if (puVar4 == (undefined4 *)0x0) {
    func_0066A284((undefined4 *)(param_1 + 0x8bc),5);
  }
  else {
    *(undefined4 *)(param_1 + 0x984) = 6;
    *(undefined4 *)(param_1 + 0x988) = uVar1;
    *(undefined4 *)(param_1 + 0x980) = 0;
    *(undefined4 *)(param_1 + 0x954) = 0;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  func_004FAD90(param_1);
  return;
}

