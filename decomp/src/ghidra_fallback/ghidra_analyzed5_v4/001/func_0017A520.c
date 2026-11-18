#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);

// USA 0017A520 <- EU 0017A520 (Ghidra, non-matching)

undefined4 * func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 4;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(char *)((int)param_1 + 0x2e) = (char)param_4;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0xd) = 3;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  func_0010B3EC(param_1 + 0x11,4,(int)(param_1 + 0x14));
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff;
  if (*(ushort *)(param_1 + 1) != 0) {
    uVar1 = func_0010CEE0((uint)*(ushort *)(param_1 + 1),param_3,4);
    param_1[3] = uVar1;
    param_1[2] = uVar1;
  }
  iVar4 = 0;
  if (param_4 == 0) {
    do {
      puVar2 = (undefined4 *)func_0010BAB4(0x78);
      puVar3 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = func_0017A520(puVar2,0x80,param_3,1);
      }
      if ((int)param_1[0x11] < (int)param_1[0x12]) {
        *(undefined4 **)(param_1[0x13] + param_1[0x11] * 4) = puVar3;
        param_1[0x11] = param_1[0x11] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x66) = 0;
  return param_1;
}

