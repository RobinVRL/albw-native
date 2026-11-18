#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001696F8(int param_1,uint *param_2);
extern int func_0016CF38(int *param_1,int *param_2,int *param_3);
extern int func_0016D9C0(undefined4 *param_1);
extern float func_002707A4(int param_1,int param_2);
extern int func_0058FA5C();
extern uint DAT_002706f4;
extern undefined4 *DAT_002706f8;
extern undefined4 DAT_002706fc;
extern float DAT_00270700;
extern undefined4 DAT_00270704;

// USA 0027033C <- EU 00270364 (Ghidra, non-matching)
// GLOBAL DAT_002706f4 uint
// GLOBAL DAT_002706f8 undefined4 *
// GLOBAL DAT_002706fc undefined4
// GLOBAL DAT_00270700 float
// GLOBAL DAT_00270704 undefined4

undefined4 func_0027033C(uint param_1,int *param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(uint *)(albw_frame + 0x0))
  #define local_8c (*(int *)(albw_frame + 0x4))
  #define puStack_88 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined1 *)(albw_frame + 0x58))
  #define uStack_34 (*(uint *)(albw_frame + 0x5c))
  #define local_30 (*(int * *)(albw_frame + 0x60))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x64))
  #define local_28 (*(int *)(albw_frame + 0x68))
  uVar9 = DAT_002706f4;
  uVar11 = 0;
  uVar10 = 0;
  uStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  do {
    piVar5 = local_30;
    piVar3 = (int *)(param_1 + 0x14);
    if (uVar10 < 2) {
      piVar3 = piVar3 + uVar10;
    }
    if (*piVar3 != 0) {
      piVar3 = (int *)(param_1 + 0x14);
      if (uVar10 < 2) {
        piVar3 = piVar3 + uVar10;
      }
      uVar11 = uVar11 + 1;
      iVar12 = *(int *)(*piVar3 + 4);
      if (iVar12 == 0) {
        local_8c = 0;
      }
      else {
        (**(code **)(*(int *)(iVar12 + 0x24) + 8))((int *)(iVar12 + 0x24));
        local_8c = *(int *)(iVar12 + 0x28);
      }
      local_90 = uVar9;
      (**(code **)(*piVar5 + 8))(piVar5);
      (**(code **)(*piVar5 + 8))(piVar5);
      iVar12 = piVar5[1];
      (**(code **)(local_90 + 8))(&local_90);
      if (iVar12 == local_8c) {
LAB_00270478:
        bVar1 = true;
      }
      else {
        iVar12 = 0;
        do {
          if (*(char *)(piVar5[1] + iVar12) != *(char *)(local_8c + iVar12)) break;
          if (*(char *)(piVar5[1] + iVar12) == '\0') goto LAB_00270478;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x40001);
        bVar1 = false;
      }
      if (bVar1) {
        puVar4 = (undefined4 *)(param_1 + 0x14);
        if (uVar10 < 2) {
          puVar4 = puVar4 + uVar10;
        }
        puVar4 = (undefined4 *)*puVar4;
        if (puVar4 != (undefined4 *)0x0) goto LAB_00270590;
        goto LAB_0027048c;
      }
    }
    uVar10 = uVar10 + 1;
    if (1 < (int)uVar10) {
LAB_0027048c:
      if (uVar11 == 2) {
        uVar9 = 1;
        do {
          piVar5 = (int *)(param_1 + 0x14);
          if (uVar9 < 2) {
            piVar5 = piVar5 + uVar9;
          }
          if (*(char *)(*piVar5 + 0x35) == '\0' || uVar9 == 0) {
            piVar5 = (int *)(param_1 + 0x14);
            if (uVar9 < 2) {
              piVar5 = piVar5 + uVar9;
            }
            iVar12 = *piVar5;
            (**(code **)(**(int **)(iVar12 + 0x24) + 0x10))(*(int **)(iVar12 + 0x24));
            piVar5 = (int *)(param_1 + 0x14);
            if (uVar9 < 2) {
              piVar5 = piVar5 + uVar9;
            }
            *(undefined4 *)(iVar12 + 0x24) = 0;
            func_0058FA5C(*piVar5);
            puVar4 = (undefined4 *)(param_1 + 0x14);
            if (uVar9 < 2) {
              puVar4 = puVar4 + uVar9;
            }
            *puVar4 = 0;
            uVar11 = uVar9;
          }
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      puVar2 = DAT_002706f8;
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar12 = 1;
      }
      else {
        iVar12 = func_0010983C(*DAT_002706f8,*(int *)(param_1 + 0x58));
      }
      puVar4 = (undefined4 *)func_0010BAB4(0x38);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = func_0016D9C0(puVar4);
      }
      puVar6 = (undefined4 *)(param_1 + 0x14);
      if (uVar11 < 2) {
        puVar6 = puVar6 + uVar11;
      }
      *puVar6 = puVar4;
      puVar6 = (undefined4 *)(param_1 + 0x14);
      if (uVar11 < 2) {
        puVar6 = puVar6 + uVar11;
      }
      func_0016CF38((int *)*puVar6,local_30,*(int **)(param_1 + 0x58));
      if (iVar12 != 1) {
        func_0010983C(*puVar2,iVar12);
      }
LAB_00270590:
      iVar12 = local_28;
      if (local_28 < 1) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          iVar12 = 1;
        }
        else {
          iVar12 = 0x1e;
        }
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar4;
      if (*(int *)(param_1 + 0x20) != 0) {
        *(undefined4 **)(param_1 + 0x20) = puVar4;
      }
      iVar7 = *(int *)(param_1 + 0x10);
      if (((*(char *)(iVar7 + 0x35) == '\0') ||
          ((*(uint *)(iVar7 + 0x18) < *(uint *)(iVar7 + 0x1c) && (*(char *)(iVar7 + 0x13) == '\0')))
          ) && (*(int *)(param_1 + 0x20) == 0)) {
        func_002707A4(param_1,iVar12);
        local_7c = DAT_00270700;
        local_80 = DAT_002706fc;
        if (param_3 == (undefined4 *)0x0) {
          puVar4[7] = iVar12;
          puVar4[4] = puVar4[5];
        }
        else {
          uVar8 = *param_3;
          puVar4[5] = uVar8;
          puVar4[7] = iVar12;
          puVar4[4] = uVar8;
        }
        if (iVar12 == 0) {
          puVar4[8] = local_80;
        }
        else {
          fVar13 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
          puVar4[8] = ALBW_AS_U32(local_7c / fVar13);
        }
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 0xd) = 1;
        iVar7 = puVar4[3];
        iVar12 = 0;
        if (iVar7 != 0) {
          iVar12 = *(int *)(iVar7 + 4);
        }
        if ((iVar7 != 0 && iVar12 != 0) && -1 < iVar12) {
          puStack_88 = &local_84;
          local_8c = 3;
          local_3c = 10;
          local_38 = 0;
          local_90 = 1;
          local_84 = 0;
          local_78 = DAT_00270704;
          local_70 = param_1 | 0xff;
          local_74 = local_7c;
          return func_001696F8(puVar4[3],&local_90);
        }
        return 0;
      }
      if (param_3 != (undefined4 *)0x0) {
        puVar4[5] = *param_3;
        return 0;
      }
      return 0;
    }
  } while( true );
}

