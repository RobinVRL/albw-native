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

// USA 001DE128 <- EU 001DE128 (Ghidra, non-matching)
// GLOBAL DAT_001de29c int *
// GLOBAL DAT_001de2a0 int *
// GLOBAL DAT_001de2a4 uint *
// GLOBAL DAT_001de2a8 undefined4 *
// GLOBAL DAT_001de2ac undefined4

undefined4 func_001DE128(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  piVar1 = DAT_001de29c;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = (uint)*(byte *)(iVar2 + 0x598);
  if ((uVar5 != 0) && (*(char *)(iVar2 + 0x6c1) == '\0')) {
    if ((param_2 < 0) &&
       (*(char *)(*DAT_001de2a0 + 0x18) == '\a' || *(char *)(*DAT_001de2a0 + 0x18) == '%')) {
      uVar3 = -param_2;
      if (-uVar5 != param_2 && (int)uVar5 <= -param_2) {
        uVar3 = uVar5;
      }
      if ((0 < (int)uVar3) && (*DAT_001de29c != 0)) {
        func_004C69DC(*DAT_001de29c,uVar3 & 0xffff);
      }
    }
    func_00149BD4((byte *)(iVar2 + 0x598),param_2);
    func_002902CC(*(int *)(iVar2 + 0x614),(char)param_3);
    if (*(char *)(*(int *)(iVar2 + 0x614) + 0xc6) == '\0') {
      iVar4 = 0x16;
    }
    else {
      iVar4 = 0x15;
    }
    puVar6 = *(undefined4 **)(iVar2 + iVar4 * 4 + 0x630);
    if (((*DAT_001de2a4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001de2a4), iVar2 != 0)) {
      *DAT_001de2a8 = DAT_001de2ac;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar6)(puVar6,DAT_001de2a8), iVar2 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    func_0038AF5C((int)puVar6);
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (func_004C6654(iVar2,0x23), param_3 == 0)) {
      func_004C6654(*piVar1,0x24);
    }
    return 1;
  }
  return 0;
}

