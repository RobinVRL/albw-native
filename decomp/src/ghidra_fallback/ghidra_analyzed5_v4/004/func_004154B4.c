#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003DD410(undefined4 param_1);
extern int func_003DDB68(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00415750(undefined4 *param_1);
extern uint *DAT_004155b8;
extern undefined4 *DAT_004155bc;
extern undefined4 DAT_004155c0;
extern undefined4 DAT_004155c4;
extern undefined4 DAT_004155c8;
extern undefined4 DAT_004155cc;

// USA 004154B4 <- EU 00415494 (Ghidra, non-matching)
// GLOBAL DAT_004155b8 uint *
// GLOBAL DAT_004155bc undefined4 *
// GLOBAL DAT_004155c0 undefined4
// GLOBAL DAT_004155c4 undefined4
// GLOBAL DAT_004155c8 undefined4
// GLOBAL DAT_004155cc undefined4

int func_004154B4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_stack_00000000;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define auStack_30 ((undefined1 *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 500) == '\0') {
    *(undefined1 *)(param_1 + 500) = 1;
    *(char *)(param_1 + 0x1f6) = (char)in_stack_00000010;
    *(undefined1 *)(param_1 + 0x1f7) = 0;
  }
  *(int *)(param_1 + 0x1f0) = in_stack_0000000c;
  puVar1 = DAT_004155b8;
  local_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (((*DAT_004155b8 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004155b8), iVar3 != 0)) {
    func_00415750(DAT_004155bc);
  }
  puVar2 = DAT_004155bc;
  if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004155b8), iVar3 != 0)) {
    func_00415750(puVar2);
  }
  if ((in_stack_0000000c == 1) && (in_stack_00000000 != 0)) {
    puVar4 = auStack_30;
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  iVar3 = func_003DDB68(&local_3c,DAT_004155cc,DAT_004155bc,puVar4);
  func_003DD410(in_stack_00000010);
  return (iVar3 >> 0x1f) + 1;
}

