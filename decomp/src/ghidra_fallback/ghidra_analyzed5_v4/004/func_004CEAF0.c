#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_00676BF4(int param_1,float *param_2,undefined4 param_3);
extern int func_00676F18(int param_1,float *param_2,undefined4 *param_3);
extern float DAT_004cedd4;
extern int *DAT_004cedd8;

// USA 004CEAF0 <- EU 004CEAC8 (Ghidra, non-matching)
// GLOBAL DAT_004cedd4 float
// GLOBAL DAT_004cedd8 int *

void func_004CEAF0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
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
  float fVar19;
  float fVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  if (*(float *)(param_1 + 0x134) <= DAT_004cedd4) {
    if ((*(uint *)(param_1 + 0x164) & 0x40000000) != 0) {
      fVar20 = *(float *)(param_1 + 0x74);
      fVar17 = *(float *)(param_1 + 0x78);
      fVar7 = *(float *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xac);
      *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0x80) * fVar20;
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0x90) * fVar20;
      *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xa0) * fVar20;
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0x84) * fVar17;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0x94) * fVar17;
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xa4) * fVar17;
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x88) * fVar7;
      *(float *)(param_1 + 200) = *(float *)(param_1 + 0x98) * fVar7;
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xa8) * fVar7;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xbfffffff;
    }
    func_001151EC((undefined4 *)(param_1 + 0x104),(float *)(param_1 + 0xb0));
    if (*(char *)(param_1 + 0x16b) == '\0') goto LAB_004cef0c;
    if ((*(uint *)(param_1 + 0x164) & 0x1000000) == 0) {
      puVar2 = *(uint **)(*(int *)(param_1 + 0x24) + 0xc);
      *puVar2 = *puVar2 | 2;
      puVar3 = *(undefined4 **)(param_1 + 0x16c);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x16c);
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  else {
    local_30 = *(undefined4 *)(param_1 + 0x88);
    local_2c = *(undefined4 *)(param_1 + 0x98);
    local_28 = *(undefined4 *)(param_1 + 0xa8);
    func_0051E5F8(*DAT_004cedd8,(float *)(param_1 + 0xe0),&local_30,*(float *)(param_1 + 0x134),
                  *(float *)(param_1 + 0x138));
    if ((*(uint *)(param_1 + 0x164) & 0x40000000) != 0) {
      fVar20 = *(float *)(param_1 + 0x74);
      fVar7 = *(float *)(param_1 + 0x78);
      fVar17 = *(float *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xac);
      *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0x80) * fVar20;
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0x90) * fVar20;
      *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xa0) * fVar20;
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0x84) * fVar7;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0x94) * fVar7;
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xa4) * fVar7;
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x88) * fVar17;
      *(float *)(param_1 + 200) = *(float *)(param_1 + 0x98) * fVar17;
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xa8) * fVar17;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xbfffffff;
    }
    fVar17 = *(float *)(param_1 + 0xb0);
    fVar7 = *(float *)(param_1 + 0xe0);
    fVar8 = *(float *)(param_1 + 0xb4);
    fVar12 = *(float *)(param_1 + 0xec);
    fVar14 = *(float *)(param_1 + 0xf8);
    fVar10 = *(float *)(param_1 + 0xb8);
    fVar11 = *(float *)(param_1 + 200);
    fVar13 = *(float *)(param_1 + 0xf0);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar16 = *(float *)(param_1 + 0xfc);
    fVar9 = *(float *)(param_1 + 0xc4);
    fVar20 = *(float *)(param_1 + 0xe4);
    fVar15 = *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xf4);
    fVar21 = *(float *)(param_1 + 0xd0);
    fVar6 = *(float *)(param_1 + 0x100);
    fVar19 = *(float *)(param_1 + 0xd4);
    fVar18 = *(float *)(param_1 + 0xe8);
    *(float *)(param_1 + 0x11c) = fVar12 * fVar10 + fVar13 * fVar11 + fVar4 * fVar15;
    *(float *)(param_1 + 0x124) = fVar14 * fVar17 + fVar16 * fVar5 + fVar6 * fVar21;
    *(float *)(param_1 + 0x128) = fVar14 * fVar8 + fVar16 * fVar9 + fVar6 * fVar19;
    *(float *)(param_1 + 300) = fVar14 * fVar10 + fVar16 * fVar11 + fVar6 * fVar15;
    *(float *)(param_1 + 0x104) = fVar7 * fVar17 + fVar20 * fVar5 + fVar18 * fVar21;
    *(float *)(param_1 + 0x108) = fVar7 * fVar8 + fVar20 * fVar9 + fVar18 * fVar19;
    *(float *)(param_1 + 0x10c) = fVar7 * fVar10 + fVar20 * fVar11 + fVar18 * fVar15;
    *(float *)(param_1 + 0x114) = fVar12 * fVar17 + fVar13 * fVar5 + fVar4 * fVar21;
    *(float *)(param_1 + 0x118) = fVar12 * fVar8 + fVar13 * fVar9 + fVar4 * fVar19;
    if ((*(uint *)(param_1 + 0x164) & 0x40000000) != 0) {
      fVar17 = *(float *)(param_1 + 0x78);
      fVar20 = *(float *)(param_1 + 0x74);
      fVar7 = *(float *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
      *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0x80) * fVar20;
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0x90) * fVar20;
      *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xa0) * fVar20;
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0x84) * fVar17;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0x94) * fVar17;
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xa4) * fVar17;
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x88) * fVar7;
      *(float *)(param_1 + 200) = *(float *)(param_1 + 0x98) * fVar7;
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xa8) * fVar7;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xbfffffff;
    }
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xdc);
    if (*(char *)(param_1 + 0x16b) == '\0') goto LAB_004cef0c;
    if ((*(uint *)(param_1 + 0x164) & 0x1000000) == 0) {
      puVar2 = *(uint **)(*(int *)(param_1 + 0x24) + 0xc);
      *puVar2 = *puVar2 | 2;
      puVar3 = *(undefined4 **)(param_1 + 0x16c);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x16c);
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    func_00676BF4(iVar1,(float *)(param_1 + 0x104),0);
  }
  else {
    func_00676F18(iVar1,(float *)(param_1 + 0x104),puVar3);
  }
LAB_004cef0c:
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x8000000;
  return;
}

