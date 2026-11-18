#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0011558C(float *param_1,float *param_2);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0016AAAC(int param_1,undefined4 param_2,undefined4 param_3);
extern undefined8 func_00232D34(int param_1,uint *param_2,int param_3);
extern int func_002330A4(int param_1,int param_2,uint param_3);
extern int func_002331F0(int param_1,int param_2,float param_3);
extern int func_002333F4(int param_1,int param_2,uint param_3);
extern int func_00233450(int param_1,int param_2,uint param_3);
extern int func_00233828(int param_1);
extern int func_002709CC(int param_1);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003FB1D0(float *param_1,int param_2,int param_3,float *param_4,float *param_5, float fparam_0,float fparam_1);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern int func_004CEF4C(int *param_1,int param_2);
extern int func_004D033C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0, float fparam_1,float fparam_2);
extern int func_00503F50(int param_1);
extern int func_0057D5C4(int *param_1);
extern int *DAT_00131a10;
extern int DAT_00131a14;
extern int *DAT_00131a18;
extern float *DAT_00131a1c;
extern float DAT_00131a20;
extern float DAT_00131a24;
extern undefined4 DAT_00131a28;
extern float DAT_00131a2c;
extern float DAT_00131a30;
extern float DAT_00131a34;
extern float DAT_00131a38;
extern float DAT_00131a3c;
extern float *DAT_00131a40;
extern int DAT_00131a44;
extern int DAT_00132198;
extern int DAT_0013219c;
extern float DAT_001321a0;
extern float DAT_001321a4;
extern float DAT_001321a8;
extern undefined4 DAT_001321ac;
extern int *DAT_001321b0;
extern int *DAT_001321b4;

// USA 001312BC <- EU 001312BC (Ghidra, non-matching)
// GLOBAL DAT_00131a10 int *
// GLOBAL DAT_00131a14 int
// GLOBAL DAT_00131a18 int *
// GLOBAL DAT_00131a1c float *
// GLOBAL DAT_00131a20 float
// GLOBAL DAT_00131a24 float
// GLOBAL DAT_00131a28 undefined4
// GLOBAL DAT_00131a2c float
// GLOBAL DAT_00131a30 float
// GLOBAL DAT_00131a34 float
// GLOBAL DAT_00131a38 float
// GLOBAL DAT_00131a3c float
// GLOBAL DAT_00131a40 float *
// GLOBAL DAT_00131a44 int
// GLOBAL DAT_00132198 int
// GLOBAL DAT_0013219c int
// GLOBAL DAT_001321a0 float
// GLOBAL DAT_001321a4 float
// GLOBAL DAT_001321a8 float
// GLOBAL DAT_001321ac undefined4
// GLOBAL DAT_001321b0 int *
// GLOBAL DAT_001321b4 int *

