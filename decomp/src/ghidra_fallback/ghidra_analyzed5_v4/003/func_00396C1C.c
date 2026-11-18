#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_003953EC(int *param_1);
extern int func_004356B4(int *param_1);
extern int *DAT_00396e48;
extern float DAT_00396e4c;

// USA 00396C1C <- EU 00396BF8 (Ghidra, non-matching)
// GLOBAL DAT_00396e48 int *
// GLOBAL DAT_00396e4c float

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_00396C1C(int *param_1)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  if ((short)param_1[2] != 0) goto switchD_00396c58_caseD_0;
  *(undefined2 *)(param_1 + 2) = 500;
  iVar6 = -1;
  uVar3 = 0;
  do {
    pcVar4 = (char *)(*param_1 + 0xba8);
    if (uVar3 < 0x20) {
      pcVar4 = (char *)(*param_1 + 0xba8) + uVar3;
    }
    if (*pcVar4 != '\0') {
      iVar6 = (int)(char)uVar3;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x12);
  switch(iVar6) {
  default:
    goto switchD_00396c58_caseD_0;
  case 1:
  case 3:
    uVar1 = 6;
    break;
  case 2:
    uVar1 = 7;
    break;
  case 5:
  case 6:
    uVar1 = 1;
    break;
  case 7:
    uVar1 = 3;
    break;
  case 8:
  case 0xc:
    uVar1 = 10;
    break;
  case 9:
    uVar1 = 0xb;
    break;
  case 10:
    uVar1 = 4;
    break;
  case 0xb:
    uVar1 = 9;
    break;
  case 0xd:
    uVar1 = 0xe;
    break;
  case 0xe:
    uVar1 = 0xd;
    break;
  case 0xf:
    *(undefined1 *)(param_1 + 4) = 5;
    goto switchD_00396c58_caseD_0;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
switchD_00396c58_caseD_0:
  sVar2 = *(short *)((int)param_1 + 10);
  bVar8 = sVar2 != 0;
  if (bVar8) {
    sVar2 = sVar2 + -1;
  }
  *(short *)(param_1 + 2) = (short)param_1[2] + -1;
  if (bVar8) {
    *(short *)((int)param_1 + 10) = sVar2;
  }
  if (*(short *)((int)param_1 + 0xe) != 0) {
    *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + -1;
  }
  if ((short)param_1[3] == 0) {
    func_003953EC(param_1);
    sVar2 = 0x14;
  }
  else {
    sVar2 = (short)param_1[3] + -1;
  }
  piVar7 = DAT_00396e48;
  *(short *)(param_1 + 3) = sVar2;
  iVar6 = param_1[6];
  puVar5 = *(undefined4 **)(*piVar7 + 0x1c);
  *(undefined4 *)(iVar6 + 4) = *puVar5;
  *(undefined4 *)(iVar6 + 8) = puVar5[1];
  *(undefined4 *)(iVar6 + 0xc) = puVar5[2];
  func_004356B4((int *)param_1[6]);
  iVar6 = *param_1;
  objStack_28[2] = *(uint *)(iVar6 + 0x3d8);
  objStack_28[0] = *(uint *)(iVar6 + 0x3d0);
  objStack_28[1] = *(uint *)(iVar6 + 0x3d4);
  func_00115C70((float *)objStack_28,(float *)objStack_28,*(float **)(*piVar7 + 0x1c));
  fVar9 = DAT_00396e4c;
  func_00115D70((float *)objStack_28,(float *)objStack_28,DAT_00396e4c);
  func_00115C54((float *)objStack_28,(float *)objStack_28,*(float **)(*piVar7 + 0x1c));
  objStack_28[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_28[1]) + fVar9));
  iVar6 = param_1[0xb];
  *(uint *)(iVar6 + 4) = objStack_28[0];
  *(uint *)(iVar6 + 8) = objStack_28[1];
  *(uint *)(iVar6 + 0xc) = objStack_28[2];
  func_004356B4((int *)param_1[0xb]);
  piVar7 = param_1 + 0x10;
  objStack_28[1] = 0;
  objStack_28[0] = (uint)piVar7;
  func_0014E2A0(*param_1,param_1[6],param_1 + 7,0x1000,piVar7,0);
  objStack_28[1] = 0;
  objStack_28[0] = (uint)piVar7;
  return func_0014E2A0(*param_1,param_1[0xb],param_1 + 0xc,0x1000,piVar7,0);
}

