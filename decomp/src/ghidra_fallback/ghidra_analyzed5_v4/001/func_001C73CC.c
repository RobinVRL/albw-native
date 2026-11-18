#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00391558(int param_1);
extern float func_00521238(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0065BF44(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001c74bc;
extern undefined4 *DAT_001c74c0;
extern int DAT_001c74c4;
extern uint *DAT_001c74c8;
extern undefined4 *DAT_001c74cc;
extern undefined4 DAT_001c74d0;

// USA 001C73CC <- EU 001C73CC (Ghidra, non-matching)
// GLOBAL DAT_001c74bc int *
// GLOBAL DAT_001c74c0 undefined4 *
// GLOBAL DAT_001c74c4 int
// GLOBAL DAT_001c74c8 uint *
// GLOBAL DAT_001c74cc undefined4 *
// GLOBAL DAT_001c74d0 undefined4

void func_001C73CC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  
  if (*(uint *)(param_1 + 0x438) < *(uint *)(param_1 + 0x43c)) {
    *(uint *)(param_1 + 0x438) = *(uint *)(param_1 + 0x438) + 1;
  }
  else {
    fVar3 = func_00521238(param_1);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar3)) {
      func_0065BF44((undefined4 *)(param_1 + 0x414),3);
    }
    if (*(char *)(param_1 + 0x447) == '\0') {
      puVar1 = (undefined4 *)
               func_005841A8(*DAT_001c74bc,*DAT_001c74c0,*(int **)(DAT_001c74c4 + *DAT_001c74bc));
      puVar1 = (undefined4 *)*puVar1;
      if (((*DAT_001c74c8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001c74c8), iVar2 != 0)) {
        *DAT_001c74cc = DAT_001c74d0;
      }
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar1)(puVar1,DAT_001c74cc), iVar2 == 0)) {
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        func_00391558((int)puVar1);
        *(undefined1 *)(param_1 + 0x447) = 1;
      }
    }
  }
  return;
}

