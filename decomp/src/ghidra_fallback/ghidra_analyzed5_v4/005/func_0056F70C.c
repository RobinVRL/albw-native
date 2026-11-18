#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0056F600(int param_1,uint param_2);

// USA 0056F70C <- EU 0056F6E4 (Ghidra, non-matching)

void func_0056F70C(int param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar4 = func_0056F600(param_1,param_3);
  if (uVar4 == 0xffff) {
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 6);
  }
  pbVar7 = *(byte **)(*(int *)(param_1 + 0xc) + 0xc);
  uVar10 = func_00110710(uVar4,(uint)*(ushort *)(pbVar7 + 0xc) * (uint)*(ushort *)(pbVar7 + 0xe));
  *param_2 = *(int *)(pbVar7 + 4) * (int)uVar10 + *(int *)(pbVar7 + 0x14);
  iVar6 = *(int *)(param_1 + 0xc);
  puVar5 = *(ushort **)(iVar6 + 0x10);
  do {
    if (puVar5 == (ushort *)0x0) {
LAB_0056f7a8:
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar6 + 8);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(iVar6 + 10);
      param_2[5] = param_1 + 0x10;
      *(short *)((int)param_2 + 0x12) = (short)uVar10;
      uVar3 = *(ushort *)(pbVar7 + 0xc);
      uVar10 = func_00110710(uVar4,(uint)uVar3 * (uint)*(ushort *)(pbVar7 + 0xe));
      uVar10 = func_00110710((uint)((ulonglong)uVar10 >> 0x20),(uint)uVar3);
      bVar1 = pbVar7[1];
      bVar2 = *pbVar7;
      *(byte *)((int)param_2 + 7) = bVar1;
      *(char *)(param_2 + 4) = (char)*(undefined2 *)(pbVar7 + 10);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pbVar7 + 0x10);
      *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(pbVar7 + 0x12);
      *(ushort *)(param_2 + 3) = (bVar2 + 1) * (short)((ulonglong)uVar10 >> 0x20) + 1;
      *(ushort *)((int)param_2 + 0xe) = (bVar1 + 1) * (short)uVar10 + 1;
      return;
    }
    bVar9 = uVar4 <= *puVar5;
    bVar8 = *puVar5 == uVar4;
    if (!bVar9 || bVar8) {
      bVar9 = puVar5[1] <= uVar4;
      bVar8 = uVar4 == puVar5[1];
    }
    if (!bVar9 || bVar8) {
      iVar6 = (int)puVar5 + (uVar4 - *puVar5) * 3;
      goto LAB_0056f7a8;
    }
    puVar5 = *(ushort **)(puVar5 + 2);
  } while( true );
}

