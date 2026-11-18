#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);

// USA 002201E4 <- EU 002201E4 (Ghidra, non-matching)

uint func_002201E4(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  uVar9 = 0;
  iVar10 = 0;
  local_48 = 0;
  iStack_2c = param_1;
  local_28 = param_2;
  do {
    if (local_28 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xa04) + 0x28);
      if (((iVar2 != 0) &&
          (uVar4 = *(uint *)(*(int *)(param_1 + 0xa04) + 0x20), uVar8 = uVar4 - 1, uVar8 < uVar4))
         && (iVar2 = *(int *)(iVar2 + uVar8 * 4), iVar2 != 0)) {
        puVar1 = (uint *)func_0058A7D4();
        iVar2 = *(int *)(iVar2 + 0x40);
        uVar9 = func_00111A64(puVar1);
        uVar9 = (uint)((ulonglong)(iVar2 + 1) * (ulonglong)uVar9 >> 0x20);
      }
      if (*(uint *)(param_1 + 0xa0c) != uVar9) break;
    }
    else {
      puVar1 = (uint *)func_0058A7D4();
      uVar8 = *(uint *)(param_1 + 0xa08);
      uVar9 = func_00111A64(puVar1);
      uVar9 = (uint)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x20);
      if (*(uint *)(param_1 + 0xa0c) != uVar9) {
        iVar2 = *(int *)(param_1 + 0xa00);
        uVar8 = 0;
        piVar5 = *(int **)(iVar2 + 0x28);
        if (piVar5 != (int *)0x0) {
          iVar2 = *(int *)(iVar2 + 0x20);
        }
        if (piVar5 != (int *)0x0 && iVar2 != 0) {
          iVar2 = *piVar5;
        }
        else {
          iVar2 = 0;
        }
        pfVar3 = (float *)func_00520FC0();
        func_00115C70(&local_44,(float *)(iVar2 + 0x18),pfVar3);
        iVar2 = *(int *)(*(int *)(param_1 + 0xa00) + 0x28);
        uVar12 = (ulonglong)
                 (uint)ALBW_AS_U32((local_44 * local_44 + local_40 * local_40 + fStack_3c * fStack_3c));
        if ((iVar2 == 0) ||
           (uVar7 = *(uint *)(*(int *)(param_1 + 0xa00) + 0x20), uVar4 = uVar7 - 1, uVar7 <= uVar4))
        {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + uVar4 * 4);
        }
        uVar4 = 1;
        iVar2 = *(int *)(iVar2 + 0x40) + -1;
        if (0 < iVar2) {
          do {
            iVar6 = *(int *)(*(int *)(param_1 + 0xa00) + 0x28);
            if ((iVar6 == 0) || (*(uint *)(*(int *)(param_1 + 0xa00) + 0x20) <= uVar4)) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + uVar4 * 4);
            }
            pfVar3 = (float *)func_00520FC0();
            func_00115C70(&local_44,(float *)(iVar6 + 0x18),pfVar3);
            fVar11 = local_44 * local_44 + local_40 * local_40 + fStack_3c * fStack_3c;
            if (fVar11 < ALBW_AS_F32(uVar12)) {
              uVar12 = (ulonglong)(uint)ALBW_AS_U32(fVar11);
              uVar8 = uVar4;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 <= iVar2);
        }
        if (uVar8 != uVar9) break;
      }
    }
    iVar10 = iVar10 + 1;
    local_48 = local_48 + 1;
  } while (iVar10 < 0x1e);
  if (local_48 == 0x1e) {
    iVar10 = *(int *)(param_1 + 0xa0c);
    if (iVar10 == *(int *)(param_1 + 0xa08) + -1) {
      uVar9 = iVar10 - 1;
    }
    else {
      uVar9 = iVar10 + 1;
    }
  }
  return uVar9;
}

