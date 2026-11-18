#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00291948(int param_1,undefined1 *param_2,undefined4 param_3);
extern int func_00391558(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_001c6f8c;
extern undefined4 *DAT_001c6f90;
extern int DAT_001c6f94;
extern uint *DAT_001c6f98;
extern undefined4 *DAT_001c6f9c;
extern undefined4 DAT_001c6fa0;
extern int *DAT_001c6fa4;

// USA 001C6EB0 <- EU 001C6EB0 (Ghidra, non-matching)
// GLOBAL DAT_001c6f8c int *
// GLOBAL DAT_001c6f90 undefined4 *
// GLOBAL DAT_001c6f94 int
// GLOBAL DAT_001c6f98 uint *
// GLOBAL DAT_001c6f9c undefined4 *
// GLOBAL DAT_001c6fa0 undefined4
// GLOBAL DAT_001c6fa4 int *

void func_001C6EB0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x444) != '\0') {
    puVar1 = (undefined4 *)
             func_005841A8(*DAT_001c6f8c,*DAT_001c6f90,*(int **)(DAT_001c6f94 + *DAT_001c6f8c));
    puVar1 = (undefined4 *)*puVar1;
    if (((*DAT_001c6f98 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001c6f98), iVar2 != 0)) {
      *DAT_001c6f9c = DAT_001c6fa0;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_001c6f9c), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      func_00391558((int)puVar1);
    }
    *(undefined1 *)(param_1 + 0x444) = 0;
    *(undefined1 *)(param_1 + 0x447) = 0;
  }
  if (*(char *)(param_1 + 0x445) != '\0') {
    iVar2 = func_00291948(*DAT_001c6fa4,(undefined1 *)(param_1 + 0x450),
                          *(undefined4 *)(param_1 + 0x2cc));
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x446) = 1;
    }
    *(undefined1 *)(param_1 + 0x445) = 0;
  }
  return;
}

