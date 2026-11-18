#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern float DAT_0045935c;

// USA 00459280 <- EU 00459258 (Ghidra, non-matching)
// GLOBAL DAT_0045935c float

void func_00459280(int param_1)

{
  float fparam_0;
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar3 = *(int *)(param_1 + 0x1e0);
  bVar1 = func_00532C78(iVar3 + 0x90);
  fparam_0 = DAT_0045935c;
  uVar5 = (ulonglong)(uint)ALBW_AS_U32(DAT_0045935c);
  if (bVar1) {
    *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x9e) = 7;
    *(undefined2 *)(iVar3 + 0x9c) = 0;
    func_002317C0((undefined2 *)(iVar3 + 0x9c),fparam_0);
    func_00231448(iVar3 + 0x90);
  }
  iVar3 = *(int *)(param_1 + 0x1dc);
  bVar1 = func_00532C78(iVar3 + 0x90);
  if (bVar1) {
    *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x9e) = 7;
    *(undefined2 *)(iVar3 + 0x9c) = 0;
    func_002317C0((undefined2 *)(iVar3 + 0x9c),ALBW_AS_F32(uVar5));
    func_00231448(iVar3 + 0x90);
  }
  uVar4 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x1c4);
    if (uVar4 < 6) {
      piVar2 = piVar2 + uVar4;
    }
    iVar3 = *piVar2;
    bVar1 = func_00532C78(iVar3 + 0x90);
    if (bVar1) {
      *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined2 *)(iVar3 + 0x9e) = 7;
      *(undefined2 *)(iVar3 + 0x9c) = 0;
      func_002317C0((undefined2 *)(iVar3 + 0x9c),ALBW_AS_F32(uVar5));
      func_00231448(iVar3 + 0x90);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 6);
  return;
}

