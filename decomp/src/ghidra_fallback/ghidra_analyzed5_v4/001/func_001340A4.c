#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584BC4(int param_1,uint param_2);
extern uint *DAT_00134444;
extern uint DAT_00134448;
extern undefined4 DAT_00134454;
extern undefined4 DAT_00134458;
extern uint *DAT_0013445c;
extern int *DAT_00134468;
extern char s_after_00134460[];
extern char s_before_0013444c[];

// USA 001340A4 <- EU 001340A4 (Ghidra, non-matching)
// GLOBAL DAT_00134444 uint *
// GLOBAL DAT_00134448 uint
// GLOBAL DAT_00134454 undefined4
// GLOBAL DAT_00134458 undefined4
// GLOBAL DAT_0013445c uint *
// GLOBAL DAT_00134468 int *
// GLOBAL s_after_00134460 string
// GLOBAL s_before_0013444c string

void func_001340A4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(uint *)(albw_frame + 0x0))
  #define local_3c (*(undefined * *)(albw_frame + 0x4))
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  uVar3 = DAT_00134448;
  puVar2 = DAT_00134444;
  uStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (((DAT_00134444[1] & 1) == 0) && (iVar7 = func_00100174((int *)(DAT_00134444 + 1)), iVar7 != 0)
     ) {
    puVar2[3] = (uint)s_before_0013444c;
    puVar2[2] = uVar3;
  }
  if (((*puVar2 & 1) == 0) &&
     (iVar7 = func_00100174((int *)DAT_00134444), puVar2 = DAT_0013445c, iVar7 != 0)) {
    DAT_0013445c[1] = (uint)s_after_00134460;
    *puVar2 = uVar3;
  }
  uVar14 = 0;
  iVar7 = *(int *)(local_2c + 0x5c);
  if (0 < iVar7) {
    do {
      local_3c = func_00584BC4(local_2c,uVar14);
      piVar4 = DAT_00134468;
      local_40 = uVar3;
      (**(code **)(uVar3 + 8))(&local_40);
      iVar11 = 0;
      do {
        if (local_3c[iVar11] == '\0') {
          if (iVar11 < 0x40001) goto LAB_001341ac;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x40001);
      iVar11 = 0;
LAB_001341ac:
      (**(code **)(*piVar4 + 8))(piVar4);
      iVar13 = 0;
      do {
        if (*(char *)(piVar4[1] + iVar13) == '\0') {
          if (iVar13 < 0x40001) goto LAB_001341ec;
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x40001);
      iVar13 = 0;
LAB_001341ec:
      iVar12 = 0;
      if (-1 < iVar11 - iVar13) {
        do {
          local_38 = uVar3;
          local_34 = local_3c + iVar12;
          (**(code **)(uVar3 + 8))(&local_38);
          (**(code **)(local_38 + 8))(&local_38);
          puVar5 = local_34;
          (**(code **)(*piVar4 + 8))(piVar4);
          puVar9 = (undefined *)piVar4[1];
          if (puVar5 != puVar9) {
            if (iVar13 < 0x40001) {
              iVar1 = iVar13;
              if (iVar13 < 1) goto LAB_001342a8;
            }
            else {
              iVar1 = 0x40000;
            }
            iVar8 = 0;
            do {
              uVar10 = (uint)(char)local_34[iVar8];
              if (uVar10 == 0) {
                in_r12 = (uint)(byte)puVar9[iVar8];
              }
              if (uVar10 == 0 && in_r12 == 0) break;
              if (((uVar10 == 0) || (in_r12 = (uint)(char)puVar9[iVar8], in_r12 == 0)) ||
                 (uVar10 != in_r12)) {
                bVar6 = false;
                goto LAB_001342b4;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar1);
          }
LAB_001342a8:
          bVar6 = true;
LAB_001342b4:
          if (bVar6) {
            if (iVar12 != -1) {
              uVar10 = local_28 ^ 1;
              goto LAB_001342d4;
            }
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 <= iVar11 - iVar13);
      }
      puVar2 = DAT_0013445c;
      (**(code **)(local_40 + 8))(&local_40);
      iVar11 = 0;
      do {
        if (local_3c[iVar11] == '\0') {
          if (iVar11 < 0x40001) goto LAB_00134340;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x40001);
      iVar11 = 0;
LAB_00134340:
      (**(code **)(*puVar2 + 8))(puVar2);
      iVar13 = 0;
      do {
        if (*(char *)(puVar2[1] + iVar13) == '\0') {
          if (iVar13 < 0x40001) goto LAB_00134380;
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x40001);
      iVar13 = 0;
LAB_00134380:
      iVar12 = 0;
      if (-1 < iVar11 - iVar13) {
        do {
          local_38 = uVar3;
          local_34 = local_3c + iVar12;
          (**(code **)(uVar3 + 8))(&local_38);
          (**(code **)(local_38 + 8))(&local_38);
          puVar5 = local_34;
          (**(code **)(*puVar2 + 8))(puVar2);
          puVar9 = (undefined *)puVar2[1];
          if (puVar5 != puVar9) {
            if (iVar13 < 0x40001) {
              iVar1 = iVar13;
              if (iVar13 < 1) goto LAB_0013443c;
            }
            else {
              iVar1 = 0x40000;
            }
            iVar8 = 0;
            do {
              uVar10 = (uint)(char)local_34[iVar8];
              if (uVar10 == 0) {
                in_r12 = (uint)(byte)puVar9[iVar8];
              }
              if (uVar10 == 0 && in_r12 == 0) break;
              if (((uVar10 == 0) || (in_r12 = (uint)(char)puVar9[iVar8], in_r12 == 0)) ||
                 (uVar10 != in_r12)) {
                bVar6 = false;
                goto LAB_00134470;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar1);
          }
LAB_0013443c:
          bVar6 = true;
LAB_00134470:
          if (bVar6) {
            uVar10 = local_28;
            if (iVar12 != -1) {
LAB_001342d4:
              func_004CEA18(local_2c,uVar10,uVar14);
            }
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 <= iVar11 - iVar13);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar7);
  }
  return;
}