undefined4 func_001312BC(int param_1,int param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int *piVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_110 (*(float *)(albw_frame + 0x0))
  #define local_10c (*(int * *)(albw_frame + 0x4))
  #define local_108 (*(float * *)(albw_frame + 0x8))
  #define local_104 (*(float * *)(albw_frame + 0xc))
  #define local_100 (*(float * *)(albw_frame + 0x10))
  #define local_fc (*(float *)(albw_frame + 0x14))
  #define local_f8 (*(float *)(albw_frame + 0x18))
  #define local_f4 (*(float *)(albw_frame + 0x1c))
  #define local_f0 (*(float *)(albw_frame + 0x20))
  #define local_ec (*(float *)(albw_frame + 0x24))
  #define local_e8 (*(int * *)(albw_frame + 0x28))
  #define local_e4 (*(float * *)(albw_frame + 0x2c))
  #define local_e0 (*(float * *)(albw_frame + 0x30))
  #define local_dc (*(float *)(albw_frame + 0x34))
  #define afStack_d8 ((float *)(albw_frame + 0x38))
  #define local_d0 (*(float * *)(albw_frame + 0x40))
  #define local_cc (*(float *)(albw_frame + 0x44))
  #define local_c8 (*(int * *)(albw_frame + 0x48))
  #define local_c4 (*(float *)(albw_frame + 0x4c))
  #define local_c0 (*(float *)(albw_frame + 0x50))
  #define local_bc (*(float *)(albw_frame + 0x54))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_ac (*(float *)(albw_frame + 0x64))
  #define local_a4 (*(uint *)(albw_frame + 0x6c))
  #define local_a0 (*(float * *)(albw_frame + 0x70))
  #define local_9c (*(int * *)(albw_frame + 0x74))
  #define local_90 (*(float * *)(albw_frame + 0x80))
  #define local_8c (*(float *)(albw_frame + 0x84))
  #define local_88 (*(float * *)(albw_frame + 0x88))
  #define local_84 (*(undefined1 * *)(albw_frame + 0x8c))
  #define local_80 (*(float *)(albw_frame + 0x90))
  #define fStack_7c (*(float *)(albw_frame + 0x94))
  #define local_78 (*(float * *)(albw_frame + 0x98))
  #define local_74 (*(float *)(albw_frame + 0x9c))
  #define local_68 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_64 (*(float *)(albw_frame + 0xac))
  #define local_58 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_54 (*(float *)(albw_frame + 0xbc))
  #define local_4c (*(undefined1 * *)(albw_frame + 0xc4))
  #define local_48 (*(int *)(albw_frame + 0xc8))
  local_84 = (undefined1 *)(param_1 + 0x2969);
  local_a0 = (float *)(param_1 + 0x28f0);
  local_48 = param_1 + 0x2800;
  local_4c = (undefined1 *)(param_1 + 0x29e5);
  pfVar10 = (float *)(param_1 + 0x296c);
  piVar26 = (int *)(param_1 + 0x28d0);
  *(undefined1 *)(param_1 + 0x2c1d) = *(undefined1 *)(*DAT_00131a10 + 0x22);
  if ((param_2 == 0) && ((*(byte *)(DAT_00131a14 + param_1) & 2) == 0)) {
    uVar20 = 0;
    local_a4 = (uint)(*(char *)(param_1 + 0x2c1b) != '\0');
    uVar16 = 0;
    puVar19 = (undefined4 *)(param_1 + 0x28d0);
LAB_001315ec:
    do {
      puVar22 = puVar19 + uVar20 * 3;
      while( true ) {
        puVar7 = puVar19;
        if (uVar20 < 2) {
          puVar7 = puVar22;
        }
        if (uVar16 < 3) {
          puVar7 = puVar7 + uVar16;
        }
        (**(code **)(*(int *)*puVar7 + 0x10))((int *)*puVar7);
        uVar16 = uVar16 + 1;
        if (2 < (int)uVar16) break;
        if (uVar16 != 1) goto LAB_001315ec;
        if ((*(byte *)(param_1 + 0x2c1f) & 1) == 0) {
          puVar7 = puVar19;
          if (uVar20 < 2) {
            puVar7 = puVar22;
          }
          puVar11 = puVar19;
          if (uVar20 < 2) {
            puVar11 = puVar22;
          }
          (**(code **)(*(int *)*puVar7 + 0x14))((int *)*puVar7,puVar11[1]);
        }
      }
      uVar20 = uVar20 + 1;
      if (1 < (int)uVar20) {
        iVar5 = *piVar26;
        func_00115D70((float *)&local_e8,DAT_00131a1c,DAT_00131a20);
        local_10c = local_e8;
        local_108 = local_e4;
        local_104 = local_e0;
        func_00115CA8(&local_f4,(float *)(iVar5 + 0x120),(float *)&local_10c);
        fVar28 = local_f4 - *(float *)(param_1 + 0x29e8);
        fVar30 = local_ec - *(float *)(param_1 + 0x29f0);
        fVar29 = local_f0 - *(float *)(param_1 + 0x29ec);
        uVar31 = CONCAT44(DAT_00131a28,DAT_00131a24);
        fVar28 = SQRT(fVar28 * fVar28 + fVar29 * fVar29 + fVar30 * fVar30);
        if ((int)ALBW_AS_U32(fVar28) < 0x3f000001) {
          fVar29 = DAT_00131a30;
          if ((DAT_00131a2c < fVar28) && (fVar29 = DAT_00131a34, fVar28 < DAT_00131a24)) {
            fVar29 = (DAT_00131a3c * (fVar28 - DAT_00131a2c)) / DAT_00131a38 + DAT_00131a30;
          }
          *(float *)(local_48 + 500) = fVar29;
        }
        *(float *)(param_1 + 0x29e8) = local_f4;
        *(float *)(param_1 + 0x29ec) = local_f0;
        *(float *)(param_1 + 0x29f0) = local_ec;
        piVar4 = (int *)*piVar26;
        uVar16 = (int)ALBW_AS_U32(fVar28) < 0x3f000001 & local_a4;
        piVar3 = (int *)(**(code **)(*piVar4 + 0x20))(piVar4,1);
        local_10c = func_0057D5C4(piVar3);
        piVar3 = (int *)(**(code **)(*piVar4 + 0x20))(piVar4,0);
        local_9c = func_0057D5C4(piVar3);
        iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,1);
        func_0011558C((float *)&local_108,(float *)(iVar5 + 4));
        iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,0);
        func_0011558C(afStack_d8,(float *)(iVar5 + 4));
        *local_84 = 4;
        func_003FB1D0(local_a0,(int)local_10c,(int)local_9c,(float *)&local_108,afStack_d8,
                      *(float *)(param_1 + 0x2c10),*(float *)(param_1 + 0x2c14));
        iVar5 = local_48;
        local_90 = local_100;
        local_8c = local_f0;
        local_88 = local_e0;
        func_00115D70((float *)&local_84,(float *)&local_90,*(float *)(local_48 + 500));
        local_fc = local_fc + ALBW_AS_F32(local_84);
        local_ec = local_ec + local_80;
        local_dc = local_dc + fStack_7c;
        local_90 = local_d0;
        local_8c = local_c0;
        local_88 = (float *)local_b0;
        func_00115D70((float *)&local_84,(float *)&local_90,*(float *)(iVar5 + 500));
        puVar1 = local_4c;
        local_cc = local_cc + ALBW_AS_F32(local_84);
        local_bc = local_bc + local_80;
        local_ac = local_ac + fStack_7c;
        *local_4c = 4;
        fVar28 = *(float *)(param_1 + 0x2c10);
        fVar29 = *(float *)(param_1 + 0x2c14);
        func_003FB1D0(pfVar10,(int)local_10c,(int)local_9c,(float *)&local_108,afStack_d8,fVar28,
                      fVar29);
        pfVar12 = DAT_00131a40;
        if (*(char *)(param_1 + 0x2c1a) == '\0') {
          *puVar1 = 0;
        }
        uVar35 = func_00232D34((int)ALBW_AS_U32(*pfVar12),(uint *)pfVar10,uVar16);
        local_f0 = ALBW_AS_F32((uint)((int)uVar35 != 0));
        *(char *)(*(int *)(DAT_00131a44 + param_1) + 0x8c) = (char)uVar16;
        iVar5 = *piVar26;
        piVar3 = (int *)(param_1 + 0x1870);
        uVar20 = *(uint *)(iVar5 + 0x2c8);
        *(int *)(param_1 + 0x28cc) = *(int *)(param_1 + 0x28cc) + 1;
        pfVar10 = DAT_00131a40;
        if ((uVar20 & 1) == 0) {
          iVar6 = iVar5 + 0x10;
        }
        else {
          iVar6 = iVar5 + 400;
        }
        pfVar13 = (float *)(iVar5 + 0x120);
        pfVar12 = (float *)(iVar6 + 4);
        fVar30 = ALBW_AS_F32((param_1 + 0x2bc8));
        if (local_f0 == 0.0) {
          if (uVar16 == 0) {
            *piVar3 = 0;
            local_104 = pfVar13;
            local_100 = pfVar12;
            local_f8 = fVar30;
            func_0010C0B8((int)ALBW_AS_U32(fVar30));
            uVar20 = 0;
            if (*(int *)(param_1 + 0x5c) < 1) goto LAB_00131fc0;
            local_e8 = (int *)(param_1 + 0x28cc);
            local_e4 = (float *)(param_1 + 0x2c00);
            fVar30 = fStack_7c;
            goto LAB_00131ef0;
          }
          *piVar3 = 0;
          local_108 = pfVar13;
          local_104 = pfVar12;
          local_f4 = fVar30;
          func_0010C0B8((int)ALBW_AS_U32(fVar30));
          uVar20 = 0;
          if (*(int *)(param_1 + 0x5c) < 1) goto LAB_00131e64;
          local_e8 = (int *)(param_1 + 0x28cc);
          local_e4 = (float *)(param_1 + 0x2c00);
          fVar30 = fStack_7c;
          goto LAB_00131d94;
        }
        local_ec = fVar30;
        if (uVar16 == 0) {
          *piVar3 = 0;
          local_100 = (float *)ALBW_PTR_BITS(*pfVar10);
          local_108 = pfVar12;
          func_0010C0B8((int)ALBW_AS_U32(fVar30));
          uVar20 = 0;
          if (*(int *)(param_1 + 0x5c) < 1) goto LAB_00131d00;
          local_e4 = (float *)(param_1 + 0x28cc);
          local_e0 = (float *)(param_1 + 0x2c00);
          fVar30 = fStack_7c;
          goto LAB_00131bd8;
        }
        *piVar3 = 0;
        local_f4 = *pfVar10;
        local_104 = pfVar13;
        local_100 = pfVar12;
        func_0010C0B8((int)ALBW_AS_U32(fVar30));
        uVar20 = 0;
        if (*(int *)(param_1 + 0x5c) < 1) goto LAB_00131b34;
        local_e0 = (float *)(param_1 + 0x28cc);
        local_dc = ALBW_AS_F32((param_1 + 0x2c00));
        fVar30 = fStack_7c;
        goto LAB_001319d0;
      }
      uVar16 = 0;
    } while( true );
  }
  uVar20 = 0;
  uVar16 = 0;
