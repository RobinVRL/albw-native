#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00191C90(int param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0058C364(void);
extern int DAT_001927c4;
extern float DAT_001927c8;
extern float DAT_001927cc;
extern undefined4 *DAT_001927d0;
extern undefined4 DAT_001927d4;
extern float DAT_001927d8;
extern int *DAT_001927dc;
extern undefined4 DAT_001927e0;
extern int DAT_001927f0;
extern undefined4 DAT_00192800;
extern undefined4 DAT_00192804;
extern float DAT_00192808;
extern int *DAT_0019280c;
extern undefined4 *DAT_00192810;
extern int DAT_00192814;
extern uint *DAT_00192818;
extern undefined4 DAT_0019281c;
extern undefined4 *DAT_00192820;
extern char s_SE_IceFloor_GROW_001928d0[];
extern char s_solid_off_001927f4[];
extern char s_solid_on_001927e4[];

// USA 00192390 <- EU 00192390 (Ghidra, non-matching)
// GLOBAL DAT_001927c4 int
// GLOBAL DAT_001927c8 float
// GLOBAL DAT_001927cc float
// GLOBAL DAT_001927d0 undefined4 *
// GLOBAL DAT_001927d4 undefined4
// GLOBAL DAT_001927d8 float
// GLOBAL DAT_001927dc int *
// GLOBAL DAT_001927e0 undefined4
// GLOBAL DAT_001927f0 int
// GLOBAL DAT_00192800 undefined4
// GLOBAL DAT_00192804 undefined4
// GLOBAL DAT_00192808 float
// GLOBAL DAT_0019280c int *
// GLOBAL DAT_00192810 undefined4 *
// GLOBAL DAT_00192814 int
// GLOBAL DAT_00192818 uint *
// GLOBAL DAT_0019281c undefined4
// GLOBAL DAT_00192820 undefined4 *
// GLOBAL s_SE_IceFloor_GROW_001928d0 string
// GLOBAL s_solid_off_001927f4 string
// GLOBAL s_solid_on_001927e4 string

