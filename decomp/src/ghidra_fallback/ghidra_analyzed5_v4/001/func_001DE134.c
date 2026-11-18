#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00149BD4(byte *param_1,int param_2);
extern int func_002902CC(int param_1,undefined1 param_2);
extern int func_0038AF5C(int param_1);
extern int func_004C6654(int param_1,uint param_2);
extern int func_004C69DC(int param_1,int param_2);
extern int *DAT_001de29c;
extern int *DAT_001de2a0;
extern uint *DAT_001de2a4;
extern undefined4 *DAT_001de2a8;
extern undefined4 DAT_001de2ac;

// USA 001DE134 <- EU 001DE134 (Ghidra, non-matching)
// GLOBAL DAT_001de29c int *
// GLOBAL DAT_001de2a0 int *
// GLOBAL DAT_001de2a4 uint *
// GLOBAL DAT_001de2a8 undefined4 *
// GLOBAL DAT_001de2ac undefined4

undefined4 func_001DE134(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_001de29c;
  uVar4 = (uint)*(byte *)(param_1 + 0x598);
  if ((uVar4 != 0) && (*(char *)(param_1 + 0x6c1) == '\0')) {
    if ((param_2 < 0) &&
       (*(char *)(*DAT_001de2a0 + 0x18) == '\a' || *(char *)(*DAT_001de2a0 + 0x18) == '%')) {
      uVar2 = -param_2;
      if (-uVar4 != param_2 && (int)uVar4 <= -param_2) {
        uVar2 = uVar4;
      }
      if ((0 < (int)uVar2) && (*DAT_001de29c != 0)) {
        func_004C69DC(*DAT_001de29c,uVar2 & 0xffff);
      }
    }
    func_00149BD4((byte *)(param_1 + 0x598),param_2);
    func_002902CC(*(int *)(param_1 + 0x614),(char)param_3);
    if (*(char *)(*(int *)(param_1 + 0x614) + 0xc6) == '\0') {
      iVar3 = 0x16;
    }
    else {
      iVar3 = 0x15;
    }
    puVar5 = *(undefined4 **)(param_1 + iVar3 * 4 + 0x630);
    if (((*DAT_001de2a4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001de2a4), iVar3 != 0)) {
      *DAT_001de2a8 = DAT_001de2ac;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar5)(puVar5,DAT_001de2a8), iVar3 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    func_0038AF5C((int)puVar5);
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (func_004C6654(iVar3,0x23), param_3 == 0)) {
      func_004C6654(*piVar1,0x24);
    }
    return 1;
  }
  return 0;
}