LAB_00131360:
  do {
    piVar3 = piVar26 + uVar20 * 3;
    while( true ) {
      piVar4 = piVar26;
      if (uVar20 < 2) {
        piVar4 = piVar3;
      }
      if (uVar16 < 3) {
        piVar4 = piVar4 + uVar16;
      }
      (**(code **)(*(int *)*piVar4 + 0x10))((int *)*piVar4);
      uVar16 = uVar16 + 1;
      if (2 < (int)uVar16) break;
      if (uVar16 != 1) goto LAB_00131360;
      if ((*(byte *)(param_1 + 0x2c1f) & 1) == 0) {
        piVar4 = piVar26;
        if (uVar20 < 2) {
          piVar4 = piVar3;
        }
        piVar17 = piVar26;
        if (uVar20 < 2) {
          piVar17 = piVar3;
        }
        (**(code **)(*(int *)*piVar4 + 0x14))((int *)*piVar4,piVar17[1]);
      }
    }
    uVar20 = uVar20 + 1;
    if (1 < (int)uVar20) {
      piVar17 = (int *)*piVar26;
      piVar3 = (int *)(**(code **)(*piVar17 + 0x20))(piVar17,1);
      piVar3 = func_0057D5C4(piVar3);
      piVar4 = (int *)(**(code **)(*piVar17 + 0x20))(piVar17,0);
      piVar4 = func_0057D5C4(piVar4);
      iVar5 = (**(code **)(*piVar17 + 0x18))(piVar17,1);
      func_0011558C(&local_80,(float *)(iVar5 + 4));
      iVar5 = (**(code **)(*piVar17 + 0x18))(piVar17,0);
      func_0011558C(&local_110,(float *)(iVar5 + 4));
      *local_84 = 4;
      func_003FB1D0(local_a0,(int)piVar3,(int)piVar4,&local_80,&local_110,
                    *(float *)(param_1 + 0x2c10),*(float *)(param_1 + 0x2c14));
      iVar5 = local_48;
      local_d0 = local_78;
      local_cc = ALBW_AS_F32(local_68);
      local_c8 = (int *)local_58;
      func_00115D70(&local_c4,(float *)&local_d0,*(float *)(local_48 + 500));
      local_74 = local_74 + local_c4;
      local_64 = local_64 + local_c0;
      local_54 = local_54 + local_bc;
      local_d0 = local_108;
      local_cc = local_f8;
      local_c8 = local_e8;
      func_00115D70(&local_c4,(float *)&local_d0,*(float *)(iVar5 + 500));
      local_104 = (float *)ALBW_PTR_BITS((ALBW_AS_F32(local_104) + local_c4));
      local_f4 = local_f4 + local_c0;
      local_e4 = (float *)ALBW_PTR_BITS((ALBW_AS_F32(local_e4) + local_bc));
      *local_4c = 4;
      func_003FB1D0(pfVar10,(int)piVar3,(int)piVar4,&local_80,&local_110,
                    *(float *)(param_1 + 0x2c10),*(float *)(param_1 + 0x2c14));
      iVar5 = (**(code **)(*(int *)*piVar26 + 0x18))((int *)*piVar26,0);
      iVar6 = (**(code **)(*(int *)*piVar26 + 0x18))((int *)*piVar26,1);
      return func_0016AAAC(*DAT_00131a18,iVar6 + 4,iVar5 + 4);
    }
    uVar16 = 0;
  } while( true );
