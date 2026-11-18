#include "ghidra_types.h"

extern int func_002FE3E8(int param_1,uint *param_2,int *param_3,uint param_4,uint param_5,int param_6, uint param_7,float fparam_0);
extern int DAT_002fe188;
extern int DAT_002fe18c;

// USA 002FE0A4 <- EU 002FE080 (Ghidra, non-matching)
// GLOBAL DAT_002fe188 int
// GLOBAL DAT_002fe18c int

void func_002FE0A4(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x90);
  uVar3 = (uint)*(byte *)(param_1 + 0x92);
  if (uVar4 == 0 || uVar3 <= uVar4) {
    if (uVar3 != uVar4) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x91) + -1;
    *(char *)(param_1 + 0x91) = cVar2;
    if (-1 < cVar2) {
      return;
    }
    cVar2 = '\0';
  }
  else {
    iVar5 = *(int *)(DAT_002fe188 + 4);
    bVar9 = *(char *)(param_1 + 0x93) == '\0';
    uVar8 = (8 - *(char *)(param_1 + 0x91)) * iVar5;
    uVar1 = uVar4;
    if (!bVar9) {
      uVar1 = uVar3 - uVar4;
    }
    iVar7 = *(int *)(DAT_002fe18c + (uVar1 - 1) * 4);
    if (bVar9) {
      fVar10 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat(uVar3 - uVar4,(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      fVar10 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorUnsignedToFloat(uVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
    }
    iVar6 = 0;
    uVar12 = (ulonglong)(uint)ALBW_AS_U32((fVar11 / fVar10));
    do {
      func_002FE3E8(param_1,*(uint **)(param_1 + iVar6 * 4 + 0x84),
                    *(int **)(param_1 + 0x70 + iVar6 * 8),uVar8,uVar8 + iVar5,iVar7,iVar7,
                    ALBW_AS_F32(uVar12));
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    cVar2 = *(char *)(param_1 + 0x91) + -1;
  }
  *(char *)(param_1 + 0x91) = cVar2;
  return;
}

