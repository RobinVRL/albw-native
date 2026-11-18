#include "ghidra_types.h"

extern int func_00100858(uint *param_1,uint *param_2,uint param_3);
extern undefined DAT_00493540;
extern byte *DAT_00493548;
extern undefined DAT_0049354c;
extern undefined DAT_00493554;

// USA 00493408 <- EU 004933E0 (Ghidra, non-matching)
// GLOBAL DAT_00493540 undefined
// GLOBAL DAT_00493548 byte *
// GLOBAL DAT_0049354c undefined
// GLOBAL DAT_00493554 undefined

undefined4 func_00493408(int param_1,uint *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_2 != (uint *)0x0) {
    *(uint **)(param_1 + 0x28) = param_2;
    iVar3 = func_00100858(param_2,(uint *)&DAT_00493540,4);
    pbVar1 = DAT_00493548;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      uVar5 = 1;
      uVar7 = *(ushort *)(iVar3 + 6) & 0xff;
      if (((uVar7 != 0xff) && (uVar7 == 0xfe)) &&
         (((uint)*(ushort *)(iVar3 + 6) << 0x10) >> 0x18 == 0xff)) {
        uVar5 = 0;
      }
      *(char *)(param_1 + 0x40) = (char)uVar5;
      uVar2 = (ushort)*pbVar1;
      bVar9 = uVar5 == uVar2;
      if (bVar9) {
        uVar2 = *(ushort *)(iVar3 + 0x10);
      }
      bVar10 = bVar9 && uVar2 == 0x100;
      if (bVar9 && uVar2 == 0x100) {
        bVar10 = *(short *)(iVar3 + 4) == 0x14;
      }
      if (bVar10) {
        *(uint **)(param_1 + 0x2c) = param_2 + 5;
        iVar3 = func_00100858(param_2 + 5,(uint *)&DAT_0049354c,4);
        if (((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0x2c), *(short *)(iVar3 + 4) == 0xc)) &&
           (uVar7 = (uint)*(ushort *)(iVar3 + 6), uVar7 < 0x4000)) {
          iVar6 = *(ushort *)(*(int *)(param_1 + 0x28) + 4) + 0xc + (int)param_2;
          if ((uVar7 != 0) && (iVar6 != 0)) {
            *(uint *)(param_1 + 0x34) = uVar7;
            *(int *)(param_1 + 0x38) = iVar6;
          }
          puVar8 = (uint *)((int)param_2 +
                           (uint)*(ushort *)(*(int *)(param_1 + 0x28) + 4) +
                           (uint)*(ushort *)(iVar3 + 4) + (uint)*(ushort *)(iVar3 + 6) * 0x10);
          uVar7 = func_00100858(puVar8,(uint *)&DAT_00493554,4);
          bVar9 = uVar7 == 0;
          if (bVar9) {
            uVar7 = (uint)(ushort)puVar8[1];
          }
          if (bVar9 && uVar7 == 8) {
            puVar8 = puVar8 + 2;
            *(uint **)(param_1 + 0x30) = puVar8;
            puVar4 = *(uint **)(param_1 + 0x28);
            uVar7 = puVar4[3];
            iVar3 = -(uint)(puVar8 < puVar4);
            bVar9 = uVar7 < (uint)((int)puVar8 - (int)puVar4);
            if ((int)-(iVar3 + (uint)bVar9) < 0 ==
                (SBORROW4(0,iVar3) != SBORROW4((uint)(puVar8 < puVar4),(uint)bVar9))) {
              *(uint *)(param_1 + 0x3c) = uVar7 + (int)param_2;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