LAB_001319d0:
  do {
    if (uVar20 < *(uint *)(param_1 + 0x5c)) {
      puVar19 = *(undefined4 **)(*(int *)(param_1 + 100) + uVar20 * 4);
    }
    else {
      puVar19 = (undefined4 *)0x0;
    }
    piVar4 = (int *)*puVar19;
    if (*(char *)(puVar19 + 1) == '\0') {
      if (piVar4 == (int *)0x0) goto LAB_00131a00;
      bVar2 = func_004CEF4C(piVar4,(int)ALBW_AS_U32(*local_e0));
      if (((bVar2 != 0) && (uVar8 = piVar4[0x4f], -1 < (int)uVar8)) &&
         (uVar9 = piVar4[0x59], (uVar9 & 0x1000) == 0)) {
        if ((uVar9 & 0x2000000) == 0) {
          if ((uVar9 & 0x4000000) != 0) {
            func_002333F4((int)ALBW_AS_U32(local_f4),(int)piVar4,uVar8);
          }
        }
        else {
          func_002330A4((int)ALBW_AS_U32(local_f4),(int)piVar4,uVar8);
        }
      }
      func_004D033C((int)piVar4,local_100,local_104,(uint)(*(char *)((int)ALBW_AS_U32(local_dc) + 0x1d) == '\0'),
                    fVar28,fVar29,fVar30);
      uVar20 = uVar20 + 1;
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[0x13] = 0;
      }
LAB_00131a00:
      uVar8 = uVar20;
      if ((int)(uVar20 + 1) <= *(int *)(param_1 + 0x5c)) {
        do {
          fVar28 = *(float *)(param_1 + 0x68);
          pfVar10 = *(float **)(*(int *)(param_1 + 100) + uVar8 * 4);
          uVar8 = uVar8 + 1;
          *pfVar10 = fVar28;
          *(float **)(param_1 + 0x68) = pfVar10;
        } while ((int)uVar8 < (int)(uVar20 + 1));
      }
      func_0048C320((int *)(param_1 + 0x5c),uVar20,1);
    }
  } while ((int)uVar20 < *(int *)(param_1 + 0x5c));