int * func_00192390(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar23;
  undefined8 uVar22;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_104 ((uint *)(albw_frame + 0xc))
  #define local_fc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_f4 (*(float *)(albw_frame + 0x1c))
  #define uStack_f0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_e4 (*(uint *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_ac (*(undefined1 *)(albw_frame + 0x64))
  #define local_9c (*(float *)(albw_frame + 0x74))
  #define local_98 (*(float *)(albw_frame + 0x78))
  #define local_94 (*(float *)(albw_frame + 0x7c))
  #define local_90 (*(float *)(albw_frame + 0x80))
  #define local_8c (*(float *)(albw_frame + 0x84))
  #define local_88 (*(float *)(albw_frame + 0x88))
  #define local_84 (*(float *)(albw_frame + 0x8c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x90))
  #define local_7c (*(float *)(albw_frame + 0x94))
  #define local_78 (*(undefined4 *)(albw_frame + 0x98))
  #define local_70 (*(int *)(albw_frame + 0xa0))
  #define local_6c (*(char * *)(albw_frame + 0xa4))
  piVar2 = func_00150E40(param_1,param_2);
  iVar5 = DAT_001927c4;
  piVar2[200] = DAT_001927c4 + 0x54;
  *piVar2 = iVar5;
  puVar3 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar3);
  }
  piVar2[0x103] = (int)puVar4;
  piVar8 = piVar2 + 0x103;
  iVar5 = func_0054D964((int)piVar2,0);
  piVar2[0x104] = iVar5;
  piVar2[0x106] = 0;
  piVar2[0x107] = 0;
  piVar2[0x108] = 0;
  *(undefined1 *)((int)piVar2 + 0x429) = 1;
  fVar18 = DAT_001927cc;
  fVar19 = DAT_001927c8;
  iVar20 = piVar2[0xf4];
  fVar16 = ALBW_AS_F32(piVar2[0xf5]);
  iVar23 = piVar2[0xf6];
  piVar9 = piVar2 + 0x104;
  piVar11 = piVar2 + 0x108;
  piVar2[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar2[0xf5]) + DAT_001927c8));
  *(bool *)((int)piVar2 + 0x427) = ALBW_AS_F32(param_2[0x11]) != fVar18;
  piVar2[0x106] = 0x168;
  piVar2[0x105] = param_2[4];
  uVar6 = func_00111A64((uint *)*DAT_001927d0);
  *(char *)(piVar2 + 0x10a) = (char)((ulonglong)uVar6 * 4 >> 0x20);
  iVar5 = piVar2[0x104];
  iVar15 = piVar2[0x105];
  *(int *)(iVar5 + 0x58) = iVar15;
  *(float *)(iVar5 + 0x5c) = fVar19;
  *(int *)(iVar5 + 0x60) = iVar15;
  fVar16 = fVar16 + DAT_001927d8;
  *(short *)(*piVar9 + 0x28) = (short)DAT_001927d4;
  iVar5 = *piVar9;
  *(int *)(iVar5 + 4) = iVar20;
  *(float *)(iVar5 + 8) = fVar16;
  *(int *)(iVar5 + 0xc) = iVar23;
  func_004356B4((int *)*piVar9);
  *(int *)(piVar2[0x103] + 0x18) = *piVar9;
  func_004ED9C8(*piVar8);
  local_90 = ALBW_AS_F32(piVar2[0xb3]);
  func_004EDAD0(*piVar8,(uint *)&local_90);
  *(short *)(*piVar8 + 0x2c) = (short)piVar2[0x15];
  func_004A7F00(*DAT_001927dc,*piVar8,0);
  iVar5 = func_0014E428((int)piVar2,1,0,0,1,0,0);
  piVar2[0x107] = iVar5;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,2,DAT_001927e0,1);
  }
  piVar2[0x108] = (int)puVar4;
  iVar5 = DAT_001927f0;
  local_6c = s_solid_on_001927e4;
  local_70 = DAT_001927f0;
  func_00169608((uint *)*piVar11,0,&local_70,*(int *)(piVar2[0xb4] + 0x1c8));
  local_6c = s_solid_off_001927f4;
  local_70 = iVar5;
  func_00169608((uint *)*piVar11,1,&local_70,*(int *)(piVar2[0xb4] + 0x1c8));
  func_0016A02C(*piVar11,-1,(int *)0xffffffff,0);
  local_104[1] = 3;
  local_fc = &local_f8;
  local_b0 = 10;
  local_ac = 0;
  local_104[0] = 1;
  local_f8 = 0;
  local_e4 = (uint)piVar8 | 0xff;
  uStack_f0 = DAT_00192800;
  uStack_ec = DAT_00192804;
  uStack_e8 = DAT_00192800;
  uVar21 = DAT_00192800;
  local_f4 = fVar18;
  func_0016898C(piVar2[0x108],local_104);
  iVar15 = *(int *)(*piVar11 + 0x14);
  if (*(float *)(iVar15 + 8) != fVar18) {
    *(float *)(iVar15 + 8) = fVar18;
    *(undefined1 *)(iVar15 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(piVar2[0x108] + 0x14) + 0x10) = uVar21;
  *(undefined1 *)(piVar2 + 0x109) = 1;
  *(undefined1 *)((int)piVar2 + 0x425) = 0;
  *(undefined1 *)((int)piVar2 + 0x426) = 0;
  func_00191C90((int)piVar2);
  uVar22 = CONCAT44(DAT_00192808,uVar21);
  local_84 = ALBW_AS_F32(piVar2[0x105]) * fVar19 - DAT_00192808;
  local_80 = uVar21;
  local_7c = local_84;
  func_00115C70(&local_9c,(float *)(piVar2 + 0xf4),&local_84);
  func_00115C54(&local_90,(float *)(piVar2 + 0xf4),&local_84);
  puVar4 = DAT_00192810;
  piVar8 = DAT_0019280c;
  uVar17 = CONCAT44(local_90,local_9c);
  uVar24 = CONCAT44(local_8c,fVar19);
  uVar26 = (ulonglong)(uint)ALBW_AS_U32(local_88);
  uVar25 = CONCAT44(local_94,local_98);
  puVar3 = (undefined4 *)
           func_005841A8(*DAT_0019280c,*DAT_00192810,*(int **)(DAT_00192814 + *DAT_0019280c));
  puVar1 = DAT_00192818;
  puVar12 = *(undefined4 **)(*piVar8 + 0x3dbc8);
  if (puVar3 != puVar12) {
    local_78 = DAT_0019281c;
    do {
      puVar10 = (undefined4 *)*puVar3;
      if (((*puVar1 & 1) == 0) && (iVar15 = func_00100174((int *)DAT_00192818), iVar15 != 0)) {
        *DAT_00192820 = local_78;
      }
      if ((puVar10 == (undefined4 *)0x0) ||
         (iVar15 = (**(code **)*puVar10)(puVar10,DAT_00192820), iVar15 == 0)) {
        puVar10 = (undefined4 *)0x0;
      }
      if ((puVar10 != (undefined4 *)0x0) && (*(char *)(puVar10 + 0x107) == '\x01')) {
        pfVar7 = (float *)func_0058C364();
        local_7c = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
        local_84 = *pfVar7 * ALBW_AS_F32(uVar24) - local_7c;
        local_7c = pfVar7[2] * ALBW_AS_F32(uVar24) - local_7c;
        local_80 = (undefined4)uVar22;
        func_00115C70(&local_9c,(float *)(puVar10 + 0xf4),&local_84);
        func_00115C54(&local_90,(float *)(puVar10 + 0xf4),&local_84);
        fVar19 = ALBW_AS_F32(((ulonglong)uVar17 >> 0x20));
        bVar13 = local_9c == fVar19;
        bVar14 = fVar19 <= local_9c;
        if (!bVar14 || bVar13) {
          bVar13 = ALBW_AS_F32(uVar17) == local_90;
          bVar14 = local_90 <= ALBW_AS_F32(uVar17);
        }
        if ((((!bVar14 || bVar13) && (local_98 <= ALBW_AS_F32(((ulonglong)uVar24 >> 0x20)))) &&
            (ALBW_AS_F32(uVar25) <= local_8c)) &&
           ((local_94 <= ALBW_AS_F32(uVar26) && (ALBW_AS_F32(((ulonglong)uVar25 >> 0x20)) <= local_88)))) {
          iVar15 = piVar2[0x106];
          if (0x15 < iVar15) {
            iVar15 = 0x15;
          }
          piVar2[0x106] = iVar15;
          break;
        }
      }
      puVar3 = (undefined4 *)func_005841A8(*piVar8,*puVar4,puVar3 + 1);
    } while (puVar3 != puVar12);
  }
  local_6c = s_SE_IceFloor_GROW_001928d0;
  local_70 = iVar5;
  func_00150A84(piVar2,&local_70,0);
  return piVar2;
}

