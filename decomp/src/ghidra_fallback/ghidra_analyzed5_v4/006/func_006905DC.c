#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00566F70(float *param_1,float fparam_0);
extern int func_005680A0(int param_1,uint *param_2,float fparam_0);
extern int func_00690ADC(int param_1,uint *param_2,uint *param_3);
extern uint DAT_00690750;

// USA 006905DC <- EU 006905B4 (Ghidra, non-matching)
// GLOBAL DAT_00690750 uint

void func_006905DC(int param_1,int param_2,int *param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint *)(albw_frame + 0x0))
  #define uStack_2c (*(uint *)(albw_frame + 0x4))
  ulonglong uVar11;
  
  uVar2 = DAT_00690750;
  uVar10 = *param_4;
  uVar11 = (ulonglong)uVar10;
  sVar1 = *(short *)(**(int **)(param_1 + 0xc) + 6);
  if (sVar1 == 4) {
    uVar12 = param_4[1];
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar7 = (uint)*(ushort *)(*param_3 + uVar3 * 2);
        if (uVar7 != uVar2) {
          local_30 = uVar10;
          uStack_2c = uVar12;
          func_00690ADC(*(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4),
                        (uint *)(*(int *)(param_2 + 0xc) + uVar7 * 0x40),&local_30);
          puVar5 = (uint *)(*(int *)(param_2 + 0xc) + uVar7 * 0x40);
          *puVar5 = *puVar5 | 2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  else {
    uVar10 = 0;
    if (sVar1 == 7) {
      if (*(int *)(param_1 + 0x10) != 0) {
        do {
          uVar3 = (uint)*(ushort *)(*param_3 + uVar10 * 2);
          if (uVar3 != uVar2) {
            func_005680A0(*(int *)(*(int *)(param_1 + 0xc) + uVar10 * 4),
                          (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40),ALBW_AS_F32(uVar11));
            puVar5 = (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
            *puVar5 = *puVar5 | 2;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x10));
        return;
      }
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar3 = (uint)*(ushort *)(*param_3 + uVar10 * 2);
        if (uVar3 != uVar2) {
          iVar6 = *(int *)(param_2 + 0x14);
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar10 * 4);
          fVar8 = func_00566F70((float *)(iVar4 + 8),ALBW_AS_F32(uVar11));
          iVar9 = VectorFloatToUnsigned(fVar8,3);
          if (*(float *)(iVar4 + 0xc) == fVar8) {
            iVar9 = iVar9 + 1;
          }
          func_001119F4((undefined4 *)(iVar6 + uVar3 * 0x30),
                        (undefined4 *)(*(int *)(iVar4 + 0x14) + iVar9 * 0x30));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x10));
    }
  }
  return;
}

