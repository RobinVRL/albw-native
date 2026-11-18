#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_001DF478(byte *param_1,int param_2);
extern int func_00256810(byte *param_1);
extern int func_004A143C(byte *param_1,uint param_2);
extern undefined4 *DAT_002939bc;
extern uint DAT_002939c0;
extern int DAT_002939c4;
extern int DAT_002939c8;

// USA 0029386C <- EU 00293894 (Ghidra, non-matching)
// GLOBAL DAT_002939bc undefined4 *
// GLOBAL DAT_002939c0 uint
// GLOBAL DAT_002939c4 int
// GLOBAL DAT_002939c8 int

void func_0029386C(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  puVar1 = DAT_002939bc;
  uVar2 = func_00111A64((uint *)*DAT_002939bc);
  uVar8 = DAT_002939c0;
  puVar6 = (undefined2 *)(param_1 + 0x4418);
  uVar7 = 1;
  *puVar6 = (short)uVar2;
  do {
    uVar2 = func_00111A64((uint *)*puVar1);
    if ((uVar2 & 0xffff) != uVar8) {
      uVar3 = 0;
      if (uVar7 != 0) {
        do {
          if ((uint)(ushort)puVar6[uVar3] == (uVar2 & 0xffff)) goto LAB_00293904;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      puVar4 = puVar6 + uVar7;
      uVar7 = uVar7 + 1;
      *puVar4 = (short)uVar2;
    }
LAB_00293904:
    if (2 < uVar7) {
      uVar8 = 0;
      do {
        pbVar9 = (byte *)(param_1 + uVar8 * DAT_002939c4 * 4);
        func_001DF478(pbVar9,(uint)(ushort)puVar6[uVar8]);
        func_00256810(pbVar9 + 0xe00);
        func_001164F4((undefined4 *)(pbVar9 + 0x1400),0x200);
        uVar2 = func_004A143C(pbVar9 + 0x1400,0x1fc);
        *(uint *)(pbVar9 + 0x15fc) = uVar2;
        puVar5 = (uint *)(param_1 + 0x440c + uVar8 * 4);
        pbVar9[0x1600] = 1;
        uVar8 = uVar8 + 1;
        *puVar5 = *puVar5 | 8;
      } while (uVar8 < 3);
      func_001164F4((undefined4 *)(param_1 + 0x420c),0x200);
      *(undefined4 *)(DAT_002939c8 + param_1) = 4;
      uVar8 = func_004A143C((byte *)(param_1 + 0x420c),0x1fc);
      *(uint *)(param_1 + 0x4408) = uVar8;
      return;
    }
  } while( true );
}

