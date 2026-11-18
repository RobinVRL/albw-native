#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00120B44(int param_1);
extern int *DAT_0029c560;
extern int DAT_0029c564;
extern int DAT_0029c568;
extern int *DAT_0029c56c;

// USA 0029C430 <- EU 0029C40C (Ghidra, non-matching)
// GLOBAL DAT_0029c560 int *
// GLOBAL DAT_0029c564 int
// GLOBAL DAT_0029c568 int
// GLOBAL DAT_0029c56c int *

undefined8 func_0029C430(int *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((uint *)(albw_frame + 0x8))
  uint uVar4;
  
  iVar10 = *DAT_0029c560 + 0x9cc + *(int *)(*param_1 + 0x13c) * DAT_0029c564 * 4;
  func_00110490(local_a8,0x80);
  piVar2 = DAT_0029c56c;
  iVar1 = DAT_0029c568;
  iVar11 = 0;
  do {
    pcVar9 = (char *)(iVar1 + iVar11 * 0x34);
    uVar12 = CONCAT44(*(int *)(pcVar9 + 4),*(int *)(param_2 + 4));
    if ((*(int *)(pcVar9 + 4) == *(int *)(param_2 + 4)) &&
       (uVar12 = CONCAT44((int)*param_2,(int)*pcVar9), (int)*pcVar9 == (int)*param_2)) {
      uVar7 = 0;
      do {
        uVar3 = func_00120B44((uint)*(ushort *)(pcVar9 + uVar7 * 2 + 0xc));
        uVar4 = (uint)uVar3;
        if ((*(uint *)(iVar10 + 0x40 + (uint)(uVar3 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0) {
          uVar7 = 0;
          if (uVar4 != 0xffffffff) {
            do {
              uVar6 = uVar7 >> 5;
              uVar8 = uVar7 & 0x1f;
              uVar7 = uVar7 + 1;
              local_a8[uVar6] = local_a8[uVar6] | 1 << uVar8;
            } while ((int)uVar7 < (int)(uVar4 + 1));
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
      uVar7 = 0;
      do {
        uVar3 = func_00120B44((uint)*(ushort *)(pcVar9 + uVar7 * 2 + 0x16));
        uVar4 = (uint)(uVar3 >> 5);
        uVar6 = 1 << (uVar3 & 0x1f);
        if ((*(uint *)(iVar10 + 0x40 + uVar4 * 4) & uVar6) != 0) {
          uVar6 = uVar6 | local_a8[uVar4];
          local_a8[uVar4] = uVar6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
      iVar5 = *piVar2;
      uVar12 = CONCAT44(uVar6,iVar5);
      if (iVar5 != 0) {
        uVar12 = func_0010E3C4((uint *)(iVar5 + 0x48),local_a8,0x80);
      }
    }
    iVar11 = iVar11 + 1;
    if (0x1a < iVar11) {
      return uVar12;
    }
  } while( true );
}

