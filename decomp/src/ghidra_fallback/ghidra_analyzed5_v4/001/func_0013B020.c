#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_00420F0C(int *param_1,int *param_2);
extern int func_00421244(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_0013b3c0;
extern int DAT_0013b3c4;
extern int DAT_0013b3c8;
extern int *DAT_0013b3cc;
extern undefined1 DAT_0013b3d0;
extern undefined4 DAT_0013b3f8;
extern undefined4 DAT_0013b3fc;
extern undefined4 DAT_0013b400;
extern int *DAT_0013b404;
extern int DAT_0013b410;
extern int *DAT_0013b414;
extern char s_HyliaFont_bffnt_0013b3e8[];
extern char s_MessageFont_bffnt_0013b3d4[];
extern char s__s_Font_0013b408[];
extern char s_cf_0013b3d4[];
extern char s_cf_0013b3e8[];
extern char s_cf_0013b408[];

// USA 0013B020 <- EU 0013B020 (Ghidra, non-matching)
// GLOBAL DAT_0013b3c0 int *
// GLOBAL DAT_0013b3c4 int
// GLOBAL DAT_0013b3c8 int
// GLOBAL DAT_0013b3cc int *
// GLOBAL DAT_0013b3d0 undefined1
// GLOBAL DAT_0013b3f8 undefined4
// GLOBAL DAT_0013b3fc undefined4
// GLOBAL DAT_0013b400 undefined4
// GLOBAL DAT_0013b404 int *
// GLOBAL DAT_0013b410 int
// GLOBAL DAT_0013b414 int *
// GLOBAL s_cf_0013b408 string
// GLOBAL s_cf_0013b3e8 string
// GLOBAL s_cf_0013b3d4 string

void func_0013B020(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_d0 (*(uint * *)(albw_frame + 0x10))
  #define local_cc (*(int *)(albw_frame + 0x14))
  #define local_c8 ((undefined1 *)(albw_frame + 0x18))
  #define uStack_89 (*(undefined1 *)(albw_frame + 0x57))
  #define local_88 (*(int *)(albw_frame + 0x58))
  #define local_84 (*(uint *)(albw_frame + 0x5c))
  #define iStack_7c (*(int *)(albw_frame + 0x64))
  #define local_78 (*(int *)(albw_frame + 0x68))
  #define local_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(int * *)(albw_frame + 0x70))
  #define local_6c (*(undefined4 *)(albw_frame + 0x74))
  #define local_68 (*(undefined4 *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(int *)(albw_frame + 0x90))
  #define local_4c (*(uint * *)(albw_frame + 0x94))
  #define local_48 (*(undefined1 *)(albw_frame + 0x98))
  #define local_47 (*(undefined1 *)(albw_frame + 0x99))
  #define local_46 (*(undefined1 *)(albw_frame + 0x9a))
  #define local_45 (*(undefined1 *)(albw_frame + 0x9b))
  #define local_44 (*(undefined1 *)(albw_frame + 0x9c))
  #define local_38 (*(int *)(albw_frame + 0xa8))
  #define local_34 (*(undefined1 * *)(albw_frame + 0xac))
  #define iStack_30 (*(int *)(albw_frame + 0xb0))
  #define local_2c (*(int * *)(albw_frame + 0xb4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0xb8))
  iVar2 = DAT_0013b3c8;
  piVar6 = DAT_0013b3c0;
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (((*(uint *)(DAT_0013b3c4 + 8) & 1) == 0) && (iVar4 = func_00100174(DAT_0013b3cc), iVar4 != 0))
  {
    piVar6[1] = (int)&DAT_0013b3d0;
    *piVar6 = iVar2;
    piVar6[3] = (int)s_MessageFont_bffnt_0013b3d4;
    piVar6[2] = iVar2;
    piVar6[5] = (int)&DAT_0013b3d0;
    piVar6[4] = iVar2;
    piVar6[6] = iVar2;
    piVar6[7] = (int)s_HyliaFont_bffnt_0013b3e8;
  }
  local_d0 = (uint *)local_c8;
  local_cc = 0x40;
  uStack_89 = 0;
  uVar7 = 0;
  local_c8[0] = 0;
  local_d4 = DAT_0013b400;
  do {
    local_34 = &DAT_0013b3d0;
    piVar9 = DAT_0013b3c0 + uVar7 * 4;
    local_38 = iVar2;
    piVar6 = piVar9 + 2;
    (**(code **)(piVar9[2] + 8))(piVar6);
    (**(code **)(*piVar6 + 8))(piVar6);
    puVar11 = (undefined1 *)piVar9[3];
    (**(code **)(local_38 + 8))(&local_38);
    if (puVar11 == local_34) {
LAB_0013b164:
      bVar1 = true;
    }
    else {
      param_4 = piVar9[3];
      iVar4 = 0;
      do {
        if (*(char *)(param_4 + iVar4) != local_34[iVar4]) break;
        if (*(char *)(param_4 + iVar4) == '\0') goto LAB_0013b164;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40001);
      bVar1 = false;
    }
    if (!bVar1) {
      local_34 = &DAT_0013b3d0;
      local_38 = iVar2;
      (**(code **)(*piVar9 + 8))(piVar9);
      (**(code **)(*piVar9 + 8))(piVar9);
      puVar11 = (undefined1 *)piVar9[1];
      (**(code **)(local_38 + 8))(&local_38);
      puVar3 = local_d0;
      if (puVar11 == local_34) {
LAB_0013b234:
        bVar1 = true;
      }
      else {
        iVar4 = 0;
        do {
          param_4 = (int)*(char *)(piVar9[1] + iVar4);
          if (param_4 != (char)local_34[iVar4]) break;
          if (param_4 == 0) goto LAB_0013b234;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40001);
        bVar1 = false;
      }
      if (bVar1) {
        local_88 = iVar2;
        local_84 = *(uint *)(*DAT_0013b404 + 0x38);
        (**(code **)(iVar2 + 8))(&local_88);
        func_004994B0((int)&local_d4,s__s_Font_0013b408,local_84,param_4);
      }
      else {
        (**(code **)(*piVar9 + 8))(piVar9);
        uVar8 = 0;
        do {
          if (*(char *)(piVar9[1] + uVar8) == '\0') {
            if ((int)uVar8 < 0x40001) goto LAB_0013b280;
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0x40001);
        uVar8 = 0;
LAB_0013b280:
        if (local_cc <= (int)uVar8) {
          uVar8 = local_cc - 1;
        }
        (**(code **)(*piVar9 + 8))(piVar9);
        func_0010E3C4(puVar3,(uint *)piVar9[1],uVar8);
        *(undefined1 *)((int)puVar3 + uVar8) = 0;
      }
      piVar6 = local_2c;
      iVar4 = DAT_0013b410;
      local_74 = 0;
      local_6c = 0x20;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      iStack_7c = iVar2;
      local_48 = 7;
      local_4c = local_d0;
      local_50 = iVar2;
      local_47 = 0;
      param_4 = piVar9[3];
      local_44 = 1;
      local_70 = local_2c;
      local_45 = 1;
      local_68 = 0x80;
      local_46 = 0xe;
      local_78 = param_4;
      puVar5 = func_001E1EDC(*DAT_0013b414,&iStack_7c);
      piVar10 = (int *)puVar5[5];
      if (piVar10 != (int *)0x0) {
        puVar5 = (undefined4 *)func_0010CF28(0x50,piVar6,4);
        piVar6 = (int *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          piVar6 = (int *)func_00421244(puVar5);
          piVar6[0x12] = iVar2;
          piVar6[0x13] = iVar4;
        }
        puVar5 = (undefined4 *)(param_1 + 0x10);
        if (uVar7 < 2) {
          puVar5 = puVar5 + uVar7;
        }
        *puVar5 = piVar6;
        func_00420F0C(piVar6,piVar10);
        piVar6[0x13] = piVar9[3];
      }
    }
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      return;
    }
  } while( true );
}

