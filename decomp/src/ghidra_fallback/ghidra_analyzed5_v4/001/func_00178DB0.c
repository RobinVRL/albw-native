#include "ghidra_types.h"

extern void *func_0010E74C();
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_0017988C(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_00179BC4(int param_1,uint *param_2,uint *param_3,undefined4 param_4,int param_5);

// USA 00178DB0 <- EU 00178DB0 (Ghidra, non-matching)

void func_00178DB0(int param_1)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float in_s0;
  
  puVar7 = *(uint **)(param_1 + 8);
  do {
    while( true ) {
      puVar6 = puVar7;
      sVar1 = (short)*puVar6;
      if ((sVar1 == 0) ||
         (puVar4 = *(uint **)(param_1 + 0xc),
         (int)(uint)((uint)((int)puVar6 - (int)puVar4) < (uint)*(ushort *)(param_1 + 4)) <=
         (int)-(uint)(puVar6 < puVar4))) {
        return;
      }
      if (sVar1 == 0xe) break;
      puVar7 = puVar6;
      if (sVar1 == 0xf) {
        puVar7 = (uint *)((int)puVar6 + 6);
        goto LAB_00178e1c;
      }
LAB_00178f34:
      puVar7 = (uint *)((int)puVar7 + 2);
    }
    puVar7 = (uint *)((int)puVar6 + *(ushort *)((int)puVar6 + 6) + 8);
LAB_00178e1c:
    if (puVar6 == (uint *)0x0) goto LAB_00178f34;
    if (*(short *)((int)puVar6 + 2) == 1) {
      uVar3 = puVar6[1];
      switch((uint)(ushort)uVar3) {
      case 5:
      case 6:
      case 8:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x11:
        break;
      default:
        bVar10 = *(char *)(param_1 + 0x2e) != '\x01';
        puVar2 = (uint *)0x1;
        if (bVar10) {
          puVar2 = puVar6;
        }
        if (bVar10 && puVar6 != puVar7) {
          uVar5 = (uint)*(ushort *)(param_1 + 0x20);
          uVar8 = (int)puVar7 - (int)puVar2;
          uVar9 = (uVar5 - ((int)puVar2 - (int)puVar4)) - uVar8;
          if (uVar5 == (int)puVar2 - (int)puVar4 || uVar5 == uVar8) {
            *(undefined2 *)(param_1 + 0x20) = 0;
            puVar7 = puVar6;
          }
          else if (uVar9 != 0) {
            func_0010E74C(puVar6,puVar7,uVar9,in_s0);
            func_001164F4((undefined4 *)((int)puVar6 + uVar9),uVar8);
            *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - (short)uVar8;
            puVar7 = puVar6;
          }
        }
      }
      puVar7 = func_00179BC4(param_1,puVar6,puVar7,(uint)(ushort)uVar3,(int)puVar6);
    }
    else if (*(short *)((int)puVar6 + 2) == 2) {
      puVar7 = func_0017988C(param_1,puVar6,puVar7,(uint)puVar6);
    }
  } while( true );
}

