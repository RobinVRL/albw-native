#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0044AFE8(int param_1);
extern int func_00532C2C(int param_1);
extern int func_00532C78(int param_1);
extern float DAT_00449098;

// USA 00448FD0 <- EU 00448FA8 (Ghidra, non-matching)
// GLOBAL DAT_00449098 float

/* WARNING: Removing unreachable block (ram,0x00448fc4) */
/* WARNING: Removing unreachable block (ram,0x00448fd4) */

void func_00448FD0(int param_1)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  float fparam_0;
  
  func_0044AFE8(param_1);
  iVar2 = *(int *)(param_1 + 0x230);
  *(undefined4 *)(iVar2 + 4) = 0;
  puVar3 = (ushort *)(iVar2 + 0x16);
  *puVar3 = *puVar3 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x230));
  if (((*(ushort *)(param_1 + 0xec) & 0xff) != 2) &&
     (iVar2 = func_00532C2C(param_1 + 0xec), iVar2 != 0)) {
    return;
  }
  fparam_0 = DAT_00449098;
  *(undefined2 *)(param_1 + 0xec) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xec),fparam_0);
  bVar1 = func_00532C78(param_1 + 0x128);
  if (bVar1) {
    func_00231448(param_1 + 0x134);
    func_002313DC(param_1 + 0x14c);
  }
  else {
    func_00231448(param_1 + 0x134);
    func_002313DC(param_1 + 0x128);
    *(undefined2 *)(param_1 + 0x14c) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x14c),fparam_0);
  }
  *(undefined2 *)(param_1 + 0x140) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  return;
}

