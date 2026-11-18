#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_0040F1C4(int param_1,int param_2,int param_3);
extern int func_0040F2E4(void);
extern int func_00413788(undefined4 *param_1);
extern int func_0041D840(int *param_1);
extern undefined4 DAT_00416020;

// USA 00415F4C <- EU 00415F2C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00416020 undefined4

undefined4 func_00415F4C(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)func_0041D840((int *)(param_1 + 0x94));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    func_00110490(puVar1,0x50);
    puVar1 = func_00413788(puVar1);
    *puVar1 = DAT_00416020;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  puVar1[0x11] = param_1;
  puVar1[6] = param_1;
  puVar1[0xf] = param_3;
  puVar1[0x10] = param_4;
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) & 1;
    if (uVar2 == 1) {
      puVar1[7] = *param_2;
    }
    uVar4 = (uint)(uVar2 == 1);
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      do {
        puVar1[uVar4 + 7] = param_2[uVar4];
        uVar2 = uVar2 + 2;
        puVar1[uVar4 + 8] = param_2[uVar4 + 1];
        uVar4 = uVar4 + 2;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
  }
  func_00112364((int *)(param_1 + 0x88),param_1 + 0x8c,puVar1 + 0x12);
  iVar3 = func_0040F2E4();
  return func_0040F1C4(iVar3,(int)puVar1,param_5 & 0xff);
}

