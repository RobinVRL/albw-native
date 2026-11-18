#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001C4388(int param_1,undefined1 param_2);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_001c4ca4;
extern float DAT_001c4ca8;
extern int *DAT_001c4cac;
extern int DAT_001c4cb0;
extern undefined4 DAT_001c4cb4;
extern int *DAT_001c4cb8;
extern undefined4 DAT_001c4cbc;
extern int *DAT_001c4cc0;
extern float DAT_001c4cc4;
extern undefined4 DAT_001c4cc8;
extern uint DAT_001c4ce0;
extern float DAT_001c4d4c;
extern char s_mtSwitchHit_Color_001c4ccc[];

// USA 001C48F0 <- EU 001C48F0 (Ghidra, non-matching)
// GLOBAL DAT_001c4ca4 int
// GLOBAL DAT_001c4ca8 float
// GLOBAL DAT_001c4cac int *
// GLOBAL DAT_001c4cb0 int
// GLOBAL DAT_001c4cb4 undefined4
// GLOBAL DAT_001c4cb8 int *
// GLOBAL DAT_001c4cbc undefined4
// GLOBAL DAT_001c4cc0 int *
// GLOBAL DAT_001c4cc4 float
// GLOBAL DAT_001c4cc8 undefined4
// GLOBAL DAT_001c4ce0 uint
// GLOBAL DAT_001c4d4c float
// GLOBAL s_mtSwitchHit_Color_001c4ccc string

/* WARNING: Variable defined which should be unmapped: objStack_a8 */

