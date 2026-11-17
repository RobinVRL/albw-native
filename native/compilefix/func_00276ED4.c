/* compilefix: func_00276ED4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_00276ED4.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0027B078(int param_1);
extern int func_004AD1F4(int param_1,int param_2,int param_3);
extern int func_0051B20C(int param_1);
extern int DAT_002771c4;
extern int DAT_002771c8;
extern undefined4 DAT_002771cc;
extern int *DAT_002771d0;
extern int *DAT_002771d4;
extern int *DAT_002771d8;

// USA 00276ED4 <- EU 00276EFC (Ghidra, non-matching)
// GLOBAL DAT_002771c4 int
// GLOBAL DAT_002771c8 int
// GLOBAL DAT_002771cc undefined4
// GLOBAL DAT_002771d0 int *
// GLOBAL DAT_002771d4 int *
// GLOBAL DAT_002771d8 int *

undefined4 func_00276ED4(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined1 uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  iVar9 = DAT_002771c8;
  iVar14 = 0;
  iVar5 = param_1 + 0x183c + (int)*(short *)(param_1 + 0x15b40) * (int)(short)DAT_002771c4 * 4;
  iStack_2c = param_1;
  local_28 = param_2;
  if (0 < *(int *)(param_1 + 0x15b3c)) {
    do {
      if (*(short *)(param_1 + 0x15b40) != iVar14) {
        uVar10 = *(uint *)(iVar5 + 0x304);
        uVar6 = 0;
        if (0 < (int)uVar10) {
          do {
            if (uVar6 < uVar10) {
              iVar12 = *(int *)(*(int *)(iVar5 + 0x30c) + uVar6 * 4);
            }
            else {
              iVar12 = 0;
            }
            if (*(int *)(iVar12 + 0x3c0) == iVar14) goto LAB_002770ec;
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar10);
        }
        iVar12 = param_1 + 0x183c + iVar14 * DAT_002771c4 * 4;
        if (*(char *)(iVar12 + 0x3fe) != '\0') {
          iVar7 = (int)*(char *)(iVar12 + 0x2e4);
          if (local_28 == 0) {
            uVar15 = 4;
          }
          else {
            uVar15 = 3;
          }
          if (iVar7 != -1) {
            iVar11 = *(int *)(iVar12 + 0x300);
            pcVar13 = *(code **)(iVar11 + iVar7 * 8);
            if ((pcVar13 != (code *)0x0) ||
               ((uVar6 = *(uint *)(iVar11 + iVar7 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
              uVar6 = *(uint *)(iVar11 + iVar7 * 8 + 4);
              piVar8 = (int *)(*(int *)(iVar12 + 0x2f4) + ((int)uVar6 >> 1));
              if ((uVar6 & 1) != 0) {
                pcVar13 = *(code **)(pcVar13 + *piVar8);
              }
              (*pcVar13)(piVar8,uVar15);
            }
          }
          uVar2 = *(undefined1 *)(iVar12 + 0x2e4);
          *(undefined1 *)(iVar12 + 0x2e4) = uVar15;
          *(undefined4 *)(iVar12 + 0x2e0) = 0;
          *(undefined1 *)(iVar12 + 0x2e5) = uVar2;
          if (*(int *)(iVar12 + 0x2f0) != 0) {
            if ((uint)(int)*(char *)(iVar12 + 0x2e4) < *(uint *)(iVar12 + 0x2e8)) {
              piVar8 = (int *)(*(int *)(iVar12 + 0x2ec) + *(char *)(iVar12 + 0x2e4) * 0x24);
            }
            else {
              piVar8 = *(int **)(iVar12 + 0x2ec);
            }
            (**(code **)(*piVar8 + 8))(piVar8);
            local_34 = piVar8[1];
            local_38 = iVar9;
            func_0010BEB4(*(int *)(iVar12 + 0x2f0),&local_38);
          }
          iVar11 = (int)*(char *)(iVar12 + 0x2e4);
          iVar7 = *(int *)(iVar12 + 0x2f8);
          pcVar13 = *(code **)(iVar7 + iVar11 * 8);
          if ((pcVar13 != (code *)0x0) ||
             ((uVar6 = *(uint *)(iVar7 + iVar11 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
            uVar6 = *(uint *)(iVar7 + iVar11 * 8 + 4);
            if ((uVar6 & 1) != 0) {
              pcVar13 = *(code **)(pcVar13 + *(int *)(*(int *)(iVar12 + 0x2f4) + ((int)uVar6 >> 1)))
              ;
            }
            (*(int (*)(int *))pcVar13)(((int *)((int)(*(int *)(iVar12 + 0x2f4)) + ((int)uVar6 >> 1))));   /* this restored (pmf_this_fix) */
          }
        }
      }
LAB_002770ec:
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x15b3c));
  }
  if (-1 < *(short *)(param_1 + 0x15b40)) {
    sVar3 = *(short *)(param_1 + 0x15b42);
    iVar14 = *DAT_002771d0;
    sVar1 = (short)DAT_002771c4;
    iVar9 = param_1 + *(short *)(param_1 + 0x15b40) * DAT_002771c4 * 4;
    iVar5 = (int)*(char *)(iVar14 + 0x18);
    if (((iVar5 - 9U < 0xd) && (iVar5 != 0xb)) && (iVar5 != 0x11 && iVar5 != 0x14)) {
      func_004AD1F4(*DAT_002771d4,(int)*(short *)(iVar9 + 0x1884),0);
    }
    iVar9 = (int)*(short *)(iVar9 + 0x1882);
    if ((*(short *)(param_1 + (int)sVar3 * (int)sVar1 * 4 + 0x1882) != iVar9) &&
       (cVar4 = *(char *)(iVar14 + 0x18), (cVar4 == '\v' || cVar4 == '\x11') || cVar4 == '\x14')) {
      func_0027B078(iVar9);
    }
  }
  if (*DAT_002771d8 == 0) {
    return 0;
  }
  return func_0051B20C(*DAT_002771d8);
}

