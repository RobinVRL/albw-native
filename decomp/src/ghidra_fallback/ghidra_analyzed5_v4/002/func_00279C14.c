#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_0019B064(int param_1,int param_2,undefined4 param_3);
extern int func_0027ACA4(int param_1,int *param_2);
extern int func_0027B58C(int param_1,int *param_2);
extern int func_0027B680(int param_1,int *param_2);
extern int func_0027BA50(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_00361580(int param_1,undefined1 param_2);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00504BC4(undefined4 *param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00527AC0(int param_1);
extern int func_00527B5C(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_005474F0(int *param_1);
extern int func_00547550(int *param_1);
extern int func_00547578(int *param_1);
extern int func_00547AC4(int *param_1);
extern int func_00547B0C(int *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00581AD8(int param_1,uint param_2);
extern int func_006890C8(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined DAT_00279f48;
extern undefined DAT_00279f4c;
extern int *DAT_00279f50;
extern float DAT_00279f54;
extern undefined DAT_00279f58;
extern int DAT_00279f5c;
extern undefined DAT_00279f60;
extern undefined4 *DAT_00279f64;
extern undefined DAT_00279f68;
extern int *DAT_00279f7c;
extern int DAT_0027a3b4;
extern int *DAT_0027a3b8;
extern int *DAT_0027a3bc;
extern int DAT_0027a3c0;
extern uint *DAT_0027a3c4;
extern int *DAT_0027a3c8;
extern int *DAT_0027a3cc;
extern char s_MapActor__s_bch_00279f6c[];
extern char s_cf_00279f6c[];

// USA 00279C14 <- EU 00279C3C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_00279f48 undefined
// GLOBAL DAT_00279f4c undefined
// GLOBAL DAT_00279f50 int *
// GLOBAL DAT_00279f54 float
// GLOBAL DAT_00279f58 undefined
// GLOBAL DAT_00279f5c int
// GLOBAL DAT_00279f60 undefined
// GLOBAL DAT_00279f64 undefined4 *
// GLOBAL DAT_00279f68 undefined
// GLOBAL DAT_00279f7c int *
// GLOBAL DAT_0027a3b4 int
// GLOBAL DAT_0027a3b8 int *
// GLOBAL DAT_0027a3bc int *
// GLOBAL DAT_0027a3c0 int
// GLOBAL DAT_0027a3c4 uint *
// GLOBAL DAT_0027a3c8 int *
// GLOBAL DAT_0027a3cc int *
// GLOBAL s_cf_00279f6c string

undefined4 func_00279C14(int *param_1,uint param_2,int param_3,int param_4,float *param_5)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  float fVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x170];
  #define local_168 (*(uint *)(albw_frame + 0x8))
  #define local_164 (*(float *)(albw_frame + 0xc))
  #define local_160 (*(int *)(albw_frame + 0x10))
  #define local_15c (*(uint *)(albw_frame + 0x14))
  #define local_158 (*(uint *)(albw_frame + 0x18))
  #define local_154 (*(int *)(albw_frame + 0x1c))
  #define local_150 (*(int *)(albw_frame + 0x20))
  #define local_14c (*(int *)(albw_frame + 0x24))
  #define local_148 (*(int *)(albw_frame + 0x28))
  #define local_144 (*(int *)(albw_frame + 0x2c))
  #define auStack_140 ((undefined4 *)(albw_frame + 0x30))
  #define local_f0 (*(int *)(albw_frame + 0x80))
  #define local_ec (*(undefined * *)(albw_frame + 0x84))
  #define local_bc (*(uint *)(albw_frame + 0xb4))
  #define local_b8 (*(int *)(albw_frame + 0xb8))
  #define local_b4 (*(int *)(albw_frame + 0xbc))
  #define auStack_b0 ((undefined4 *)(albw_frame + 0xc0))
  #define local_7a (*(undefined1 *)(albw_frame + 0xf6))
  #define local_70 (*(undefined4 *)(albw_frame + 0x100))
  #define local_60 (*(float *)(albw_frame + 0x110))
  #define local_5c (*(float *)(albw_frame + 0x114))
  #define local_58 (*(float *)(albw_frame + 0x118))
  #define local_54 (*(uint *)(albw_frame + 0x11c))
  #define local_50 ((uint *)(albw_frame + 0x120))
  #define local_48 (*(int *)(albw_frame + 0x128))
  #define local_44 (*(undefined * *)(albw_frame + 0x12c))
  #define piStack_34 (*(int * *)(albw_frame + 0x13c))
  #define uStack_30 (*(uint *)(albw_frame + 0x140))
  #define local_2c (*(int *)(albw_frame + 0x144))
  #define local_28 (*(int *)(albw_frame + 0x148))
  local_bc = 0;
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar6 = func_00560E74(param_1,&local_bc,(uint *)&DAT_00279f48);
  if (iVar6 == 0) {
    return 0;
  }
  piVar7 = (int *)func_0010BAB4(0x2c4);
  if (piVar7 != (int *)0x0) {
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[0x12] = 0;
    piVar7[0x13] = 0;
    piVar7[0xb0] = 0;
    func_002DFF7C(piVar7);
  }
  local_54 = 0xffffffff;
  iVar6 = func_00560E74(param_1,&local_54,(uint *)&DAT_00279f4c);
  piVar2 = DAT_00279f50;
  if (iVar6 == 0) {
    return 0;
  }
  *(short *)((int)piVar7 + 0x56) = (short)local_54;
  iVar6 = *piVar2;
  puVar13 = (uint *)(*(int *)(iVar6 + 0x38) + 0x15b44);
  uVar8 = *puVar13;
  if ((int)uVar8 <= (int)local_54) {
    uVar8 = local_54;
  }
  *puVar13 = uVar8;
  bVar3 = func_00581AD8(iVar6,local_54);
  if (bVar3) {
    return 0;
  }
  *(short *)(piVar7 + 0x15) = (short)local_bc;
  puVar13 = (uint *)(*(int *)(*piVar2 + 0x38) + 0x15b48);
  uVar12 = *puVar13;
  uVar8 = local_bc;
  if ((int)local_bc < (int)uVar12) {
    uVar8 = uVar12;
  }
  *puVar13 = uVar8;
  cVar4 = func_0027BA50(&local_158,&local_60,&local_164,param_1);
  if (cVar4 == '\0') {
    return 0;
  }
  func_00115C54(&local_164,&local_164,param_5);
  iVar6 = func_0019B04C(param_2);
  *piVar7 = iVar6;
  fVar15 = DAT_00279f54;
  piVar7[4] = local_158;
  piVar7[5] = local_154;
  piVar7[6] = local_150;
  piVar7[1] = (int)ALBW_AS_U32(local_164);
  piVar7[2] = local_160;
  piVar7[3] = local_15c;
  uVar16 = func_00114608((uint)ALBW_AS_U32((local_60 * fVar15)),local_15c);
  piVar7[7] = (int)uVar16;
  uVar16 = func_00114608((uint)ALBW_AS_U32((local_5c * fVar15)),(uint)((ulonglong)uVar16 >> 0x20));
  piVar7[8] = (int)uVar16;
  uVar16 = func_00114608((uint)ALBW_AS_U32((local_58 * fVar15)),(uint)((ulonglong)uVar16 >> 0x20));
  piVar7[9] = (int)uVar16;
  bVar3 = func_00547B0C(piVar7);
  if (!bVar3) {
    return 0;
  }
  local_50[0] = 0;
  iVar6 = func_00560E74(param_1,local_50,(uint *)&DAT_00279f58);
  if (iVar6 == 0) {
    return 0;
  }
  piVar7[0x12] = local_50[0];
  iVar6 = func_0027ACA4((int)piVar7,param_1);
  if (iVar6 == 0) {
    return 0;
  }
  bVar5 = func_00547578(piVar7);
  iVar6 = DAT_00279f5c;
  if (bVar5 != 0) {
    return 0;
  }
  if (piVar7[0x12] == 7) {
    local_14c = 0;
    iVar9 = func_00561114(param_1,&local_14c,(uint *)&DAT_00279f60);
    if (iVar9 == 0) {
      return 0;
    }
    puVar10 = (undefined4 *)func_0010BAB4(0xc);
    if (puVar10 == (undefined4 *)0x0) {
      piVar7[0xaf] = 0;
    }
    else {
      local_b4 = local_14c;
      local_b8 = iVar6;
      puVar11 = func_006890C8(puVar10,(int *)0x0,&local_b8);
      piVar7[0xaf] = (int)puVar11;
    }
    puVar11 = DAT_00279f64;
    *DAT_00279f64 = *(undefined4 *)(*piVar2 + 0x7728);
    local_44 = &DAT_00279f68;
    local_48 = iVar6;
    func_00504BC4(auStack_b0,(int)&local_48);
    piVar14 = (int *)piVar7[0xaf];
    (**(code **)(*piVar14 + 8))(piVar14);
    puVar10 = func_00689578(&local_148,s_MapActor__s_bch_00279f6c,piVar14[1],puVar10);
    local_70 = puVar10[1];
    local_7a = 7;
    func_00504D48(*DAT_00279f7c,(int)auStack_b0);
    *puVar11 = 0;
  }
  iVar9 = piVar7[0x12];
  if (iVar9 == 3) {
    local_14c = 0;
    iVar9 = func_00561114(param_1,&local_14c,(uint *)&DAT_00279f60);
    if (iVar9 != 0) {
      puVar10 = (undefined4 *)func_0010BAB4(0xc);
joined_r0x00279fb0:
      puVar11 = (undefined4 *)0x0;
      if (puVar10 != (undefined4 *)0x0) {
        local_148 = iVar6;
        local_144 = local_14c;
        puVar11 = func_006890C8(puVar10,(int *)0x0,&local_148);
      }
      piVar7[0xaf] = (int)puVar11;
    }
  }
  else if (iVar9 == 6 || iVar9 == 5) {
    local_14c = 0;
    iVar9 = func_00561114(param_1,&local_14c,(uint *)&DAT_00279f60);
    if (iVar9 != 0) {
      puVar10 = (undefined4 *)func_0010BAB4(0xc);
      goto joined_r0x00279fb0;
    }
  }
  else if (iVar9 == 10) {
    local_14c = 0;
    iVar9 = func_00561114(param_1,&local_14c,(uint *)&DAT_00279f60);
    if (iVar9 == 0) {
      return 0;
    }
    puVar11 = (undefined4 *)func_0010BAB4(0xc);
    puVar10 = (undefined4 *)0x0;
    if (puVar11 != (undefined4 *)0x0) {
      local_144 = local_14c;
      local_148 = iVar6;
      puVar10 = func_006890C8(puVar11,(int *)0x0,&local_148);
    }
    piVar7[0xaf] = (int)puVar10;
    local_ec = &DAT_00279f68;
    local_f0 = iVar6;
    return func_00504BC4(auStack_140,(int)&local_f0);
  }
  piVar14 = DAT_0027a3b8;
  iVar6 = local_2c - DAT_0027a3b4;
  if (local_2c == DAT_0027a3b4) {
LAB_0027a158:
    iVar6 = *DAT_0027a3b8;
    bVar5 = *(byte *)(iVar6 + 0x340) | 8;
  }
  else if (local_2c < DAT_0027a3b4) {
    if (local_2c == 0x1a) {
      *(byte *)(*DAT_0027a3b8 + 0x340) = *(byte *)(*DAT_0027a3b8 + 0x340) | 0x40;
      goto LAB_0027a1a4;
    }
    if (local_2c == 0x126) {
      *(undefined1 *)(*(int *)(*DAT_0027a3b8 + 300) + 0x11) = 1;
      goto LAB_0027a1a4;
    }
    if (local_2c != 299) {
      if (local_2c != 0x13c) goto LAB_0027a1a4;
      goto LAB_0027a158;
    }
    iVar6 = *DAT_0027a3b8;
    bVar5 = *(byte *)(iVar6 + 0x340) | 4;
  }
  else if (iVar6 == 0x22) {
    func_00361580(*DAT_0027a3bc,1);
    iVar6 = *piVar14;
    bVar5 = *(byte *)(*piVar14 + 0x340) | 0x30;
  }
  else {
    if (iVar6 != 0x5e) {
      if (iVar6 == 0xb5) {
        *(undefined1 *)(*(int *)(*DAT_0027a3b8 + 300) + 0x10) = 1;
      }
      else if (iVar6 == 0xcd) {
        *(undefined1 *)(*(int *)(*DAT_0027a3b8 + 300) + 0x12) = 1;
      }
      goto LAB_0027a1a4;
    }
    iVar6 = *DAT_0027a3b8;
    bVar5 = *(byte *)(iVar6 + 0x340) | 1;
  }
  *(byte *)(iVar6 + 0x340) = bVar5;
LAB_0027a1a4:
  if (local_28 == 0) {
    *(undefined2 *)(piVar7 + 0x14) = 0;
  }
  bVar3 = func_0027B58C((int)piVar7,param_1);
  if ((bVar3) && (iVar6 = func_0027B680((int)piVar7,param_1), iVar6 != 0)) {
    iVar6 = 0;
    local_168 = 0xffffffff;
    do {
      sVar1 = *(short *)((int)piVar7 + iVar6 * 6 + 0x5a);
      if (sVar1 < 1) break;
      local_168 = 0;
      do {
        if (*(short *)(*(int *)(*piVar2 + 0x38) + local_168 * DAT_0027a3c0 * 4 + 0x18ac) == sVar1)
        goto LAB_0027a238;
        local_168 = local_168 + 1;
      } while ((int)local_168 < 0x40);
      local_168 = 0xffffffff;
LAB_0027a238:
      if (-1 < (int)local_168) goto LAB_0027a278;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x60);
    iVar6 = func_00560E74(param_1,&local_168,DAT_0027a3c4);
    if ((iVar6 == 0) || ((int)local_168 < 0)) {
      func_00547AC4(piVar7);
    }
    else {
LAB_0027a278:
      *(short *)((int)piVar7 + 0x52) = (short)local_168;
      *(short *)(piVar7 + 0x14) = (short)local_168;
    }
    cVar4 = func_005474F0(piVar7);
    piVar14 = DAT_0027a3c8;
    if ((cVar4 == '\0') && (iVar6 = func_00547550(piVar7), iVar6 == 0)) {
      *(undefined2 *)(piVar7 + 0x14) = 0xffff;
      iVar6 = func_00527AC0(*piVar7);
      if (iVar6 == 0) {
        func_004C43E0(*piVar14,piVar7);
        iVar6 = func_00527B5C(*piVar7);
        if (iVar6 != 0) {
          *(undefined1 *)(*piVar2 + 0x7abe) = 1;
        }
        iVar6 = func_0052FBDC(*piVar14 + 0x3dbbc,-*DAT_0027a3cc,0);
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 0x2d7) = 1;
        }
      }
      else {
        func_004C4AF4(*piVar14,piVar7,0);
      }
    }
    else if ((short)piVar7[0x14] < 0) {
      func_004C43E0(*piVar14,piVar7);
    }
    else {
      iVar6 = *(int *)(*piVar2 + 0x38);
      if (*(int *)(iVar6 + 0x10) < *(int *)(iVar6 + 0x14)) {
        *(int **)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0x10) * 4) = piVar7;
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      }
      func_0019B064(*piVar7,0,0);
    }
  }
  return 0;
}