LAB_00131b34:
  for (iVar5 = *(int *)(DAT_00132198 + param_1); iVar5 != param_1 + 0x288c;
      iVar5 = *(int *)(iVar5 + 4)) {
    if (*piVar3 < *(int *)(param_1 + 0x1874)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1878) + *piVar3 * 4) = *(undefined4 *)(iVar5 + 8);
      *piVar3 = *piVar3 + 1;
    }
  }
  goto LAB_00131b7c;
LAB_00131bd8:
  do {
    if (uVar20 < *(uint *)(param_1 + 0x5c)) {
      puVar19 = *(undefined4 **)(*(int *)(param_1 + 100) + uVar20 * 4);
    }
    else {
      puVar19 = (undefined4 *)0x0;
    }
    piVar4 = (int *)*puVar19;
    if (*(char *)(puVar19 + 1) == '\0') {
      if (piVar4 == (int *)0x0) goto LAB_00131c08;
      bVar2 = func_004CEF4C(piVar4,(int)ALBW_AS_U32(*local_e4));
      if (((bVar2 != 0) && (fVar32 = ALBW_AS_F32(piVar4[0x4f]), -1 < (int)ALBW_AS_U32(fVar32))) &&
         (uVar8 = piVar4[0x59], (uVar8 & 0x1000) == 0)) {
        if ((uVar8 & 0x2000000) == 0) {
          if ((uVar8 & 0x4000000) != 0) {
            func_00233450((int)local_100,(int)piVar4,(uint)ALBW_AS_U32(fVar32));
          }
        }
        else {
          func_002331F0((int)local_100,(int)piVar4,fVar32);
        }
      }
      func_004D033C((int)piVar4,local_108,pfVar13,(uint)(*(char *)((int)local_e0 + 0x1d) == '\0'),
                    fVar28,fVar29,fVar30);
      uVar20 = uVar20 + 1;
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[0x13] = 0;
      }
LAB_00131c08:
      uVar8 = uVar20;
      if ((int)(uVar20 + 1) <= *(int *)(param_1 + 0x5c)) {
        do {
          fVar28 = *(float *)(param_1 + 0x68);
          pfVar10 = *(float **)(*(int *)(param_1 + 100) + uVar8 * 4);
          uVar8 = uVar8 + 1;
          *pfVar10 = fVar28;
          *(float **)(param_1 + 0x68) = pfVar10;
        } while ((int)uVar8 < (int)(uVar20 + 1));
      }
      func_0048C320((int *)(param_1 + 0x5c),uVar20,1);
    }
  } while ((int)uVar20 < *(int *)(param_1 + 0x5c));
