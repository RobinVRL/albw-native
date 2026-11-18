#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F4A68();
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00203720;
extern float DAT_00203724;
extern int DAT_00203728;

// USA 002035C8 <- EU 002035C8 (Ghidra, non-matching)
// GLOBAL DAT_00203720 float
// GLOBAL DAT_00203724 float
// GLOBAL DAT_00203728 int

undefined4 func_002035C8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c ((int *)(albw_frame + 0x14))
  fVar12 = *(float *)(param_2 + 8);
  fVar8 = ALBW_AS_F32((int)*(char *)(param_1 + 0x8c0));
  if (fVar12 <= DAT_00203720) {
    fVar12 = -fVar12;
  }
  bVar11 = SBORROW4((int)ALBW_AS_U32(fVar8),3);
  iVar3 = (int)ALBW_AS_U32(fVar8) + -3;
  bVar10 = fVar8 != 4.2039e-45;
  if (bVar10) {
    bVar11 = SBORROW4((int)ALBW_AS_U32(fVar8),4);
    iVar3 = (int)ALBW_AS_U32(fVar8) + -4;
  }
  fVar1 = fVar8;
  if (bVar10 && fVar8 != 5.60519e-45) {
    bVar11 = SBORROW4((int)ALBW_AS_U32(DAT_00203724),(int)ALBW_AS_U32(fVar12));
    iVar3 = (int)ALBW_AS_U32(DAT_00203724) - (int)ALBW_AS_U32(fVar12);
    fVar1 = DAT_00203724;
  }
  if (((bVar10 && fVar8 != 5.60519e-45) && fVar1 != fVar12) && iVar3 < 0 == bVar11) {
    fVar8 = DAT_00203720;
    local_34 = func_0068C690((float *)(param_2 + 4));
    local_34 = (*(int *)(param_1 + 0x908) + -0x80000000) - local_34;
    iVar3 = func_0058E2B8(&local_34);
    if (iVar3 < 0x60000000) {
      if (*(short *)(param_1 + 0x8fe) == 0) {
        func_00115C70(afStack_40,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
        iVar3 = func_0068C690(afStack_40);
        *(int *)(param_1 + 0x900) = iVar3;
        *(float *)(param_1 + 0x3dc) = fVar8;
        *(float *)(param_1 + 0x3e4) = fVar8;
      }
      else {
        pfVar4 = (float *)func_00520FC0();
        func_00115C70(afStack_40,pfVar4,(float *)(param_1 + 0x3d0));
        iVar5 = func_0068C690(afStack_40);
        iVar2 = DAT_00203728;
        uVar6 = iVar3 + 0x20000000U >> 0x1e;
        iVar3 = uVar6 * 0x40000000;
        if (uVar6 == iVar5 + 0x20000000U >> 0x1e) {
          local_30 = iVar5 - (iVar3 + DAT_00203728);
          iVar9 = iVar3 - DAT_00203728;
          uVar6 = func_0058E2B8(&local_30);
          local_2c[0] = iVar5 - iVar9;
          uVar7 = func_0058E2B8(local_2c);
          if (uVar6 < uVar7) {
            iVar5 = iVar3 + iVar2;
          }
          else {
            iVar5 = iVar3 - iVar2;
          }
        }
        *(int *)(param_1 + 0x900) = iVar5;
      }
      *(undefined1 *)(param_1 + 0x924) = 1;
    }
  }
  return func_004F4A68(param_1,param_2);
}

