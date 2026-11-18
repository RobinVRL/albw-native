#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_0036143C(int param_1);
extern int func_003615F0(int param_1);
extern int func_0036C1E4(int param_1);
extern int func_0036C2DC(int param_1);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_005568F4(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int DAT_0036c804;
extern int *DAT_0036c808;
extern int *DAT_0036c80c;
extern int DAT_0036c824;
extern int *DAT_0036c840;
extern undefined4 *DAT_0036c844;
extern int *DAT_0036c848;
extern undefined4 DAT_0036c84c;
extern float DAT_0036c850;
extern int *DAT_0036c854;
extern int *DAT_0036c858;
extern undefined *DAT_0036c85c;
extern char s_SE_EN_BOSS_DIE_FX_0036c810[];
extern char s_SE_EN_BOSS_DIE_FX_LAST_0036c828[];

// USA 0036C45C <- EU 0036C438 (Ghidra, non-matching)
// GLOBAL DAT_0036c804 int
// GLOBAL DAT_0036c808 int *
// GLOBAL DAT_0036c80c int *
// GLOBAL DAT_0036c824 int
// GLOBAL DAT_0036c840 int *
// GLOBAL DAT_0036c844 undefined4 *
// GLOBAL DAT_0036c848 int *
// GLOBAL DAT_0036c84c undefined4
// GLOBAL DAT_0036c850 float
// GLOBAL DAT_0036c854 int *
// GLOBAL DAT_0036c858 int *
// GLOBAL DAT_0036c85c undefined *
// GLOBAL s_SE_EN_BOSS_DIE_FX_0036c810 string
// GLOBAL s_SE_EN_BOSS_DIE_FX_LAST_0036c828 string

undefined4 func_0036C45C(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  uVar3 = *(uint *)(param_1 + 0xc4);
  bVar8 = uVar3 < *(uint *)(param_1 + 200);
  if (bVar8) {
    *(uint *)(param_1 + 0xc4) = uVar3 + 1;
  }
  iVar4 = DAT_0036c804;
  if (*(int *)(param_1 + 0xec) == 4) {
    cVar1 = *(char *)(param_1 + 0xf4);
    if (cVar1 == '\x01') {
      func_0036C2DC(param_1);
    }
    else if (cVar1 == '\x02') {
      piVar5 = *(int **)(param_1 + 0x28);
      if (piVar5 == (int *)0x0) {
        iVar7 = *(int *)(param_1 + 4);
        local_28 = *(int *)(iVar7 + 0x3d8);
        local_30 = *(int *)(iVar7 + 0x3d0);
        local_2c = *(char **)(iVar7 + 0x3d4);
      }
      else {
        local_30 = *piVar5;
        local_2c = (char *)piVar5[1];
        local_28 = piVar5[2];
      }
      func_001E8268(*(int *)(*DAT_0036c808 + 0x18),(int *)(*(int *)(param_1 + 0xc) + 0xac),&local_30
                    ,(undefined4 *)(DAT_0036c804 + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c));
    }
    else if (cVar1 == '\x03') {
      func_0036C1E4(param_1);
    }
    piVar5 = DAT_0036c80c;
    iVar7 = *DAT_0036c80c;
    if (iVar7 != 0) {
      func_0036143C(iVar7);
    }
    if ((*(char *)(param_1 + 0xfb) == '\0') &&
       ((iVar6 = *piVar5, iVar6 == 0 ||
        ((((uVar3 = func_005568F4(iVar6), uVar3 == 0 && (bVar2 = func_00556EAC(iVar6,0x3b), !bVar2))
          && (bVar2 = func_00556EAC(iVar6,0x3c), !bVar2)) &&
         ((bVar2 = func_00556EAC(iVar6,0x3d), !bVar2 && (bVar2 = func_00556EAC(iVar6,0x30), !bVar2))
         )))))) {
      if (iVar7 != 0) {
        func_003615F0(iVar7);
      }
      *(undefined1 *)(param_1 + 0xfb) = 1;
    }
    iVar6 = DAT_0036c824;
    if (*(uint *)(param_1 + 200) <= *(uint *)(param_1 + 0xc4)) {
      if (bVar8) {
        local_2c = s_SE_EN_BOSS_DIE_FX_0036c810;
        local_30 = DAT_0036c824;
        func_001509A4(*(int *)(param_1 + 4),&local_30,0);
        local_2c = s_SE_EN_BOSS_DIE_FX_LAST_0036c828;
        local_30 = iVar6;
        func_00150A84(*(int **)(param_1 + 4),&local_30,0);
        (**(code **)(*(int *)(*(int *)(param_1 + 4) + 800) + 0x30))((int *)(*(int *)(param_1 + 4) + 800));
        cVar1 = *(char *)(*DAT_0036c840 + 0x18);
        if (cVar1 != '\x14') {
          if (cVar1 == '\x18') {
            local_24 = DAT_0036c844[1];
            local_28 = iVar6;
            func_00259354(*DAT_0036c848,&local_28,0x2d);
          }
          else if (cVar1 != '\x19') {
            if (cVar1 == '\x1a') {
              local_24 = DAT_0036c844[2];
              local_28 = iVar6;
              func_00259354(*DAT_0036c848,&local_28,0x2d);
            }
            else {
              local_24 = *DAT_0036c844;
              local_28 = iVar6;
              func_00259354(*DAT_0036c848,&local_28,0x2d);
            }
          }
        }
      }
      uVar3 = *(uint *)(param_1 + 0xd0);
      bVar8 = *(uint *)(param_1 + 0xd4) == uVar3;
      if (uVar3 < *(uint *)(param_1 + 0xd4)) {
        *(uint *)(param_1 + 0xd0) = uVar3 + 1;
      }
      else {
        bVar8 = *(char *)(param_1 + 0xf6) == '\0';
      }
      if (bVar8) {
        uVar3 = (uint)*(ushort *)(iVar4 + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c + 0x2a);
        if (-1 < (int)*(uint *)(param_1 + 0x24)) {
          uVar3 = *(uint *)(param_1 + 0x24);
        }
        iVar4 = func_00165E28(*(int *)(param_1 + 0xc),(short)uVar3);
        if (iVar4 != 0) {
          if (uVar3 == 0) {
            in_s0 = DAT_0036c84c;
          }
          *(uint *)(param_1 + 0xe0) = uVar3;
          if (uVar3 == 0) {
            *(undefined4 *)(param_1 + 0xe4) = in_s0;
          }
          else {
            fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_1 + 0xe4) = DAT_0036c850 / fVar9;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
          if (*DAT_0036c854 != 0) {
            *(undefined1 *)(*DAT_0036c854 + 0xa1) = 0;
          }
          if (iVar7 != 0) {
            func_001DDCC4(iVar7,0);
          }
          *(undefined1 *)(param_1 + 0xfc) = 0;
          *(undefined4 *)(param_1 + 0xec) = 5;
        }
      }
      *(undefined1 *)(param_1 + 0xf6) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xec) == 5) {
    uVar3 = *(uint *)(param_1 + 0xdc);
    if (uVar3 < *(uint *)(param_1 + 0xe0)) {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0xdc) = uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0xe0) - uVar3;
    bVar8 = uVar3 == 1;
    if (bVar8) {
      uVar3 = (uint)*(byte *)(param_1 + 0xfc);
    }
    if (!bVar8 || uVar3 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    func_0052FD7C(*DAT_0036c858 + 0x3dbbc,DAT_0036c85c,(int)*(short *)(*(int *)(param_1 + 4) + 0x58)
                 );
    *(undefined1 *)(param_1 + 0xfc) = 1;
  }
  if (*(int *)(param_1 + 0xec) != 6) {
    return 0;
  }
  return 1;
}