LAB_00131d00:
  for (iVar5 = *(int *)(DAT_00132198 + param_1); iVar5 != param_1 + 0x288c;
      iVar5 = *(int *)(iVar5 + 4)) {
    if (*piVar3 < *(int *)(param_1 + 0x1874)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1878) + *piVar3 * 4) = *(undefined4 *)(iVar5 + 8);
      *piVar3 = *piVar3 + 1;
    }
  }
LAB_00131b7c:
  func_0010EEE0((int)ALBW_AS_U32(local_ec));
  goto LAB_00132010;
LAB_00131d94:
  do {
    if (uVar20 < *(uint *)(param_1 + 0x5c)) {
      puVar19 = *(undefined4 **)(*(int *)(param_1 + 100) + uVar20 * 4);
    }
    else {
      puVar19 = (undefined4 *)0x0;
    }
    piVar4 = (int *)*puVar19;
    if (*(char *)(puVar19 + 1) == '\0') {
      if (piVar4 == (int *)0x0) goto LAB_00131dc4;
      func_004CEF4C(piVar4,*local_e8);
      func_004D033C((int)piVar4,local_104,local_108,(uint)(*(char *)((int)local_e4 + 0x1d) == '\0'),
                    fVar28,fVar29,fVar30);
      uVar20 = uVar20 + 1;
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[0x13] = 0;
      }
LAB_00131dc4:
      uVar8 = uVar20;
      if ((int)(uVar20 + 1) <= *(int *)(param_1 + 0x5c)) {
        do {
          fVar28 = *(float *)(param_1 + 0x68);
          pfVar10 = *(float **)(*(int *)(param_1 + 100) + uVar8 * 4);
          uVar8 = uVar8 + 1;
          *pfVar10 = fVar28;
          *(float **)(param_1 + 0x68) = pfVar10;
        } while ((int)uVar8 < (int)(uVar20 + 1));
      }
      func_0048C320((int *)(param_1 + 0x5c),uVar20,1);
    }
  } while ((int)uVar20 < *(int *)(param_1 + 0x5c));
