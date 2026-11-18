#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002508EC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_003c27c8;
extern int *DAT_003c27cc;
extern uint *DAT_003c27d0;
extern undefined4 *DAT_003c27d4;
extern undefined4 DAT_003c27d8;
extern float DAT_003c27dc;

// USA 003C26D0 <- EU 003C26AC (Ghidra, non-matching)
// GLOBAL DAT_003c27c8 int *
// GLOBAL DAT_003c27cc int *
// GLOBAL DAT_003c27d0 uint *
// GLOBAL DAT_003c27d4 undefined4 *
// GLOBAL DAT_003c27d8 undefined4
// GLOBAL DAT_003c27dc float

undefined4 func_003C26D0(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_003c27c8 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  uVar1 = *(ushort *)(param_2 + 0x20);
  bVar4 = (uVar1 & 0x7e0) == 0x1e0;
  if (bVar4) {
    uVar1 = uVar1 & 0x1f;
  }
  if (bVar4 && uVar1 == 6) {
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = func_00588BE4((int)puVar2);
    if (iVar3 == *DAT_003c27cc) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      if (*(char *)(param_1 + 0x77) == '\0') {
        return 0;
      }
      if (((*DAT_003c27d0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003c27d0), iVar3 != 0)) {
        *DAT_003c27d4 = DAT_003c27d8;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,DAT_003c27d4);
      if (iVar3 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      func_002508EC((int)puVar2);
      return 0;
    }
    if (*(int *)(param_1 + 0x38) == iVar3) {
      return 0;
    }
  }
  if (*(float *)(param_2 + 8) < DAT_003c27dc) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0xc0) {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  return 1;
}

