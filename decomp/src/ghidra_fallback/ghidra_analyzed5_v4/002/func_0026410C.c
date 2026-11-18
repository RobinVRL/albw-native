#include "ghidra_types.h"

extern int func_00263620(int param_1,undefined1 *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0053A254(int param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern float DAT_002642c8;
extern float DAT_002642cc;
extern undefined4 DAT_002642d0;
extern undefined4 DAT_002642d4;

// USA 0026410C <- EU 00264134 (Ghidra, non-matching)
// GLOBAL DAT_002642c8 float
// GLOBAL DAT_002642cc float
// GLOBAL DAT_002642d0 undefined4
// GLOBAL DAT_002642d4 undefined4

undefined4 func_0026410C(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fparam_0_00;
  
  puVar5 = (undefined4 *)(param_1 + 0x8bc);
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  }
  if ((*(uint *)(param_1 + 0x8bc) < 0x1f) || (iVar2 = func_0053A254(param_1), iVar2 == 0)) {
    if (*(uint *)(param_1 + 0x8e8) <= *(uint *)(param_1 + 0x8e4)) {
      uVar3 = func_00263620(param_1,(undefined1 *)(param_1 + 0xa48));
      *(char *)(param_1 + 0x8e0) = (char)uVar3;
      *(uint *)(param_1 + 0xa10) = uVar3 << 0x1e;
      fparam_0_00 = DAT_002642cc;
      fparam_0 = DAT_002642c8;
      *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 1000);
      uVar1 = DAT_002642d4;
      uVar4 = DAT_002642d0;
      if (*(char *)(param_1 + 0xa48) == '\0') {
        *(undefined4 *)(param_1 + 0x8e8) = 0x96;
        *(undefined4 *)(param_1 + 0x8ec) = uVar1;
        *(undefined4 *)(param_1 + 0x8e4) = 0;
        uVar3 = *(uint *)(param_1 + 0xa10);
        func_004D80A4((float *)(param_1 + 0xa4c),uVar3,fparam_0);
        func_004D80A4((float *)(param_1 + 0x3dc),uVar3,fparam_0_00);
        uVar4 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x8e8) = 0x3c;
        *(undefined4 *)(param_1 + 0x8ec) = uVar4;
        *(undefined4 *)(param_1 + 0x8e4) = 0;
        uVar3 = *(uint *)(param_1 + 0xa10);
        func_004D80A4((float *)(param_1 + 0xa4c),uVar3,fparam_0);
        func_004D80A4((float *)(param_1 + 0x3dc),uVar3,fparam_0_00);
        uVar4 = 3;
      }
      *(undefined4 *)(param_1 + 0xa24) = uVar4;
      if ((int)*(char *)(param_1 + 0x8e0) == *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
        if (*(char *)(param_1 + 0xa48) == '\0') {
          return func_00660490(puVar5,2);
        }
        return func_00660490(puVar5,1);
      }
      return func_00660490(puVar5,5);
    }
  }
  else {
    func_00660490(puVar5,10);
  }
  return 0;
}

