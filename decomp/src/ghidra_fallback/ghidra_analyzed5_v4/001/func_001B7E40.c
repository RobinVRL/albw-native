#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_004CFA28(int param_1,int *param_2,int *param_3,float *param_4,float *param_5);

// USA 001B7E40 <- EU 001B7E40 (Ghidra, non-matching)

void func_001B7E40(float *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  
  fVar6 = 0.0;
  fVar7 = param_1[0x20];
  if (0 < (int)ALBW_AS_U32(fVar7)) {
    do {
      if ((uint)ALBW_AS_U32(fVar6) < (uint)ALBW_AS_U32(param_1[0x20])) {
        piVar5 = (int *)((int)ALBW_AS_U32(param_1[0x22]) + (int)ALBW_AS_U32(fVar6) * 0x70);
      }
      else {
        piVar5 = (int *)ALBW_PTR_BITS(param_1[0x22]);
      }
      bVar8 = (char)piVar5[0x1b] != '\0';
      iVar1 = 0;
      if (bVar8) {
        iVar1 = piVar5[0x13];
      }
      if ((bVar8 && iVar1 != 0) && (*(char *)((int)piVar5 + 0x6d) == '\0')) {
        if (param_2 != 0) {
          func_0010C0B8(param_2);
        }
        func_0010C0B8((int)(piVar5 + 0x14));
        func_004CFA28(piVar5[0x13],piVar5 + 2,piVar5,(float *)(piVar5 + 7),param_1);
        uVar2 = 0;
        if (0 < piVar5[4]) {
          do {
            uVar3 = piVar5[4];
            uVar4 = uVar3;
            if (uVar2 < uVar3) {
              uVar4 = piVar5[6];
            }
            if (uVar2 < uVar3) {
              iVar1 = uVar4 + uVar2;
            }
            else {
              iVar1 = piVar5[6];
            }
            *(bool *)iVar1 = *(char *)(*piVar5 + uVar2 * 0xc + 8) == '\0';
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < piVar5[4]);
        }
        if (param_2 != 0) {
          func_0010EEE0(param_2);
        }
        func_0010EEE0((int)(piVar5 + 0x14));
      }
      fVar6 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar6) + 1));
    } while ((int)ALBW_AS_U32(fVar6) < (int)ALBW_AS_U32(fVar7));
  }
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return;
}

