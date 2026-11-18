#include "ghidra_types.h"

extern int func_0034C47C(int param_1,int param_2);
extern float DAT_0036877c;
extern int DAT_00368780;
extern int DAT_00368784;

// USA 003686A8 <- EU 00368684 (Ghidra, non-matching)
// GLOBAL DAT_0036877c float
// GLOBAL DAT_00368780 int
// GLOBAL DAT_00368784 int

undefined4 func_003686A8(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  undefined4 uVar12;
  
  iVar4 = DAT_00368784;
  iVar3 = DAT_00368780;
  fVar2 = DAT_0036877c;
  uVar5 = *(int *)(param_1 + 0xc) - param_2;
  uVar1 = (int)uVar5 >> 0x1f;
  uVar6 = 0;
  fVar11 = (float)VectorSignedToFloat((uVar5 ^ uVar1) - uVar1,(byte)(in_fpscr >> 0x15) & 3);
  iVar7 = *(int *)(param_1 + 0xc);
  do {
    fVar11 = fVar11 * fVar2;
    if (iVar3 < (int)ALBW_AS_U32(fVar11)) {
      if ((int)ALBW_AS_U32(fVar11) < 0x3f000001) {
        puVar9 = (undefined1 *)(param_1 + 0x24);
        if (uVar6 < 3) {
          puVar9 = puVar9 + uVar6;
        }
        *puVar9 = 1;
      }
      else {
        puVar9 = (undefined1 *)(param_1 + 0x24);
        if (uVar6 < 3) {
          puVar9 = puVar9 + uVar6;
        }
        *puVar9 = 2;
      }
    }
    else {
      puVar9 = (undefined1 *)(param_1 + 0x24);
      if (uVar6 < 3) {
        puVar9 = puVar9 + uVar6;
      }
      *puVar9 = 0;
    }
    iVar8 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar7) >> 0x20);
    puVar10 = (undefined4 *)(param_1 + 0x14);
    iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f);
    if (uVar6 < 3) {
      puVar10 = puVar10 + uVar6;
    }
    uVar6 = uVar6 + 1;
    uVar12 = ALBW_AS_U32(VectorSignedToFloat(iVar7 + iVar8 * -10,(byte)(in_fpscr >> 0x15) & 3));
    *puVar10 = uVar12;
    iVar7 = iVar8;
  } while ((int)uVar6 < 3);
  uVar12 = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  uVar12 = ALBW_AS_U32(VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x20) = 10;
  *(undefined4 *)(param_1 + 0x10) = uVar12;
  return func_0034C47C(*(int *)(param_1 + 0x3c),0);
}