LAB_00131e64:
  for (iVar5 = *(int *)(DAT_00132198 + param_1); fVar28 = local_f4, iVar5 != param_1 + 0x288c;
      iVar5 = *(int *)(iVar5 + 4)) {
    if (*piVar3 < *(int *)(param_1 + 0x1874)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1878) + *piVar3 * 4) = *(undefined4 *)(iVar5 + 8);
      *piVar3 = *piVar3 + 1;
    }
  }
  goto LAB_0013200c;
LAB_00131ef0:
  do {
    if (uVar20 < *(uint *)(param_1 + 0x5c)) {
      puVar19 = *(undefined4 **)(*(int *)(param_1 + 100) + uVar20 * 4);
    }
    else {
      puVar19 = (undefined4 *)0x0;
    }
    piVar4 = (int *)*puVar19;
    if (*(char *)(puVar19 + 1) == '\0') {
      if (piVar4 == (int *)0x0) goto LAB_00131f20;
      func_004CEF4C(piVar4,*local_e8);
      func_004D033C((int)piVar4,local_100,local_104,(uint)(*(char *)((int)local_e4 + 0x1d) == '\0'),
                    fVar28,fVar29,fVar30);
      uVar20 = uVar20 + 1;
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[0x13] = 0;
      }
LAB_00131f20:
      uVar8 = uVar20;
      if ((int)(uVar20 + 1) <= *(int *)(param_1 + 0x5c)) {
        do {
          fVar28 = *(float *)(param_1 + 0x68);
          pfVar10 = *(float **)(*(int *)(param_1 + 100) + uVar8 * 4);
          uVar8 = uVar8 + 1;
          *pfVar10 = fVar28;
          *(float **)(param_1 + 0x68) = pfVar10;
        } while ((int)uVar8 < (int)(uVar20 + 1));
      }
      func_0048C320((int *)(param_1 + 0x5c),uVar20,1);
    }
  } while ((int)uVar20 < *(int *)(param_1 + 0x5c));
LAB_00131fc0:
  for (iVar5 = *(int *)(DAT_00132198 + param_1); fVar28 = local_f8, iVar5 != param_1 + 0x288c;
      iVar5 = *(int *)(iVar5 + 4)) {
    if (*piVar3 < *(int *)(param_1 + 0x1874)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1878) + *piVar3 * 4) = *(undefined4 *)(iVar5 + 8);
      *piVar3 = *piVar3 + 1;
    }
  }
LAB_0013200c:
  func_0010EEE0((int)ALBW_AS_U32(fVar28));
