#include "ghidra_types.h"

extern float func_00566F70(float *param_1,float fparam_0);
extern uint DAT_0056803c;

// USA 00567F30 <- EU 00567F08 (Ghidra, non-matching)
// GLOBAL DAT_0056803c uint

void func_00567F30(int param_1,int *param_2,int *param_3,float fparam_0)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  
  uVar4 = DAT_0056803c;
  uVar7 = 0;
  uVar10 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      if (*(ushort *)(*param_3 + uVar7 * 2) != uVar4) {
        iVar8 = *(int *)(*(int *)(param_1 + 0xc) + uVar7 * 4);
        if (*(int *)(iVar8 + 0x18) == 1) {
          if ((**(byte **)(iVar8 + 0x14) & 1) != 0) goto LAB_00567fd8;
LAB_00567fe0:
          bVar2 = false;
        }
        else {
          fVar9 = func_00566F70((float *)(iVar8 + 8),ALBW_AS_F32(uVar10));
          fVar9 = fVar9 - *(float *)(iVar8 + 8);
          if (*(float *)(iVar8 + 0xc) != fVar9) {
            uVar5 = VectorFloatToUnsigned(fVar9,3);
            if (((uint)*(byte *)(*(int *)(iVar8 + 0x14) + (uVar5 >> 3)) & 1 << (uVar5 & 7)) != 0)
            goto LAB_00567fd8;
            goto LAB_00567fe0;
          }
          uVar5 = *(int *)(iVar8 + 0x18) - 1;
          if (((uint)*(byte *)(*(int *)(iVar8 + 0x14) + (uVar5 >> 3)) & 1 << (uVar5 & 7)) == 0)
          goto LAB_00567fe0;
LAB_00567fd8:
          bVar2 = true;
        }
        if (*(short *)(iVar8 + 4) == 0x2f) {
          uVar1 = *(ushort *)(*param_3 + uVar7 * 2);
          bVar6 = *(byte *)(*param_2 + (uint)(uVar1 >> 3));
          bVar3 = (byte)(1 << (uVar1 & 7));
          if (bVar2) {
            bVar6 = bVar6 | bVar3;
          }
          else {
            bVar6 = bVar6 & ~bVar3;
          }
          *(byte *)(*param_2 + (uint)(uVar1 >> 3)) = bVar6;
        }
        else {
          *(bool *)(param_2 + 2) = bVar2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
  }
  return;
}

