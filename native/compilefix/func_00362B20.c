/* compilefix: func_00362B20, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_00362B20.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E1040(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_00362860(int param_1);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern uint DAT_00362e10;
extern uint DAT_00362e14;
extern undefined1 DAT_00362e18;
extern uint DAT_00362e1c;
extern int DAT_00362e20;
extern uint DAT_00362e24;
extern int DAT_00363278;
extern int DAT_0036327c;
extern int *DAT_00363288;
extern int *DAT_0036328c;
extern int DAT_00363290;
extern undefined4 DAT_00363294;
extern undefined4 DAT_00363298;
extern int *DAT_00363630;
extern undefined4 DAT_00363634;
extern char s_GetItem__0036326c[];
extern char s_World_00363280[];
extern char s_cf_0036326c[];

// USA 00362B20 <- EU 00362AFC (Ghidra, non-matching)
// GLOBAL DAT_00362e10 uint
// GLOBAL DAT_00362e14 uint
// GLOBAL DAT_00362e18 undefined1
// GLOBAL DAT_00362e1c uint
// GLOBAL DAT_00362e20 int
// GLOBAL DAT_00362e24 uint
// GLOBAL DAT_00363278 int
// GLOBAL DAT_0036327c int
// GLOBAL DAT_00363288 int *
// GLOBAL DAT_0036328c int *
// GLOBAL DAT_00363290 int
// GLOBAL DAT_00363294 undefined4
// GLOBAL DAT_00363298 undefined4
// GLOBAL DAT_00363630 int *
// GLOBAL DAT_00363634 undefined4
// GLOBAL s_cf_0036326c string
// GLOBAL s_World_00363280 string

void func_00362B20(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint in_fpscr;
  float in_s0;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x1c0];
  #define local_1bc (*(uint *)(albw_frame + 0x4))
  #define local_1b8 (*(uint *)(albw_frame + 0x8))
  #define local_1b4 (*(uint *)(albw_frame + 0xc))
  #define local_1b0 (*(uint *)(albw_frame + 0x10))
  #define local_1ac (*(uint *)(albw_frame + 0x14))
  #define local_1a8 (*(uint * *)(albw_frame + 0x18))
  #define local_1a4 (*(int *)(albw_frame + 0x1c))
  #define local_1a0 (*(float *)(albw_frame + 0x20))
  #define local_19c (*(undefined1 * *)(albw_frame + 0x24))
  #define local_198 (*(int *)(albw_frame + 0x28))
  #define local_194 (*(uint * *)(albw_frame + 0x2c))
  #define local_190 (*(uint *)(albw_frame + 0x30))
  #define local_18c ((uint *)(albw_frame + 0x34))
  #define local_184 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_183 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_15c (*(undefined4 *)(albw_frame + 0x64))
  #define local_158 (*(undefined1 *)(albw_frame + 0x68))
  #define uStack_10d (*(undefined1 *)(albw_frame + 0xb3))
  #define local_108 (*(uint *)(albw_frame + 0xb8))
  #define local_104 (*(uint * *)(albw_frame + 0xbc))
  #define local_100 (*(int *)(albw_frame + 0xc0))
  #define local_fc (*(uint *)(albw_frame + 0xc4))
  #define local_f8 (*(undefined1 * *)(albw_frame + 0xc8))
  #define uStack_f4 (*(undefined4 *)(albw_frame + 0xcc))
  #define local_f0 (*(undefined4 *)(albw_frame + 0xd0))
  #define local_ec (*(undefined4 *)(albw_frame + 0xd4))
  #define local_e8 (*(undefined4 *)(albw_frame + 0xd8))
  #define local_e4 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_e0 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_dc (*(uint *)(albw_frame + 0xe4))
  #define local_d8 (*(char * *)(albw_frame + 0xe8))
  #define local_d4 (*(undefined1 *)(albw_frame + 0xec))
  #define local_d3 (*(undefined1 *)(albw_frame + 0xed))
  #define local_d2 (*(undefined1 *)(albw_frame + 0xee))
  #define local_d1 (*(undefined1 *)(albw_frame + 0xef))
  #define local_d0 (*(undefined1 *)(albw_frame + 0xf0))
  #define local_cc (*(uint *)(albw_frame + 0xf4))
  #define local_c8 (*(uint * *)(albw_frame + 0xf8))
  #define local_c4 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x100))
  #define local_bc (*(undefined1 *)(albw_frame + 0x104))
  #define local_b8 (*(int *)(albw_frame + 0x108))
  #define local_b4 (*(uint * *)(albw_frame + 0x10c))
  #define local_b0 (*(int *)(albw_frame + 0x110))
  #define local_ac ((undefined1 *)(albw_frame + 0x114))
  #define uStack_6d (*(undefined1 *)(albw_frame + 0x153))
  #define local_68 (*(uint *)(albw_frame + 0x158))
  #define local_64 (*(char * *)(albw_frame + 0x15c))
  #define local_60 (*(uint *)(albw_frame + 0x160))
  #define local_5c (*(uint * *)(albw_frame + 0x164))
  #define local_58 (*(uint *)(albw_frame + 0x168))
  #define local_54 (*(uint * *)(albw_frame + 0x16c))
  #define local_50 (*(int *)(albw_frame + 0x170))
  #define local_4c (*(uint *)(albw_frame + 0x174))
  #define local_48 (*(undefined1 * *)(albw_frame + 0x178))
  #define local_40 (*(uint *)(albw_frame + 0x180))
  #define local_3c (*(uint * *)(albw_frame + 0x184))
  uVar10 = DAT_00362e10;
  local_68 = DAT_00362e10;
  local_64 = *(char **)(*(int *)(param_1 + 0x30) + 4);
  if (*local_64 != '\0') {
    (**(code **)(DAT_00362e10 + 8))(&local_68);   /* this restored (vtable_this_fix) */
    uVar9 = DAT_00362e1c;
    local_1a4 = 0;
    do {
      if (local_64[local_1a4] == '\0') {
        if (local_1a4 < 0x40001) goto LAB_00362b80;
        break;
      }
      local_1a4 = local_1a4 + 1;
    } while (local_1a4 < 0x40001);
    local_1a4 = 0;
