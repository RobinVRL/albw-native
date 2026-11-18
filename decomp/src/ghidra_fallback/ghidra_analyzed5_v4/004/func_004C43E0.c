#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_0019B064(int param_1,int param_2,undefined4 param_3);
extern int func_002E01AC(uint param_1);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);

// USA 004C43E0 <- EU 004C43B8 (Ghidra, non-matching)

void func_004C43E0(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *param_2;
  bVar1 = func_002E01AC(*(uint *)(iVar4 + 8));
  uVar2 = 0;
  if (bVar1 != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c8 + uVar2 * 4) == 0) {
        func_0019B064(iVar4,0,0);
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < bVar1);
  }
  iVar4 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar4 < iVar3) {
    *(int *)(param_1 + 0x34) = iVar4 + 1;
    iVar4 = iVar4 + *(int *)(param_1 + 0x30);
    if (iVar3 <= iVar4) {
      iVar4 = iVar4 - iVar3;
    }
    piVar5 = (int *)(*(int *)(param_1 + 0x28) + iVar4 * 0x2c4);
    *piVar5 = *param_2;
    piVar5[1] = param_2[1];
    piVar5[2] = param_2[2];
    piVar5[3] = param_2[3];
    piVar5[4] = param_2[4];
    piVar5[5] = param_2[5];
    piVar5[6] = param_2[6];
    piVar5[7] = param_2[7];
    piVar5[8] = param_2[8];
    piVar5[9] = param_2[9];
    iVar4 = param_2[0xb];
    piVar5[10] = param_2[10];
    piVar5[0xb] = iVar4;
    *(short *)(piVar5 + 0xc) = (short)param_2[0xc];
    *(undefined4 *)((int)piVar5 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
    *(undefined2 *)((int)piVar5 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
    piVar5[0xe] = param_2[0xe];
    *(short *)(piVar5 + 0xf) = (short)param_2[0xf];
    func_0058FBB8((undefined4 *)((int)piVar5 + 0x3e),(undefined4 *)((int)param_2 + 0x3e));
    piVar5[0x11] = param_2[0x11];
    piVar5[0x12] = param_2[0x12];
    piVar5[0x13] = param_2[0x13];
    *(short *)(piVar5 + 0x14) = (short)param_2[0x14];
    *(undefined2 *)((int)piVar5 + 0x52) = *(undefined2 *)((int)param_2 + 0x52);
    *(short *)(piVar5 + 0x15) = (short)param_2[0x15];
    *(undefined2 *)((int)piVar5 + 0x56) = *(undefined2 *)((int)param_2 + 0x56);
    *(char *)(piVar5 + 0x16) = (char)param_2[0x16];
    *(undefined1 *)((int)piVar5 + 0x59) = *(undefined1 *)((int)param_2 + 0x59);
    func_001163A0((uint *)((int)piVar5 + 0x5a),(uint *)((int)param_2 + 0x5a),0x240);
    iVar4 = param_2[0xa8];
    iVar3 = param_2[0xa9];
    iVar6 = param_2[0xaa];
    iVar7 = param_2[0xab];
    iVar8 = param_2[0xac];
    iVar9 = param_2[0xad];
    iVar10 = param_2[0xae];
    piVar5[0xa7] = param_2[0xa7];
    piVar5[0xa8] = iVar4;
    piVar5[0xa9] = iVar3;
    piVar5[0xaa] = iVar6;
    piVar5[0xab] = iVar7;
    piVar5[0xac] = iVar8;
    piVar5[0xad] = iVar9;
    piVar5[0xae] = iVar10;
    piVar5[0xaf] = param_2[0xaf];
    piVar5[0xb0] = param_2[0xb0];
  }
  return;
}

