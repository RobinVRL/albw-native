#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CBCDC(undefined1 *param_1);
extern uint DAT_0016b2dc;
extern undefined4 DAT_0016b2e0;

// USA 0016B1B8 <- EU 0016B1B8 (Ghidra, non-matching)
// GLOBAL DAT_0016b2dc uint
// GLOBAL DAT_0016b2e0 undefined4

void func_0016B1B8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x1d0];
  #define abStack_1d0 ((byte *)(albw_frame + 0x0))
  *(undefined4 *)(param_1 + 0xf78) = 0;
  func_003CBCDC(abStack_1d0);
  uVar6 = (ulonglong)DAT_0016b2dc;
  uVar3 = 0;
  do {
    func_00110D44((undefined4 *)(*(int *)(param_1 + 0x10) + (uVar3 & 0xffff) * 0x278 + 4),
                  abStack_1d0,0x1b0);
    puVar2 = (undefined4 *)(param_1 + 0x284);
    if (uVar3 < 0x33) {
      puVar2 = (undefined4 *)(param_1 + 0x284 + uVar3 * 0x38);
    }
    uVar3 = uVar3 + 1;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x15) = 1;
    *(undefined1 *)((int)puVar2 + 0x16) = 1;
    *(undefined1 *)((int)puVar2 + 0x17) = 1;
    uVar5 = (undefined4)uVar6;
    puVar2[2] = uVar5;
    puVar2[3] = uVar5;
    puVar2[4] = uVar5;
  } while ((int)uVar3 < 0x30);
  *(undefined1 *)(param_1 + 0xfa8) = 1;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x98) + iVar4 * 4);
      (**(code **)*puVar2)(puVar2);
      iVar4 = iVar4 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 **)(param_1 + 0x9c) = puVar2;
    } while (iVar4 < *(int *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  bVar1 = 1 - *(char *)(param_1 + 0xf94);
  *(byte *)(param_1 + 0xf94) = bVar1;
  (**(code **)(**(int **)(param_1 + (uint)bVar1 * 4 + 0xf8c) + 0x28))(*(int **)(param_1 + (uint)bVar1 * 4 + 0xf8c));
  *(undefined1 *)(param_1 + 0xfa8) = 0;
  uVar5 = DAT_0016b2e0;
  *(undefined1 *)(param_1 + 0xfa9) = 0;
  *(undefined1 *)(param_1 + 0xfaa) = 0;
  *(undefined4 *)(param_1 + 0xf88) = uVar5;
  return;
}

