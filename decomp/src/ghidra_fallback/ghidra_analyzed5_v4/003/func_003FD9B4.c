#include "ghidra_types.h"

extern int func_0011629C(uint *param_1,uint *param_2,uint param_3);
extern uint *DAT_003fdadc;
extern uint *DAT_003fdae0;
extern uint *DAT_003fdae4;

// USA 003FD9B4 <- EU 003FD994 (Ghidra, non-matching)
// GLOBAL DAT_003fdadc uint *
// GLOBAL DAT_003fdae0 uint *
// GLOBAL DAT_003fdae4 uint *

undefined4 func_003FD9B4(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 != (uint *)0x0) {
    *param_1 = (int)param_2;
    uVar1 = func_0011629C(param_2,DAT_003fdadc,4);
    if (uVar1 == 0) {
      iVar2 = *param_1;
      bVar6 = true;
      uVar1 = *(ushort *)(iVar2 + 6) & 0xff;
      if (((uVar1 != 0xff) && (uVar1 == 0xfe)) &&
         (((uint)*(ushort *)(iVar2 + 6) << 0x10) >> 0x18 == 0xff)) {
        bVar6 = false;
      }
      *(bool *)(param_1 + 6) = bVar6;
      puVar4 = DAT_003fdae0;
      bVar5 = false;
      if (bVar6) {
        bVar5 = *(short *)(iVar2 + 0x10) == 0x100;
      }
      bVar6 = false;
      if (bVar5) {
        bVar6 = *(short *)(iVar2 + 4) == 0x14;
      }
      if (bVar6) {
        param_1[1] = (int)(param_2 + 5);
        uVar1 = func_0011629C(param_2 + 5,puVar4,4);
        if (((uVar1 == 0) && (iVar2 = param_1[1], *(short *)(iVar2 + 4) == 0xc)) &&
           (uVar1 = (uint)*(ushort *)(iVar2 + 6), uVar1 < 0x4000)) {
          iVar3 = *(ushort *)(*param_1 + 4) + 0xc + (int)param_2;
          if ((uVar1 != 0) && (iVar3 != 0)) {
            param_1[3] = uVar1;
            param_1[4] = iVar3;
          }
          puVar4 = (uint *)((int)param_2 +
                           (uint)*(ushort *)(*param_1 + 4) + (uint)*(ushort *)(iVar2 + 4) +
                           (uint)*(ushort *)(iVar2 + 6) * 0x10);
          uVar1 = func_0011629C(puVar4,DAT_003fdae4,4);
          bVar6 = uVar1 == 0;
          if (bVar6) {
            uVar1 = (uint)(ushort)puVar4[1];
          }
          if (bVar6 && uVar1 == 8) {
            param_1[2] = (int)(puVar4 + 2);
            iVar2 = *(int *)(*param_1 + 0xc);
            if ((int)(puVar4 + 2) - *param_1 <= iVar2) {
              param_1[5] = iVar2 + (int)param_2;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

