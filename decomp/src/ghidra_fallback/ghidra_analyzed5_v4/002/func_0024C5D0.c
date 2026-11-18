#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern uint DAT_0024c728;
extern float DAT_0024c72c;
extern float DAT_0024c730;
extern int DAT_0024c734;
extern int DAT_0024c738;
extern int DAT_0024c73c;

// USA 0024C5D0 <- EU 0024C5D0 (Ghidra, non-matching)
// GLOBAL DAT_0024c728 uint
// GLOBAL DAT_0024c72c float
// GLOBAL DAT_0024c730 float
// GLOBAL DAT_0024c734 int
// GLOBAL DAT_0024c738 int
// GLOBAL DAT_0024c73c int

void func_0024C5D0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0xa88)) {
    uVar11 = (ulonglong)DAT_0024c728;
    pfVar7 = (float *)(param_1 + 0x9bc);
    fVar9 = DAT_0024c72c;
    fVar10 = DAT_0024c730;
    do {
      puVar1 = (undefined4 *)(param_1 + 0x430);
      if (uVar5 < 0x20) {
        puVar1 = puVar1 + uVar5;
      }
      piVar6 = (int *)*puVar1;
      piVar2 = (int *)(param_1 + 0x7b0);
      if (uVar5 < 0x20) {
        piVar2 = piVar2 + uVar5;
      }
      func_00115154(&local_54,&local_50,*piVar2 + 0x80000000);
      piVar6[0x1d] = (int)uVar11;
      piVar6[0x20] = (int)ALBW_AS_U32(fVar9);
      piVar6[0x1c] = (int)ALBW_AS_U32(fVar9);
      piVar6[0x1e] = (int)ALBW_AS_U32(fVar9);
      piVar6[0x1a] = (int)ALBW_AS_U32(fVar9);
      bVar8 = uVar5 < 0x20;
      piVar6[0x19] = (int)ALBW_AS_U32(local_50);
      piVar6[0x1b] = (int)ALBW_AS_U32(local_54);
      piVar6[0x1f] = (int)ALBW_AS_U32(-local_54);
      pfVar4 = pfVar7;
      if (bVar8) {
        pfVar4 = pfVar7 + uVar5;
      }
      piVar6[0x21] = (int)ALBW_AS_U32(local_50);
      piVar6[0x18] = (int)ALBW_AS_U32(*pfVar4);
      piVar2 = (int *)(param_1 + 0x7b0);
      if (bVar8) {
        piVar2 = piVar2 + uVar5;
      }
      pfVar4 = pfVar7;
      if (bVar8) {
        pfVar4 = pfVar7 + uVar5;
      }
      func_004D80A4(&local_4c,*piVar2 + 0x80000000,*pfVar4 * fVar10);
      pfVar4 = (float *)(param_1 + 0x630);
      if (uVar5 < 0x20) {
        pfVar4 = (float *)(param_1 + 0x630 + uVar5 * 0xc);
      }
      local_48 = fVar9;
      func_00115C70(&local_4c,pfVar4,&local_4c);
      iVar3 = DAT_0024c734;
      if ((*(short *)(param_1 + 0x2c) != 0) &&
         (iVar3 = DAT_0024c738, *(short *)(param_1 + 0x2c) != 2)) {
        iVar3 = DAT_0024c73c;
      }
      local_48 = local_48 + *(float *)(iVar3 + 4) * fVar10;
      piVar6[1] = (int)ALBW_AS_U32(local_4c);
      piVar6[2] = (int)ALBW_AS_U32(local_48);
      piVar6[3] = local_44;
      func_004356B4(piVar6);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0xa88));
  }
  return;
}

