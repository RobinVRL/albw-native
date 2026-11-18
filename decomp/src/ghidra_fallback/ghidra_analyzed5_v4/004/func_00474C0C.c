#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00474cac;
extern int *DAT_00474cb0;
extern undefined4 DAT_00474cb4;

// USA 00474C0C <- EU 00474BE4 (Ghidra, non-matching)
// GLOBAL DAT_00474cac float
// GLOBAL DAT_00474cb0 int *
// GLOBAL DAT_00474cb4 undefined4

void func_00474C0C(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  float fparam_0;
  
  fparam_0 = DAT_00474cac;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xee) = 0xc;
  *(undefined2 *)(param_1 + 0xec) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xec),fparam_0);
  func_002317C0((undefined2 *)(*(int *)(param_1 + 0xfc) + 0x2c),fparam_0);
  iVar2 = *(int *)(param_1 + 0xfc);
  func_00231448(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined2 *)(iVar2 + 0x5e) = 4;
  *(undefined2 *)(iVar2 + 0x5c) = 0;
  func_002317C0((undefined2 *)(iVar2 + 0x5c),fparam_0);
  if (*(char *)(*DAT_00474cb0 +
                (int)(short)(ushort)*(byte *)(param_1 + 0xf8) * (int)(short)DAT_00474cb4 * 4 +
               0x1742) != '\0') {
    iVar2 = *(int *)(param_1 + 0xfc);
    *(undefined1 *)(iVar2 + 0x158) = 1;
    puVar1 = (undefined2 *)(iVar2 + 0x20);
    *puVar1 = 0;
    func_002317C0(puVar1,fparam_0);
  }
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}

