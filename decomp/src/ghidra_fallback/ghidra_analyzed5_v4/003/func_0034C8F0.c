#include "ghidra_types.h"


// USA 0034C8F0 <- EU 0034C8CC (Ghidra, non-matching)

undefined4 func_0034C8F0(uint *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  
  puVar2 = *(undefined1 **)(param_3 + 0x2c);
  if (puVar2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if (param_2 != 0) {
      uVar4 = (uint)(char)puVar2[1];
      uVar3 = (ushort)(0x12 < uVar4);
      if (0x12 >= uVar4) {
        puVar1 = (ushort *)(param_2 + 0xe);
        if (uVar4 < 0x12) {
          puVar1 = puVar1 + uVar4;
        }
        uVar3 = *puVar1 & 0xff;
        if ((*puVar1 & 0xff) == 0) {
          return 0;
        }
      }
    }
    *param_1 = *param_1 | 1 << puVar2[1];
    if ((char)puVar2[1] <= *(char *)((int)param_1 + 0x21)) {
      param_1[1] = *(uint *)(param_3 + 0x28);
      param_1[2] = *(uint *)(param_3 + 4);
      param_1[3] = *(uint *)(param_3 + 8);
      param_1[4] = *(uint *)(param_3 + 0xc);
      param_1[5] = *(uint *)(param_3 + 0x10);
      param_1[6] = *(uint *)(param_3 + 0x14);
      param_1[7] = *(uint *)(param_3 + 0x18);
      *(undefined1 *)(param_1 + 8) = *puVar2;
      *(undefined1 *)((int)param_1 + 0x21) = puVar2[1];
      *(undefined1 *)((int)param_1 + 0x22) = puVar2[2];
      *(undefined1 *)((int)param_1 + 0x23) = puVar2[3];
      param_1[9] = *(uint *)(puVar2 + 4);
      param_1[10] = *(uint *)(puVar2 + 8);
      param_1[0xb] = *(uint *)(puVar2 + 0xc);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar2 + 0x10);
      *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(puVar2 + 0x12);
      param_1[0xd] = *(uint *)(puVar2 + 0x14);
      uVar4 = *(uint *)(param_3 + 0x30);
      param_1[0xe] = uVar4;
      if (uVar3 == 1) {
        uVar4 = 0;
      }
      param_1[0xf] = *(uint *)(param_3 + 0x3c);
      param_1[0x10] = *(uint *)(param_3 + 0x40);
      param_1[0x11] = *(uint *)(param_3 + 0x44);
      if (uVar3 == 1) {
        *(short *)(param_1 + 0xc) = (short)uVar4;
      }
    }
  }
  return 1;
}

