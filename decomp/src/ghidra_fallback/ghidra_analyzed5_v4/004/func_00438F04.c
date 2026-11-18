#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6D40(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00438fdc;

// USA 00438F04 <- EU 00438EE4 (Ghidra, non-matching)
// GLOBAL DAT_00438fdc float

void func_00438F04(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fparam_0;
  
  func_001B6D40(param_1);
  fparam_0 = DAT_00438fdc;
  if (*(int *)(param_1 + 0x1b4) == -1) {
    iVar2 = *(int *)(param_1 + 0x1a4);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar3 && cVar1 == '\x03') {
      func_0012C718(iVar2);
      func_00231448(param_1 + 0x74);
      func_002317C0((undefined2 *)(param_1 + 0x98),fparam_0);
    }
    iVar2 = *(int *)(param_1 + 0x1a8);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar3 && cVar1 == '\x03') {
      func_0012C718(iVar2);
      func_00231448(param_1 + 0x80);
      func_002317C0((undefined2 *)(param_1 + 0xa4),fparam_0);
    }
    iVar2 = *(int *)(param_1 + 0x1ac);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar3 && cVar1 == '\x03') {
      func_0012C718(iVar2);
      func_00231448(param_1 + 0x8c);
      func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
    }
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xbe) = 7;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xbc),fparam_0);
  return;
}

