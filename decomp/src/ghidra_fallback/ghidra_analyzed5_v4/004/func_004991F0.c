#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010DB90(void);
extern int func_00495834(int param_1,int *param_2,int *param_3,undefined1 param_4);
extern int func_004959A8(int param_1,int *param_2,int *param_3,undefined1 param_4);
extern int func_00495B14(int param_1,undefined4 param_2,int *param_3);
extern uint *DAT_004992b4;
extern undefined4 *DAT_004992b8;
extern undefined4 DAT_004992bc;
extern undefined4 DAT_004992c0;

// USA 004991F0 <- EU 004991C8 (Ghidra, non-matching)
// GLOBAL DAT_004992b4 uint *
// GLOBAL DAT_004992b8 undefined4 *
// GLOBAL DAT_004992bc undefined4
// GLOBAL DAT_004992c0 undefined4

undefined4 func_004991F0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x1c);
  if (((*DAT_004992b4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004992b4), iVar2 != 0)) {
    *DAT_004992b8 = DAT_004992bc;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar3)(puVar3,DAT_004992b8), iVar2 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  if (param_2 == (int *)0x0) {
    param_2 = (int *)func_0010DB90();
  }
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
    return func_004959A8(puVar3[0x50],(int *)(param_1 + 0x20),param_2,1);
  }
  if (cVar1 == '\x02') {
    return func_00495B14(puVar3[0x50],*(undefined4 *)(param_1 + 0x28),param_2);
  }
  if (cVar1 == '\x03') {
    return func_00495834(puVar3[0x50],(int *)(param_1 + 0x20),param_2,1);
  }
  return 0;
}

