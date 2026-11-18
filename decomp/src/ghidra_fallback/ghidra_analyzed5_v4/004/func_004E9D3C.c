#include "ghidra_types.h"

extern int func_00296BD0(int param_1,int param_2);
extern int func_00296D28(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00297140(int param_1,int *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B083C(void);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00689024(undefined4 *param_1);
extern undefined *PTR_004e9f7c;
extern undefined *PTR_004e9f80;
extern undefined *PTR_004e9f84;
extern undefined *PTR_004e9f88;

// USA 004E9D3C <- EU 004E9D14 (Ghidra, non-matching)
// GLOBAL PTR_004e9f7c undefined *
// GLOBAL PTR_004e9f80 undefined *
// GLOBAL PTR_004e9f84 undefined *
// GLOBAL PTR_004e9f88 undefined *

undefined4 func_004E9D3C(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *in_r3;
  uint *puVar12;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define iStack_c0 (*(int *)(albw_frame + 0x0))
  #define iStack_bc (*(int *)(albw_frame + 0x4))
  #define puStack_68 (*(undefined * *)(albw_frame + 0x58))
  #define puStack_64 (*(undefined1 * *)(albw_frame + 0x5c))
  #define puStack_60 (*(undefined * *)(albw_frame + 0x60))
  #define puStack_5c (*(undefined1 * *)(albw_frame + 0x64))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x68))
  #define auStack_54 ((undefined1 *)(albw_frame + 0x6c))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0x7b))
  uVar11 = param_3;
  iVar5 = func_004B083C();
  if (iVar5 != 0) {
    if (0 < param_3) {
      func_00296BD0(*(int *)(param_1 + 0x4c),param_3);
    }
    func_00296D28(*(int *)(param_1 + 0x4c),param_2,uVar11,in_r3);
    (**(code **)(*param_2 + 8))(param_2);
    puVar12 = (uint *)param_2[1];
    puVar6 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar7 = func_0056D3E4((int)puVar6,puVar12);
    func_00689024(&iStack_c0);
    puVar3 = PTR_004e9f7c;
    puStack_5c = auStack_54;
    uStack_58 = 0x10;
    iVar5 = 0;
    uStack_45 = 0;
    auStack_54[0] = 0;
    puStack_60 = PTR_004e9f80;
    puVar6 = func_0057F260(*(int *)(*(int *)(*(int *)PTR_004e9f84 + 0x24) + 0x140));
    iVar8 = func_0056CAD4((int)puVar6,uVar7 + 1);
    func_004994B0((int)&iStack_c0,iVar8,uVar11,in_r3);
    func_004994B0((int)&puStack_60,(int)"Demo%d" /* EU 004E9F8C */,*(int *)(*(int *)PTR_004e9f88 + 0x1c) + 1,in_r3);
    (**(code **)(iStack_c0 + 8))(&iStack_c0);
    iVar8 = 0;
    do {
      if (*(char *)(iStack_bc + iVar8) == '\0') {
        if (iVar8 < 0x40001) goto LAB_004e9e40;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40001);
    iVar8 = 0;
LAB_004e9e40:
    (**(code **)(puStack_60 + 8))(&puStack_60);
    iVar9 = 0;
    do {
      if (puStack_5c[iVar9] == '\0') {
        if (iVar9 < 0x40001) {
          iVar5 = iVar9;
        }
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40001);
    iVar9 = 0;
    if (-1 < iVar8 - iVar5) {
      do {
        puStack_68 = puVar3;
        puStack_64 = (undefined1 *)(iStack_bc + iVar9);
        (**(code **)(puVar3 + 8))(&puStack_68);
        (**(code **)(puStack_68 + 8))(&puStack_68);
        puVar4 = puStack_64;
        (**(code **)(puStack_60 + 8))(&puStack_60);
        if (puVar4 != puStack_5c) {
          if (iVar5 < 0x40001) {
            iVar2 = iVar5;
            if (iVar5 < 1) goto LAB_004e9f38;
          }
          else {
            iVar2 = 0x40000;
          }
          iVar10 = 0;
          do {
            uVar11 = (uint)(char)puStack_64[iVar10];
            if (uVar11 == 0) {
              in_r12 = (uint)(byte)puStack_5c[iVar10];
            }
            if (uVar11 == 0 && in_r12 == 0) break;
            if (((uVar11 == 0) || (in_r12 = (uint)(char)puStack_5c[iVar10], in_r12 == 0)) ||
               (uVar11 != in_r12)) {
              bVar1 = false;
              goto LAB_004e9f44;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar2);
        }
LAB_004e9f38:
        bVar1 = true;
LAB_004e9f44:
        if (bVar1) {
          if (iVar9 == -1) {
            return 0;
          }
          return func_00297140(*(int *)(param_1 + 0x4c),&iStack_c0);
        }
        iVar9 = iVar9 + 1;
        if (iVar8 - iVar5 < iVar9) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