int * func_001C48F0(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  int iVar18;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define local_9c ((uint *)(albw_frame + 0x14))
  #define local_94 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define fStack_88 (*(float *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(uint *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define local_44 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_40 ((uint *)(albw_frame + 0x70))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_001c4ca4;
  piVar3[200] = DAT_001c4ca4 + 0x54;
  *piVar3 = iVar4;
  *(undefined1 *)(piVar3 + 0x103) = 0;
  *(undefined1 *)((int)piVar3 + 0x40d) = 0;
  fVar16 = DAT_001c4ca8;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  piVar3[0x106] = (int)ALBW_AS_U32(fVar16);
  piVar3[0x107] = 0;
  piVar3[0x108] = 0;
  piVar3[0x109] = (int)ALBW_AS_U32(fVar16);
  piVar3[0x10a] = 0;
  piVar11 = piVar3 + 0x10b;
  piVar3[0x10b] = 0;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x10c] = iVar4;
  piVar9 = piVar3 + 0x10c;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x10d] = iVar4;
  piVar12 = piVar3 + 0x10d;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  iVar4 = DAT_001c4cb0;
  piVar3[0x10e] = (int)puVar6;
  piVar10 = DAT_001c4cac;
  piVar3[0x10f] = iVar4;
  piVar3[0x113] = -1;
  piVar3[0x114] = 0;
  iVar8 = *piVar10;
  iVar4 = piVar10[1];
  piVar3[0x110] = (int)piVar3;
  piVar10 = piVar3 + 0x10e;
  piVar3[0x112] = iVar4;
  piVar3[0x111] = iVar8;
  iVar8 = piVar3[0xf4];
  fVar15 = ALBW_AS_F32(piVar3[0xf5]);
  iVar18 = piVar3[0xf6];
  fVar14 = func_0054DE3C(piVar3,0,1);
  uVar17 = DAT_001c4cb4;
  fVar14 = fVar14 + fVar15;
  iVar4 = piVar3[0x10c];
  *(int *)(iVar4 + 4) = iVar8;
  *(float *)(iVar4 + 8) = fVar14;
  *(int *)(iVar4 + 0xc) = iVar18;
  *(undefined4 *)(*piVar9 + 0x58) = uVar17;
  *(undefined4 *)(*piVar9 + 0x60) = uVar17;
  func_004356B4((int *)*piVar9);
  *(uint *)(*piVar9 + 0x2c) = *(uint *)(*piVar9 + 0x2c) & 0xfffff8ff | 0x300;
  iVar4 = piVar3[0x10d];
  *(int *)(iVar4 + 4) = iVar8;
  *(float *)(iVar4 + 8) = fVar14;
  *(int *)(iVar4 + 0xc) = iVar18;
  *(undefined4 *)(*piVar12 + 0x58) = uVar17;
  *(undefined4 *)(*piVar12 + 0x60) = uVar17;
  func_004356B4((int *)*piVar12);
  *(int *)(*piVar10 + 0x18) = *piVar9;
  local_40[0] = piVar3[0xb3];
  func_004EDAD0(*piVar10,local_40);
  *(short *)(*piVar10 + 0x2c) = (short)piVar3[0x15];
  func_004A879C(*DAT_001c4cb8,*piVar10,2);
  objStack_a8[0] = 1;
  objStack_a8[1] = 0;
  objStack_a8[2] = 0;
  iVar4 = func_0014E428((int)piVar3,1,0,0,1,0,0);
  piVar3[0x10b] = iVar4;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar4 + 0x80),piVar3[0xfa],(float *)(piVar3 + 0xf4));
  iVar4 = *piVar11;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(uint *)(iVar4 + 0x74) = param_2[4];
  *(uint *)(iVar4 + 0x78) = param_2[5];
  *(uint *)(iVar4 + 0x7c) = param_2[6];
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = func_0016A2FC(puVar6,1,DAT_001c4cbc,1);
  }
  piVar3[0x114] = (int)puVar13;
  func_00169608(puVar13,0,DAT_001c4cc0,*(int *)(piVar3[0xb4] + 0x1c8));
  func_0016A02C(piVar3[0x114],-1,(int *)0xffffffff,0);
  local_94 = &local_90;
  local_9c[1] = 3;
  local_48 = 10;
  local_44 = 0;
  local_9c[0] = 1;
  local_90 = 0;
  local_7c = (uint)piVar10 | 0xff;
  local_8c = DAT_001c4cc4;
  uStack_84 = DAT_001c4cc8;
  fVar14 = DAT_001c4cc4;
  fStack_88 = fVar16;
  fStack_80 = fVar16;
  func_0016898C(piVar3[0x114],local_9c);
  objStack_a8[0] = DAT_001c4ce0;
  *(float *)(*(int *)(piVar3[0x114] + 0x14) + 0x10) = fVar14;
  objStack_a8[1] = (uint)s_mtSwitchHit_Color_001c4ccc;
  iVar4 = func_00584CC8(piVar3[0x10b],(int *)objStack_a8);
  piVar3[0x113] = iVar4;
  puVar7 = (ushort *)(**(int **)(*piVar11 + 0x20) + iVar4 * 0x154);
  *puVar7 = *puVar7 | 0x400;
  if ((short)param_2[10] == 1) {
    *(undefined1 *)((int)piVar3 + 0x40d) = 1;
    iVar4 = *(int *)(piVar3[0x114] + 0x14);
    if (*(float *)(iVar4 + 8) == fVar16) goto LAB_001c4c50;
    *(float *)(iVar4 + 8) = fVar16;
  }
  else {
    if ((short)param_2[10] == 2) {
      *(undefined1 *)((int)piVar3 + 0x40d) = 2;
      iVar4 = *(int *)(piVar3[0x114] + 0x14);
      if (*(float *)(iVar4 + 8) != DAT_001c4d4c) {
        *(float *)(iVar4 + 8) = DAT_001c4d4c;
        *(undefined1 *)(iVar4 + 0x26) = 1;
      }
      piVar3[0x10a] = *(short *)((int)param_2 + 0x2a) * 0x3c;
      goto LAB_001c4c50;
    }
    iVar4 = *(int *)(piVar3[0x114] + 0x14);
    if (*(float *)(iVar4 + 8) == fVar14) goto LAB_001c4c50;
    *(float *)(iVar4 + 8) = fVar14;
  }
  *(undefined1 *)(iVar4 + 0x26) = 1;
LAB_001c4c50:
  bVar2 = func_00588BF0((int)piVar3,0);
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = *(char *)((int)piVar3 + 0x40d);
  }
  if (bVar2 && cVar1 != '\x02') {
    *(undefined1 *)(piVar3 + 0x103) = 1;
  }
  func_001C4388((int)piVar3,(char)piVar3[0x103]);
  func_00168E9C((int *)piVar3[0x114],piVar3[0x10b],(int *)0x0);
  func_004CEAF0(*piVar11);
  return piVar3;
}

