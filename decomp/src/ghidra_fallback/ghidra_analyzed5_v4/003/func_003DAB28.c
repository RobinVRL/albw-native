#include "ghidra_types.h"

extern int func_003C7AEC(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6,int param_7,int param_8,uint param_9,int param_10);
extern int func_003C7EC0(void);
extern undefined4 DAT_003dab94;
extern uint DAT_003dab98;
extern uint DAT_003dab9c;
extern int DAT_003daba0;

// USA 003DAB28 <- EU 003DAB08 (Ghidra, non-matching)
// GLOBAL DAT_003dab94 undefined4
// GLOBAL DAT_003dab98 uint
// GLOBAL DAT_003dab9c uint
// GLOBAL DAT_003daba0 int

uint func_003DAB28(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_003dab98;
  uVar1 = DAT_003dab94;
  iVar3 = func_003C7EC0();
  uVar4 = DAT_003dab9c;
  if ((iVar3 < 0x801) &&
     (uVar4 = func_003C7AEC(DAT_003daba0,0,uVar1,uVar2,0,1,1,*(int *)(param_1 + 0x28),0x800,0),
     (uVar4 & 0x80000000) == 0)) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    uVar4 = 0;
  }
  return uVar4;
}