LAB_00362b80:
    local_1a4 = local_1a4 + 1;
    local_1ac = DAT_00362e1c;
    local_1a0 = ALBW_AS_F32(uVar10);
    local_19c = &DAT_00362e18;
    local_b4 = (uint *)local_ac;
    local_b0 = 0x40;
    uStack_6d = 0;
    local_f8 = &DAT_00362e18;
    local_b8 = DAT_00362e20;
    local_ac[0] = 0;
    local_104 = &local_68;
    local_fc = uVar10;
    local_108 = DAT_00362e1c;
    local_100 = 0;
    local_1a8 = &local_68;
    if (local_1a4 != 0) {
      do {
        iVar11 = local_100;
        puVar1 = local_104;
        local_58 = uVar9;
        local_54 = local_104;
        local_50 = local_100;
        local_4c = uVar10;
        local_48 = local_f8;
        (**(code **)(*local_104 + 8))(local_104);
        iVar3 = 0;
        do {
          if (*(char *)(puVar1[1] + iVar3) == '\0') {
            if (iVar3 < 0x40001) goto LAB_00362c68;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x40001);
        iVar3 = 0;
LAB_00362c68:
        if (-1 < iVar11 && iVar11 <= iVar3) {
          for (; uVar12 = local_54[1], *(char *)(uVar12 + iVar11) != '\0'; iVar11 = iVar11 + 1) {
            (**(code **)(local_4c + 8))(&local_4c);
            iVar3 = 0;
            do {
              if (local_48[iVar3] == '\0') break;
              if (local_48[iVar3] == *(char *)(uVar12 + iVar11)) goto LAB_00362cdc;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x40001);
          }
LAB_00362cdc:
          local_50 = iVar11 + 1;
        }
        iVar11 = local_100;
        puVar1 = local_104;
        uVar12 = (local_50 - local_100) - 1;
        (**(code **)(*local_104 + 8))(local_104);
        puVar2 = local_b4;
        iVar3 = 0;
        do {
          if (*(char *)(puVar1[1] + iVar3) == '\0') {
            if (iVar3 < 0x40001) goto LAB_00362d34;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x40001);
        iVar3 = 0;
LAB_00362d34:
        uVar4 = DAT_00362e24;
        if (-1 < iVar11 && iVar11 <= iVar3) {
          uVar4 = puVar1[1];
        }
        local_60 = uVar10;
        if (-1 < iVar11 && iVar11 <= iVar3) {
          local_5c = (uint *)(uVar4 + iVar11);
        }
        else {
          local_5c = *(uint **)(uVar4 + 4);
        }
        if ((int)uVar12 < 0) {
          (**(code **)(uVar10 + 8))(&local_60);
          uVar12 = 0;
          do {
            if (*(char *)((int)local_5c + uVar12) == '\0') {
              if ((int)uVar12 < 0x40001) goto LAB_00362d9c;
              break;
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < 0x40001);
          uVar12 = 0;
        }
LAB_00362d9c:
        if (local_b0 <= (int)uVar12) {
          uVar12 = local_b0 - 1;
        }
        (**(code **)(local_60 + 8))(&local_60);
        func_0010E3C4(puVar2,local_5c,uVar12);
        iVar11 = local_100;
        puVar1 = local_104;
        *(undefined1 *)((int)puVar2 + uVar12) = 0;
        local_58 = uVar9;
        (**(code **)(*local_104 + 8))(local_104);
        iVar3 = 0;
        do {
          if (*(char *)(puVar1[1] + iVar3) == '\0') {
            if (iVar3 < 0x40001) goto LAB_00362e34;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x40001);
        iVar3 = 0;
LAB_00362e34:
        if (-1 < iVar11 && iVar11 <= iVar3) {
          for (; uVar12 = local_104[1], *(char *)(uVar12 + iVar11) != '\0'; iVar11 = iVar11 + 1) {
            (**(code **)(local_fc + 8))(&local_fc);
            iVar3 = 0;
            do {
              if (local_f8[iVar3] == '\0') break;
              if (local_f8[iVar3] == *(char *)(uVar12 + iVar11)) goto LAB_00362ea0;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x40001);
          }
LAB_00362ea0:
          local_100 = iVar11 + 1;
        }
      } while ((local_104 != local_1a8) || (local_100 != local_1a4));
    }
    local_108 = uVar9;
    local_3c = (uint *)s_GetItem__0036326c;
    local_40 = uVar10;
    local_190 = 0x80;
    uStack_10d = 0;
    local_198 = DAT_00363278;
    local_194 = local_18c;
    (**(code **)(uVar10 + 8))(&local_40);
    uVar9 = 0;
    do {
      if (*(char *)((int)local_3c + uVar9) == '\0') {
        if ((int)uVar9 < 0x40001) goto LAB_00362f3c;
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0x40001);
    uVar9 = 0;
LAB_00362f3c:
    if ((int)local_190 <= (int)uVar9) {
      uVar9 = local_190 - 1;
    }
    (**(code **)(local_40 + 8))(&local_40);
    func_0010E3C4(local_18c,local_3c,uVar9);
    *(undefined1 *)((int)local_18c + uVar9) = 0;
    local_198 = DAT_0036327c;
    func_00689928(&local_198,&local_b8,0xffffffff);
    uVar9 = DAT_00362e14;
    local_108 = uVar10;
    local_104 = (uint *)DAT_00362e14;
    local_100 = 0;
    local_fc = 0;
    local_f8 = (undefined1 *)0x20;
    uStack_f4 = 0;
    local_ec = 0;
    local_d8 = s_World_00363280;
    local_e8 = 0;
    local_e0 = 0;
    local_d4 = 7;
    local_cc = uVar10;
    local_f0 = 0;
    local_e4 = 0;
    local_dc = uVar10;
    local_d2 = 0;
    local_c8 = local_194;
    local_c4 = 0;
    local_c0 = 0;
    local_d1 = 1;
    local_d3 = 0xff;
    local_bc = 0;
    local_d0 = 1;
    local_c4 = func_001E1040(*DAT_00363288);
    puVar5 = func_00504D48(*DAT_0036328c,(int)&local_108);
    local_1ac = 0;
    if (puVar5[0x32] != 0) {
      local_1ac = *(undefined4 *)puVar5[0x34];
    }
    local_1bc = uVar10;
    local_1b8 = uVar9;
    local_1b4 = uVar10;
    if (puVar5[0x32] == 0) {
      local_1ac = 0;
    }
    local_1b0 = uVar9;
    local_1a8 = (uint *)0x0;
    local_184 = 1;
    uVar9 = (uint)ALBW_AS_U32(local_1a0) >> 8;
    local_198 = 0;
    local_18c[0] = 0;
    local_18c[1] = 0;
    local_190 = 0;
    local_183 = 0xc4;
    local_19c = (undefined1 *)0x0;
    local_194 = (uint *)0x0;
    local_1a0 = ALBW_AS_F32(CONCAT31((uint3)uVar9 & 0xffff00,1));
    local_1a4 = 1;
    piVar6 = func_002C2D00((int *)&local_1bc);
    *(int **)(param_1 + 0x14) = piVar6;
    uVar13 = CONCAT44(DAT_00363298,DAT_00363294);
    iVar11 = DAT_00363290;
    if (**(char **)(*(int *)(param_1 + 0x30) + 0x30) != '\0') {
      puVar7 = (undefined4 *)func_0010BAB4(0xa8);
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x30);
        piVar6 = (int *)(iVar3 + 0x2c);
        (**(code **)(*piVar6 + 8))(piVar6);
        local_1b4 = *(uint *)(iVar3 + 0x30);
        local_1b8 = uVar10;
        puVar7 = func_0016A2FC(puVar7,1,&local_1b8,1);
        *(undefined4 **)(param_1 + 0x18) = puVar7;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      piVar6 = (int *)(iVar3 + 0x2c);
      (**(code **)(*piVar6 + 8))(piVar6);
      local_1b4 = *(uint *)(iVar3 + 0x30);
      local_1b8 = uVar10;
      func_00169688(*(uint **)(param_1 + 0x18),0,(int *)&local_1b8,(int)puVar5);
      func_0016A02C(*(int *)(param_1 + 0x18),-1,(int *)0xffffffff,0);
      local_1a8 = (uint *)&local_1a4;
      local_19c = (undefined1 *)uVar13;
      in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      local_1ac = 3;
      local_15c = 10;
      local_158 = 0;
      local_1b0 = 1;
      local_1a4 = 0;
      local_190 = (uint)piVar6 | 0xff;
      local_1a0 = in_s0;
      local_198 = iVar11;
      local_194 = (uint *)local_19c;
      func_0016898C(*(int *)(param_1 + 0x18),&local_1b0);
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xd8) == -2) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x18),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) + 0x1c) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xd8) == -1) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x18),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) + 0x1c) = 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0xd8);
      if (-1 < iVar3) {
        in_s0 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        func_00168D60(*(int *)(param_1 + 0x18),in_s0,ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) + 0x1c) = 0;
      }
    }
    if (**(char **)(*(int *)(param_1 + 0x30) + 0x5c) != '\0') {
      puVar7 = (undefined4 *)func_0010BAB4(0xa8);
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x30);
        piVar6 = (int *)(iVar3 + 0x58);
        (**(code **)(*piVar6 + 8))(piVar6);
        local_1b4 = *(uint *)(iVar3 + 0x5c);
        local_1b8 = uVar10;
        puVar7 = func_0016A2FC(puVar7,1,&local_1b8,1);
        *(undefined4 **)(param_1 + 0x1c) = puVar7;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      piVar6 = (int *)(iVar3 + 0x58);
      (**(code **)(*piVar6 + 8))(piVar6);
      local_1b4 = *(uint *)(iVar3 + 0x5c);
      local_1b8 = uVar10;
      func_00169608(*(uint **)(param_1 + 0x1c),0,(int *)&local_1b8,(int)puVar5);
      func_0016A02C(*(int *)(param_1 + 0x1c),-1,(int *)0xffffffff,0);
      local_1a8 = (uint *)&local_1a4;
      local_19c = (undefined1 *)uVar13;
      in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      local_1ac = 3;
      local_15c = 10;
      local_158 = 0;
      local_1b0 = 1;
      local_1a4 = 0;
      local_190 = (uint)piVar6 | 0xff;
      local_1a0 = in_s0;
      local_198 = iVar11;
      local_194 = (uint *)local_19c;
      func_0016898C(*(int *)(param_1 + 0x1c),&local_1b0);
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xdc) == -2) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x1c),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x1c) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xdc) == -1) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x1c),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x1c) = 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0xdc);
      if (-1 < iVar3) {
        in_s0 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        func_00168D60(*(int *)(param_1 + 0x1c),in_s0,ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x1c) = 0;
      }
    }
    if (**(char **)(*(int *)(param_1 + 0x30) + 0x88) != '\0') {
      puVar7 = (undefined4 *)func_0010BAB4(0xa8);
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x30);
        piVar6 = (int *)(iVar3 + 0x84);
        (**(code **)(*piVar6 + 8))(piVar6);
        local_1b4 = *(uint *)(iVar3 + 0x88);
        local_1b8 = uVar10;
        puVar7 = func_0016A2FC(puVar7,1,&local_1b8,1);
        *(undefined4 **)(param_1 + 0x20) = puVar7;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      piVar6 = (int *)(iVar3 + 0x84);
      (**(code **)(*piVar6 + 8))(piVar6);
      local_1b4 = *(uint *)(iVar3 + 0x88);
      local_1b8 = uVar10;
      func_00169608(*(uint **)(param_1 + 0x20),0,(int *)&local_1b8,(int)puVar5);
      func_0016A02C(*(int *)(param_1 + 0x20),-1,(int *)0xffffffff,0);
      local_19c = (undefined1 *)uVar13;
      local_1a8 = (uint *)&local_1a4;
      local_1ac = 3;
      in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      local_15c = 10;
      local_158 = 0;
      local_1b0 = 1;
      local_1a4 = 0;
      local_190 = (uint)piVar6 | 0xff;
      local_1a0 = in_s0;
      local_198 = iVar11;
      local_194 = (uint *)local_19c;
      func_0016898C(*(int *)(param_1 + 0x20),&local_1b0);
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xe0) == -2) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x20),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 0x1c) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xe0) == -1) {
        in_s0 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_00168D60(*(int *)(param_1 + 0x20),in_s0,ALBW_AS_F32(uVar13));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 0x1c) = 0;
      }
      iVar11 = *(int *)(*(int *)(param_1 + 0x30) + 0xe0);
      if (-1 < iVar11) {
        in_s0 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        func_00168D60(*(int *)(param_1 + 0x20),in_s0,ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 0x1c) = 0;
      }
    }
    piVar6 = DAT_00363630;
    if (*(int *)(*DAT_00363630 + 0xf3c) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(int *)(*DAT_00363630 + 0xf3c) + 4);
    }
    func_004CE804(*(int *)(param_1 + 0x14),uVar10 & 0xffff,1,0,in_s0);
    pbVar8 = (byte *)(*(int *)(*piVar6 + 0x10) + (uVar10 & 0xffff) * 0x278);
    *pbVar8 = *pbVar8 | 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = DAT_00363634;
    }
    func_00362860(param_1);
    func_004CF478(*(int *)(param_1 + 0x14),0);
  }
  return;
}

