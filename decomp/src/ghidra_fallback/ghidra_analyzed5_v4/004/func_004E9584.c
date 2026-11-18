// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00149D44(int param_1);
extern int func_0014A098(int param_1);
extern int func_0014A0FC(int param_1);
extern int func_002591B4(int param_1);
extern int func_00259938(int param_1);
extern int func_0029753C(int *param_1);
extern int func_00320E80(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_00320EC4(int param_1);
extern int func_004091F8(int param_1);
extern int func_004B083C(void);
extern int func_00556E64(int param_1);
extern int *DAT_004e9728;
extern int *DAT_004e972c;
extern float DAT_004e9730;
extern uint DAT_004e9734;
extern uint DAT_004e9738;
extern uint DAT_004e973c;
extern uint DAT_004e9740;
extern uint DAT_004e9744;
extern uint DAT_004e9748;
extern uint DAT_004e974c;
extern int *DAT_004e9750;

// USA 004E9584 <- EU 004E955C (Ghidra, non-matching)
// GLOBAL DAT_004e9728 int *
// GLOBAL DAT_004e972c int *
// GLOBAL DAT_004e9730 float
// GLOBAL DAT_004e9734 uint
// GLOBAL DAT_004e9738 uint
// GLOBAL DAT_004e973c uint
// GLOBAL DAT_004e9740 uint
// GLOBAL DAT_004e9744 uint
// GLOBAL DAT_004e9748 uint
// GLOBAL DAT_004e974c uint
// GLOBAL DAT_004e9750 int *

undefined4 func_004E9584(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fparam_0;
  
  *(undefined1 *)(param_1 + 0x79) = 0;
  func_002591B4(*(int *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x81) = 0;
  if (*(char *)(param_1 + 0x82) != '\0') {
    *(undefined1 *)(param_1 + 0x83) = 1;
  }
  if (*(char *)(*DAT_004e9728 + 0x25) == '\x02' || *(char *)(*DAT_004e9728 + 0x25) == '\x03') {
    fparam_0 = DAT_004e9730;
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9734,0,DAT_004e9730);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9738,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e973c,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9740,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9744,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9748,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e974c,0,fparam_0);
  }
  else {
    func_00320EC4(*(int *)(param_1 + 0x24));
  }
  func_00149D44(*(int *)(param_1 + 0x34));
  func_004091F8(*(int *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffb;
  iVar2 = func_004B083C();
  if (iVar2 == 0) {
    bVar1 = func_00556E64(*DAT_004e9750);
    if (bVar1) {
      func_0014A098(*(int *)(param_1 + 0x34));
      uVar3 = *(uint *)(param_1 + 0x60) & 0xfffffffe;
    }
    else {
      func_0014A0FC(*(int *)(param_1 + 0x34));
      uVar3 = *(uint *)(param_1 + 0x60) | 1;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
  }
  else {
    func_0014A098(*(int *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe | 6;
    if (*(int *)(*DAT_004e972c + 0x1c) == 8) {
      *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x86) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(iVar2 + 0x84) = 1;
  *(undefined1 *)(iVar2 + 0x85) = 1;
  *(undefined1 *)(iVar2 + 0x86) = 1;
  func_0029753C(*(int **)(param_1 + 0x38));
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  return func_00259938(*(int *)(param_1 + 0x50));
}

