#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 0056F744 <- EU 0056F71C (Ghidra, non-matching)

void func_0056F744(int param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
  pbVar6 = *(byte **)(*(int *)(param_1 + 0xc) + 0xc);
  uVar9 = func_00110710(param_3,(uint)*(ushort *)(pbVar6 + 0xc) * (uint)*(ushort *)(pbVar6 + 0xe));
  *param_2 = *(int *)(pbVar6 + 4) * (int)uVar9 + *(int *)(pbVar6 + 0x14);
  iVar5 = *(int *)(param_1 + 0xc);
  puVar4 = *(ushort **)(iVar5 + 0x10);
  do {
    if (puVar4 == (ushort *)0x0) {
LAB_0056f7a8:
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar5 + 8);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(iVar5 + 10);
      param_2[5] = param_1 + 0x10;
      *(short *)((int)param_2 + 0x12) = (short)uVar9;
      uVar3 = *(ushort *)(pbVar6 + 0xc);
      uVar9 = func_00110710(param_3,(uint)uVar3 * (uint)*(ushort *)(pbVar6 + 0xe));
      uVar9 = func_00110710((uint)((ulonglong)uVar9 >> 0x20),(uint)uVar3);
      bVar1 = pbVar6[1];
      bVar2 = *pbVar6;
      *(byte *)((int)param_2 + 7) = bVar1;
      *(char *)(param_2 + 4) = (char)*(undefined2 *)(pbVar6 + 10);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pbVar6 + 0x10);
      *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(pbVar6 + 0x12);
      *(ushort *)(param_2 + 3) = (bVar2 + 1) * (short)((ulonglong)uVar9 >> 0x20) + 1;
      *(ushort *)((int)param_2 + 0xe) = (bVar1 + 1) * (short)uVar9 + 1;
      return;
    }
    bVar8 = param_3 <= *puVar4;
    bVar7 = *puVar4 == param_3;
    if (!bVar8 || bVar7) {
      bVar8 = puVar4[1] <= param_3;
      bVar7 = param_3 == puVar4[1];
    }
    if (!bVar8 || bVar7) {
      iVar5 = (int)puVar4 + (param_3 - *puVar4) * 3;
      goto LAB_0056f7a8;
    }
    puVar4 = *(ushort **)(puVar4 + 2);
  } while( true );
}