LAB_00132010:
  if (((uint)ALBW_AS_U32(local_f0) & uVar16) != 0) {
    func_00233828((int)ALBW_AS_U32(*DAT_00131a40));
  }
  piVar3 = DAT_00131a18;
  *(undefined1 *)(param_1 + 0x2c1b) = 1;
  fVar29 = DAT_001321a4;
  fVar28 = DAT_001321a0;
  pbVar18 = *(byte **)(*piVar3 + 0x50);
  *(undefined4 *)(pbVar18 + 100) = *(undefined4 *)(param_1 + 0x2c10);
  *(undefined4 *)(pbVar18 + 0x68) = *(undefined4 *)(param_1 + 0x2c14);
  *pbVar18 = *pbVar18 | 1;
  pbVar18[1] = 0;
  iVar5 = *piVar26;
  if ((*(uint *)(iVar5 + 0x2c8) & 1) == 0) {
    iVar5 = iVar5 + 0x10;
  }
  else {
    iVar5 = iVar5 + 400;
  }
  uVar14 = *(undefined4 *)(iVar5 + 8);
  uVar15 = *(undefined4 *)(iVar5 + 0xc);
  uVar21 = *(undefined4 *)(iVar5 + 0x10);
  uVar23 = *(undefined4 *)(iVar5 + 0x14);
  uVar24 = *(undefined4 *)(iVar5 + 0x18);
  uVar25 = *(undefined4 *)(iVar5 + 0x1c);
  uVar27 = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(pbVar18 + 0x34) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(pbVar18 + 0x38) = uVar14;
  *(undefined4 *)(pbVar18 + 0x3c) = uVar15;
  *(undefined4 *)(pbVar18 + 0x40) = uVar21;
  *(undefined4 *)(pbVar18 + 0x44) = uVar23;
  *(undefined4 *)(pbVar18 + 0x48) = uVar24;
  *(undefined4 *)(pbVar18 + 0x4c) = uVar25;
  *(undefined4 *)(pbVar18 + 0x50) = uVar27;
  uVar14 = *(undefined4 *)(iVar5 + 0x24);
  uVar15 = *(undefined4 *)(iVar5 + 0x28);
  uVar21 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(pbVar18 + 0x60) = *(undefined4 *)(iVar5 + 0x30);
  iVar5 = DAT_0013219c;
  *(undefined4 *)(pbVar18 + 0x54) = uVar14;
  *(undefined4 *)(pbVar18 + 0x58) = uVar15;
  *(undefined4 *)(pbVar18 + 0x5c) = uVar21;
  fVar30 = *(float *)(iVar5 + 0x30);
  fVar32 = *(float *)(iVar5 + 0x34);
  fVar33 = *(float *)(iVar5 + 0x38);
  fVar34 = *(float *)(iVar5 + 0x3c);
  func_003E183C(&local_110,(float *)&local_10c,*(float *)(iVar5 + 0x1c) * ALBW_AS_F32(uVar31) * fVar29);
  uVar14 = DAT_001321ac;
  fVar29 = DAT_001321a8 / (local_110 / ALBW_AS_F32(local_10c));
  *(float *)(pbVar18 + 4) = (fVar29 / fVar28) * fVar30;
  uVar15 = (undefined4)((ulonglong)uVar31 >> 0x20);
  *(undefined4 *)(pbVar18 + 8) = uVar15;
  *(float *)(pbVar18 + 0xc) = -fVar33;
  *(undefined4 *)(pbVar18 + 0x10) = uVar15;
  *(undefined4 *)(pbVar18 + 0x14) = uVar15;
  *(float *)(pbVar18 + 0x18) = fVar29 * fVar32;
  *(float *)(pbVar18 + 0x1c) = -fVar34;
  *(undefined4 *)(pbVar18 + 0x20) = uVar15;
  *(undefined4 *)(pbVar18 + 0x24) = uVar15;
  *(undefined4 *)(pbVar18 + 0x28) = uVar15;
  *(undefined4 *)(pbVar18 + 0x2c) = uVar14;
  *(undefined4 *)(pbVar18 + 0x30) = uVar15;
  iVar5 = (**(code **)(*(int *)*piVar26 + 0x18))((int *)*piVar26,0);
  iVar6 = (**(code **)(*(int *)*piVar26 + 0x18))((int *)*piVar26,1);
  func_0016AAAC(*piVar3,iVar6 + 4,iVar5 + 4);
  func_00503F50(*DAT_001321b0);
  return func_002709CC(*DAT_001321b4);
}

