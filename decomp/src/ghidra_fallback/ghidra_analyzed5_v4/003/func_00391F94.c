// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110AEC(int param_1);
extern int func_0039222C(int param_1,int *param_2,uint param_3);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_005817C0(int param_1,int param_2,uint *param_3);
extern int func_00581C5C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_003921f0;
extern int *DAT_003921f4;
extern undefined4 *DAT_003921f8;
extern undefined4 DAT_003921fc;
extern int DAT_00392200;
extern int *DAT_00392204;

// USA 00391F94 <- EU 00391F70 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_003921f0 int *
// GLOBAL DAT_003921f4 int *
// GLOBAL DAT_003921f8 undefined4 *
// GLOBAL DAT_003921fc undefined4
// GLOBAL DAT_00392200 int
// GLOBAL DAT_00392204 int *

void func_00391F94(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  int *piStack_30;
  
  if (*(char *)(param_1 + 0x14c) == '\0') {
    *(undefined1 *)(param_1 + 0x14c) = 1;
    piVar6 = (int *)func_0052FBDC(*DAT_003921f0 + 0x3dbbc,(int)*(short *)((int)param_1 + 0x5e),0);
    piVar8 = (int *)*DAT_003921f4;
    if (((uint)*DAT_003921f4 & 1) == 0) {
      iVar7 = func_00100174(DAT_003921f4);
      piVar8 = (int *)0x0;
      if (iVar7 != 0) {
        *DAT_003921f8 = DAT_003921fc;
        piVar8 = DAT_003921f4;
      }
    }
    if ((piVar6 == (int *)0x0) ||
       (piVar8 = (int *)(**(code **)*piVar6)(piVar6,DAT_003921f8), piVar8 == (int *)0x0)) {
      piVar6 = (int *)0x0;
    }
    iVar7 = DAT_00392200;
    piStack_30 = param_1;
    if (piVar6 != (int *)0x0) {
      piVar8 = (int *)piVar6[0xb3];
      piStack_30 = piVar6;
    }
    bVar3 = false;
    uVar9 = 0;
    if (piVar6 != (int *)0x0) {
      param_1[0x10e] = piVar8;
    }
    do {
      if (uVar9 < 2) {
        if (param_1[0xd2] != 0) {
          func_005817C0(param_1[0xd2],(int)(param_1 + uVar9 * 5 + 0x10f),
                        *(uint **)(iVar7 + uVar9 * 4));
        }
        func_00110AEC((int)(param_1 + uVar9 * 5 + 0x10f));
        if (param_1[uVar9 + 0x119] != param_1[uVar9 * 5 + 0x112]) {
          param_1[uVar9 + 0x119] = param_1[uVar9 * 5 + 0x112];
        }
        if (param_1[uVar9 + 0x119] == -1) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
      else {
        bVar4 = 0;
      }
      piVar8 = DAT_00392204;
      uVar9 = uVar9 + 1;
      bVar3 = (bool)(bVar3 | bVar4);
    } while ((int)uVar9 < 2);
    bVar2 = false;
    if (*(char *)((int)param_1 + 0x531) == '\0') {
      *(undefined1 *)((int)param_1 + 0x535) = 0;
      iVar7 = func_00581C5C(*piVar8);
      if (iVar7 != 0) {
        *(bool *)((int)param_1 + 0x535) = (int)*(short *)(param_1 + 0x15) == *(int *)(iVar7 + 0x3c0)
        ;
      }
      cVar5 = *(char *)(param_1 + 0x14d);
      uVar9 = 0;
      bVar10 = cVar5 == '\0';
      if (bVar10) {
        cVar5 = *(char *)((int)param_1 + 0x535);
      }
      if (!bVar10 || cVar5 != '\0') {
        cVar5 = '\x01';
      }
LAB_00392108:
      do {
        if (*(char *)((int)param_1 + uVar9 + 0x52c) != '\0') {
          bVar10 = func_00588BF0((int)param_1,uVar9);
          if (bVar10) {
            *(undefined1 *)((int)param_1 + uVar9 + 0x52c) = 0;
            *(undefined1 *)((int)param_1 + uVar9 + 0x52e) = 1;
            if ((*(char *)((int)param_1 + 0x533) != '\0') && (param_1[uVar9 + 0x119] != -1)) {
              if (uVar9 == 0) {
                bVar10 = *(char *)((int)param_1 + 0x532) == '\0';
                cVar1 = '\0';
                if (!bVar10) {
                  cVar1 = *(char *)((int)param_1 + 0x52d);
                }
                if (((bVar10 || cVar1 == '\0') || (bVar10 = func_00588BF0((int)param_1,1), !bVar10))
                   && (cVar5 != '\0')) {
                  func_0039222C((int)param_1,piStack_30,0);
                }
                uVar9 = 1;
                goto LAB_00392108;
              }
              if (cVar5 != '\0') {
                func_0039222C((int)param_1,piStack_30,uVar9);
              }
            }
          }
          else {
            bVar2 = true;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 2);
      if (!bVar2) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      }
    }
    if (!bVar3) {
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
  }
  return;
}

