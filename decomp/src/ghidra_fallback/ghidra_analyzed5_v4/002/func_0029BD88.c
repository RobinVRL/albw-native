#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00120B44(int param_1);
extern int func_004ACDF4(int param_1);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004F042C(void);
extern int *DAT_0029bf3c;
extern int DAT_0029bf40;
extern int DAT_0029bf44;
extern uint *DAT_0029bf48;
extern int *DAT_0029bf4c;

// USA 0029BD88 <- EU 0029BD64 (Ghidra, non-matching)
// GLOBAL DAT_0029bf3c int *
// GLOBAL DAT_0029bf40 int
// GLOBAL DAT_0029bf44 int
// GLOBAL DAT_0029bf48 uint *
// GLOBAL DAT_0029bf4c int *

void func_0029BD88(int *param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((uint *)(albw_frame + 0x8))
  iVar10 = *DAT_0029bf3c + 0x9cc + *(int *)(*param_1 + 0x13c) * DAT_0029bf40 * 4;
  func_00110490(local_a8,0x80);
  puVar2 = DAT_0029bf48;
  iVar1 = DAT_0029bf44;
  iVar11 = 0;
  do {
    pcVar9 = (char *)(iVar1 + iVar11 * 0x34);
    if ((*(int *)(pcVar9 + 4) == *(int *)(param_2 + 4)) && (*pcVar9 == *param_2)) {
      uVar7 = 0;
      do {
        uVar3 = func_00120B44((uint)*(ushort *)(pcVar9 + uVar7 * 2 + 0xc));
        uVar6 = (uint)uVar3;
        if ((*(uint *)(iVar10 + 0x40 + (uint)(uVar3 >> 5) * 4) & 1 << (uVar6 & 0x1f)) != 0) {
          uVar7 = 0;
          if (uVar6 != 0xffffffff) {
            do {
              uVar4 = uVar7 >> 5;
              uVar8 = uVar7 & 0x1f;
              uVar7 = uVar7 + 1;
              local_a8[uVar4] = local_a8[uVar4] | 1 << uVar8;
            } while ((int)uVar7 < (int)(uVar6 + 1));
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
      uVar7 = 0;
      do {
        uVar3 = func_00120B44((uint)*(ushort *)(pcVar9 + uVar7 * 2 + 0x16));
        uVar6 = (uint)(uVar3 >> 5);
        uVar4 = 1 << (uVar3 & 0x1f);
        if ((*(uint *)(iVar10 + 0x40 + uVar6 * 4) & uVar4) != 0) {
          local_a8[uVar6] = uVar4 | local_a8[uVar6];
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
      if (*DAT_0029bf4c != 0) {
        func_0010E3C4((uint *)(*DAT_0029bf4c + 0x48),local_a8,0x80);
      }
      uVar7 = *puVar2;
      if (uVar7 != 0) {
        func_004ACDF4(uVar7);
      }
      uVar7 = 0;
      do {
        uVar6 = *(uint *)(pcVar9 + uVar7 * 4 + 0x20);
        if (-1 < (int)uVar6) {
          uVar4 = *(uint *)(iVar10 + *pcVar9 * 0x40 + 0x560 + (uVar6 >> 5) * 4);
          bVar12 = (uVar4 & 1 << (uVar6 & 0x1f)) != 0;
          if (bVar12) {
            uVar4 = *puVar2;
          }
          if (bVar12 && uVar4 != 0) {
            func_004AD9E8(uVar4,uVar6,3,1,in_s0);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
    }
    iVar11 = iVar11 + 1;
    if (0x1a < iVar11) {
      puVar5 = (undefined4 *)func_004F042C();
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,iVar10 + 0xe00);
      }
      return;
    }
  } while( true );
}

