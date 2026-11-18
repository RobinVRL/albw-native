#include "ghidra_types.h"

extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0028C4F8(int param_1,int param_2);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_00584B94(int param_1,int param_2);
extern float DAT_002900c8;
extern float DAT_002900cc;
extern float DAT_002900d0;
extern float DAT_002900d4;
extern float DAT_002900d8;
extern undefined DAT_002900dc;
extern int DAT_002900f4;
extern int *DAT_002900f8;
extern int DAT_002900fc;
extern int *DAT_00290100;
extern int *DAT_00290104;
extern float DAT_00290108;
extern float DAT_0029010c;
extern float DAT_00290110;
extern char s__SE_PL_INVINCIBILITY_002900df[];
extern char s_cf_002900df[];
extern undefined4 _DAT_002900dc;

// USA 0028FE68 <- EU 0028FE90 (Ghidra, non-matching)
// GLOBAL DAT_002900c8 float
// GLOBAL DAT_002900cc float
// GLOBAL DAT_002900d0 float
// GLOBAL DAT_002900d4 float
// GLOBAL DAT_002900d8 float
// GLOBAL DAT_002900dc undefined
// GLOBAL DAT_002900f4 int
// GLOBAL DAT_002900f8 int *
// GLOBAL DAT_002900fc int
// GLOBAL DAT_00290100 int *
// GLOBAL DAT_00290104 int *
// GLOBAL DAT_00290108 float
// GLOBAL DAT_0029010c float
// GLOBAL DAT_00290110 float
// GLOBAL s_cf_002900df string

/* WARNING: Removing unreachable block (ram,0x002900a4) */
/* WARNING: Removing unreachable block (ram,0x002900a8) */
/* WARNING: Removing unreachable block (ram,0x002900b8) */
/* WARNING: Removing unreachable block (ram,0x002900c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0028FE68(int *param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  func_0014D994((float *)(param_1 + 1),DAT_002900d0,DAT_002900cc,DAT_002900c8);
  fVar7 = DAT_002900d4;
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  iVar4 = *(int *)(*param_1 + 0x1c);
  fVar6 = fVar7;
  if (((*(uint *)(iVar4 + 0x328) & 2) != 0) && (*(char *)(iVar4 + 0x33c) == '\f')) {
    fVar6 = DAT_002900d8;
  }
  param_1[5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[5]) + (fVar6 - ALBW_AS_F32(param_1[5])) * ALBW_AS_F32(_DAT_002900dc)));
  if ((char)param_1[6] != '\0') {
    if (*(float *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x5f8) + 0x10) == fVar7) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      local_1c = s__SE_PL_INVINCIBILITY_002900df + 1;
      local_20 = DAT_002900f4;
      func_004E9BEC(*DAT_002900f8,&local_20,0);
    }
  }
  func_0028C4F8(*(int *)(*(int *)(*param_1 + 0x10) + 0x600),(int)(char)param_1[6]);
  iVar4 = DAT_002900fc;
  *(char *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x5f8) + 0x39) = (char)param_1[6];
  if (*(char *)(*(int *)(*param_1 + 0x10) + 0x6c1) != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  param_1[8] = iVar4;
  sVar2 = *(short *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x600) + 0x52);
  if (sVar2 != 0xa1) {
    if (sVar2 < 0xa2) {
      if ((sVar2 != 0x9e && sVar2 != 0x9f) && sVar2 != 0xa0) goto LAB_0028ffe0;
    }
    else if ((sVar2 != 0xa2 && sVar2 != 0xab) && sVar2 != 0xac) goto LAB_0028ffe0;
  }
  param_1[8] = (int)ALBW_AS_U32(fVar7);
LAB_0028ffe0:
  pcVar5 = (char *)(*DAT_00290100 + 0x18);
  cVar1 = *pcVar5;
  if (cVar1 == '\x02') {
    pcVar5 = *(char **)(*DAT_00290100 + 0x1c);
  }
  if (cVar1 == '\x02' && pcVar5 == (char *)0x0) {
    bVar3 = func_00584B94(*DAT_00290104,9);
    if (!bVar3) {
      param_1[8] = (int)ALBW_AS_U32(fVar7);
    }
  }
  fVar8 = ALBW_AS_F32(param_1[8]);
  fVar9 = ALBW_AS_F32(param_1[7]);
  fVar6 = (fVar8 - fVar9) * DAT_00290110;
  if (fVar6 <= fVar7) {
    fVar6 = -fVar6;
  }
  fVar7 = DAT_00290108;
  if ((DAT_00290108 <= fVar6) && (fVar7 = fVar6, DAT_0029010c < fVar6)) {
    fVar7 = DAT_0029010c;
  }
  fVar7 = fVar9 + fVar7;
  if ((fVar7 < fVar8) && (fVar9 <= fVar7)) {
    param_1[7] = (int)ALBW_AS_U32(fVar7);
    return;
  }
  param_1[7] = (int)ALBW_AS_U32(fVar8);
  return;
}

