#include "ghidra_types.h"

extern int func_0011529C(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);

// USA 0036D34C <- EU 0036D328 (Ghidra, non-matching)

void func_0036D34C(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define fStack_88 (*(float *)(albw_frame + 0x8))
  #define fStack_84 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define fStack_5c (*(float *)(albw_frame + 0x34))
  #define fStack_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define fStack_50 (*(float *)(albw_frame + 0x40))
  #define fStack_4c (*(float *)(albw_frame + 0x44))
  #define afStack_48 ((float *)(albw_frame + 0x48))
  #define afStack_38 ((float *)(albw_frame + 0x58))
  if (*(char *)(param_1 + 0x74) != '\0') {
    if (*(char *)(param_1 + 0x75) == '\0') {
      func_0011529C(&local_8c,(float *)(param_1 + 8));
      func_0011549C((float *)(param_1 + 0x50),(float *)(param_1 + 0x2c),&local_8c);
    }
    else {
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 0x2c);
      fVar5 = *(float *)(param_1 + 0xc);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar7 = *(float *)(param_1 + 0x14);
      fVar8 = *(float *)(param_1 + 0x18);
      fVar17 = *(float *)(param_1 + 0x10);
      fVar18 = *(float *)(param_1 + 0x1c);
      fVar9 = *(float *)(param_1 + 0x20);
      fVar10 = *(float *)(param_1 + 0x24);
      fVar16 = *(float *)(param_1 + 0x34);
      fVar11 = *(float *)(param_1 + 0x38);
      fVar12 = *(float *)(param_1 + 0x3c);
      fVar13 = *(float *)(param_1 + 0x44);
      fVar15 = *(float *)(param_1 + 0x48);
      fVar14 = *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(param_1 + 0x40);
      fVar6 = *(float *)(param_1 + 0x4c);
      *(float *)(param_1 + 100) = fVar11 * fVar9 + fVar12 * fVar10 + fVar4 * fVar14;
      *(float *)(param_1 + 0x68) = fVar13 * fVar2 + fVar15 * fVar5 + fVar6 * fVar17;
      *(float *)(param_1 + 0x6c) = fVar13 * fVar7 + fVar15 * fVar8 + fVar6 * fVar18;
      *(float *)(param_1 + 0x70) = fVar13 * fVar9 + fVar15 * fVar10 + fVar6 * fVar14;
      *(float *)(param_1 + 0x50) = fVar1 * fVar2 + fVar3 * fVar5 + fVar16 * fVar17;
      *(float *)(param_1 + 0x54) = fVar1 * fVar7 + fVar3 * fVar8 + fVar16 * fVar18;
      *(float *)(param_1 + 0x58) = fVar1 * fVar9 + fVar3 * fVar10 + fVar16 * fVar14;
      *(float *)(param_1 + 0x5c) = fVar11 * fVar2 + fVar12 * fVar5 + fVar4 * fVar17;
      *(float *)(param_1 + 0x60) = fVar11 * fVar7 + fVar12 * fVar8 + fVar4 * fVar18;
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  func_00115C70(afStack_48,param_3,(float *)(*(int *)(param_1 + 4) + 0x368));
  func_00115CE4(afStack_38,(float *)(param_1 + 0x50),afStack_48);
  func_00115C70(&local_8c,afStack_38,afStack_48);
  local_54 = local_8c;
  fStack_50 = fStack_88;
  fStack_4c = fStack_84;
  func_00115C54(&local_8c,&local_54,(float *)(*(int *)(param_1 + 4) + 0x3d0));
  local_60 = local_8c;
  fStack_5c = fStack_88;
  fStack_58 = fStack_84;
  func_00115C70(&local_8c,&local_60,(float *)(*(int *)(param_1 + 4) + 0x368));
  *param_2 = local_8c;
  param_2[1] = fStack_88;
  param_2[2] = fStack_84;
  return;
}

