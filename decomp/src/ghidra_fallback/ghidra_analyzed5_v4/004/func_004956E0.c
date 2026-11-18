#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_003E2E74(int param_1);
extern int func_00494058(undefined4 *param_1);
extern undefined4 DAT_0049572c;
extern undefined4 *DAT_00495730;
extern undefined4 DAT_00495734;

// USA 004956E0 <- EU 004956B8 (Ghidra, non-matching)
// GLOBAL DAT_0049572c undefined4
// GLOBAL DAT_00495730 undefined4 *
// GLOBAL DAT_00495734 undefined4

int func_004956E0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = func_00494058(param_1);
  puVar4 = func_00494058(puVar3 + 0x35);
  uVar1 = DAT_0049572c;
  puVar4[0x35] = DAT_0049572c;
  func_001119F4(puVar4 + 0x36,DAT_00495730);
  uVar2 = DAT_00495734;
  puVar3 = DAT_00495730;
  puVar4[0x35] = DAT_00495734;
  func_001119F4(puVar4 + 0x42,puVar3);
  puVar3 = DAT_00495730;
  puVar4[0x4e] = uVar1;
  func_001119F4(puVar4 + 0x4f,puVar3);
  puVar4[0x4e] = uVar2;
  func_001119F4(puVar4 + 0x5b,DAT_00495730);
  iVar5 = func_003E2E74((int)(puVar4 + 0x67));
  return iVar5 + -0x270;
}

