#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00120B44(int param_1);
extern int func_0057EA10(int param_1,int *param_2,uint param_3);
extern int func_00582328(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_00584B94(int param_1,int param_2);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int *DAT_00282f80;
extern int DAT_00282f84;
extern int DAT_00282f88;
extern int *DAT_00282f8c;
extern int *DAT_00282f90;
extern undefined4 DAT_00282fa4;
extern undefined4 DAT_00282fa8;
extern int DAT_00282fac;
extern int DAT_00282fb0;
extern int DAT_00282fb4;
extern int *DAT_00282fb8;
extern int DAT_00282fbc;
extern int DAT_00282fc0;
extern int DAT_00282fc4;
extern char s_FortuneMessage_00282f94[];

// USA 00282C7C <- EU 00282CA4 (Ghidra, non-matching)
// GLOBAL DAT_00282f80 int *
// GLOBAL DAT_00282f84 int
// GLOBAL DAT_00282f88 int
// GLOBAL DAT_00282f8c int *
// GLOBAL DAT_00282f90 int *
// GLOBAL DAT_00282fa4 undefined4
// GLOBAL DAT_00282fa8 undefined4
// GLOBAL DAT_00282fac int
// GLOBAL DAT_00282fb0 int
// GLOBAL DAT_00282fb4 int
// GLOBAL DAT_00282fb8 int *
// GLOBAL DAT_00282fbc int
// GLOBAL DAT_00282fc0 int
// GLOBAL DAT_00282fc4 int
// GLOBAL s_FortuneMessage_00282f94 string

void func_00282C7C(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  _Alignas(8) unsigned char albw_frame[0x170];
  #define local_168 (*(int *)(albw_frame + 0x8))
  #define local_164 (*(undefined1 * *)(albw_frame + 0xc))
  #define local_160 (*(undefined4 *)(albw_frame + 0x10))
  #define local_15c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_5d (*(undefined1 *)(albw_frame + 0x113))
  #define local_5c (*(uint *)(albw_frame + 0x114))
  #define local_4c (*(uint *)(albw_frame + 0x124))
  #define local_48 (*(uint *)(albw_frame + 0x128))
  #define local_38 ((int *)(albw_frame + 0x138))
  iVar6 = DAT_00282f88;
  iVar10 = *DAT_00282f80;
  if (iVar10 != 0) {
    if (((*(uint *)(DAT_00282f84 + 4) & 1) == 0) &&
       (iVar5 = func_00100174(DAT_00282f8c), uVar2 = DAT_00282fa4, piVar1 = DAT_00282f90, iVar5 != 0
       )) {
      DAT_00282f90[1] = (int)s_FortuneMessage_00282f94;
      *piVar1 = iVar6;
      param_3 = uVar2;
    }
    iVar6 = func_00582328(iVar10,DAT_00282f90,param_3,param_4);
    if (iVar6 != 0) {
      local_164 = local_15c;
      local_160 = 0x100;
      uStack_5d = 0;
      local_15c[0] = 0;
      local_168 = DAT_00282fac;
      iVar10 = *(int *)(iVar6 + 0xc);
      *(undefined4 *)(param_1 + 0xa24) = 0xffffffff;
      uVar14 = iVar10 - 1;
      if (-1 < (int)uVar14) {
        puVar13 = (uint *)(param_1 + 0x9d8);
        uVar11 = uVar14;
        do {
          iVar10 = func_0057EA10(iVar6 + 4,&local_168,uVar11);
          if (iVar10 != 0) {
            local_38[0] = 0;
            iVar10 = func_006875AC(local_38,&local_168,10);
            piVar1 = DAT_00282fb8;
            if (iVar10 != 0) {
              iVar10 = (int)((ulonglong)((longlong)DAT_00282fb0 * (longlong)local_38[0]) >> 0x20);
              iVar10 = (iVar10 >> 6) - (iVar10 >> 0x1f);
              uVar8 = local_38[0] + iVar10 * -900;
              uVar12 = uVar8 - 100;
              if (6 < iVar10) {
                uVar12 = uVar8;
              }
              bVar3 = func_00584B94(*DAT_00282fb8,DAT_00282fb4);
              if ((((bVar3) && (bVar3 = func_00584B94(*piVar1,DAT_00282fbc), !bVar3)) ||
                  ((bVar3 = func_00584B94(*piVar1,DAT_00282fc0), bVar3 &&
                   (bVar3 = func_00584B94(*piVar1,DAT_00282fc4), !bVar3)))) && (-1 < (int)param_2))
              {
                puVar7 = puVar13;
                if (param_2 < 9) {
                  puVar7 = puVar13 + param_2 * 2;
                }
                uVar8 = *puVar7 & 0xffff;
                bVar3 = uVar12 == uVar8;
                if (bVar3) {
                  uVar8 = *(uint *)(param_1 + 0xa24);
                }
                if (bVar3 && uVar8 == 0xffffffff) {
                  *(uint *)(param_1 + 0xa24) = uVar11 + 1;
                }
              }
              iVar10 = *piVar1;
              if (param_2 != 0xffffffff) {
                puVar9 = puVar13;
                puVar7 = puVar13;
                if (param_2 < 9) {
                  puVar9 = puVar13 + param_2 * 2;
                  puVar7 = puVar13 + param_2 * 2;
                }
                local_5c = puVar7[1] & 0xffff;
                uVar4 = func_00120B44(*puVar9 & 0xffff);
                local_4c = (uint)uVar4;
                uVar4 = func_00120B44(local_5c);
                local_48 = (uint)uVar4;
                uVar4 = func_00120B44(uVar12 & 0xffff);
                uVar8 = (uint)uVar4;
                bVar15 = uVar8 <= local_4c;
                bVar3 = local_4c == uVar8;
                if (!bVar15 || bVar3) {
                  bVar15 = local_48 <= uVar8;
                  bVar3 = uVar8 == local_48;
                }
                if (bVar15 && !bVar3) goto LAB_00282f70;
              }
              if ((iVar10 != 0) && (bVar3 = func_00584B94(iVar10,uVar12 & 0xffff), bVar3)) {
                *(uint *)(param_1 + 0xa24) = uVar11 + 1;
                if (param_2 == 0xffffffff) {
                  if ((int)uVar14 < (int)(uVar11 + 1)) {
                    *(undefined4 *)(param_1 + 0xa24) = 0xffffffff;
                  }
                  return;
                }
                if (param_2 < 9) {
                  puVar13 = puVar13 + param_2 * 2;
                }
                bVar3 = func_00584B94(*DAT_00282fb8,puVar13[1] & 0xffff);
                if (!bVar3) {
                  return;
                }
                *(undefined4 *)(param_1 + 0xa24) = 0xffffffff;
                *(undefined1 *)(param_1 + 0xa28) = 1;
                return;
              }
            }
          }
LAB_00282f70:
          uVar11 = uVar11 - 1;
          if ((int)uVar11 < 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

