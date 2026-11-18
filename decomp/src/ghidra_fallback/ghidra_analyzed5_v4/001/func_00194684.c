#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00194974;
extern int *DAT_00194978;
extern int DAT_0019497c;
extern int *DAT_00194980;
extern int *DAT_00194984;
extern int *DAT_00194988;
extern int *DAT_0019498c;
extern int *DAT_00194990;
extern int *DAT_00194994;
extern int *DAT_00194998;
extern int *DAT_0019499c;
extern int *DAT_001949a0;
extern int *DAT_001949a4;

// USA 00194684 <- EU 00194684 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_00194974 int *
// GLOBAL DAT_00194978 int *
// GLOBAL DAT_0019497c int
// GLOBAL DAT_00194980 int *
// GLOBAL DAT_00194984 int *
// GLOBAL DAT_00194988 int *
// GLOBAL DAT_0019498c int *
// GLOBAL DAT_00194990 int *
// GLOBAL DAT_00194994 int *
// GLOBAL DAT_00194998 int *
// GLOBAL DAT_0019499c int *
// GLOBAL DAT_001949a0 int *
// GLOBAL DAT_001949a4 int *

void func_00194684(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  
  iVar5 = func_00588BE4(param_1);
  piVar2 = DAT_00194978;
  puVar8 = (ushort *)(param_1 + 0x2e);
  if (iVar5 == *DAT_00194974) {
    *(undefined1 *)(param_1 + 0x4cb) = 0;
    *(char *)(param_1 + 0x4ca) = (char)*puVar8;
    if (9 < (*puVar8 & 0xff)) {
      *(undefined1 *)(param_1 + 0x4ca) = 0;
    }
    if (((*(char *)(param_1 + 0x4ca) == '\x01') && (bVar3 = func_00588BF0(param_1,0), bVar3)) &&
       (bVar3 = func_00588BF0(param_1,1), !bVar3)) {
      *param_2 = 2;
      *param_5 = 0xb;
      *param_3 = 0xffffffff;
      *param_4 = 0xffffffff;
      return;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x4ca);
    if (9 < uVar6) {
      uVar6 = 0;
    }
    uVar6 = func_0055696C(*piVar2,*(int *)(DAT_0019497c + uVar6 * 4));
    if (uVar6 == 0) {
      *param_3 = (uint)*(byte *)(param_1 + 0x4ca);
      *param_5 = 0xb;
    }
    else {
      *param_2 = 2;
      if (uVar6 < 2) {
        uVar7 = 0xb;
      }
      else {
        uVar7 = 0xffffffff;
      }
      *param_3 = 0xffffffff;
      *param_5 = uVar7;
    }
    *param_4 = 10;
    return;
  }
  if (iVar5 == *DAT_00194980) {
    *(undefined1 *)(param_1 + 0x4cb) = 2;
    *(undefined1 *)(param_1 + 0x4ca) = 1;
    bVar3 = func_00588BF0(param_1,0);
    if (!bVar3) goto LAB_001947bc;
  }
  else {
    if (iVar5 == *DAT_00194984) {
      *(undefined1 *)(param_1 + 0x4cc) = 0;
      cVar1 = (char)*puVar8;
      *(char *)(param_1 + 0x4ce) = cVar1;
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x4cb) = 4;
        *(undefined1 *)(param_1 + 0x4ca) = 0;
        return;
      }
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_1 + 0x4cb) = 1;
        *(undefined1 *)(param_1 + 0x4ca) = 1;
        return;
      }
      if (cVar1 != '\x02') {
        if (cVar1 == '\x03') {
          *(undefined1 *)(param_1 + 0x4cb) = 1;
          *(undefined1 *)(param_1 + 0x4ca) = 3;
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x4cb) = 1;
LAB_0019483c:
      *(undefined1 *)(param_1 + 0x4ca) = 2;
      return;
    }
    if (iVar5 == *DAT_00194988) {
      *(undefined1 *)(param_1 + 0x4cb) = 2;
      goto LAB_0019483c;
    }
    if (iVar5 != *DAT_0019498c) {
      if (iVar5 == *DAT_00194990) {
        *(undefined1 *)(param_1 + 0x4cb) = 2;
        *(undefined1 *)(param_1 + 0x4ca) = 4;
        return;
      }
      if (iVar5 == *DAT_00194994) {
        uVar4 = 5;
      }
      else {
        if (iVar5 != *DAT_00194998) {
          if (iVar5 == *DAT_0019499c) {
            *(undefined1 *)(param_1 + 0x4cc) = 2;
            *(undefined1 *)(param_1 + 0x4ce) = 0;
            *(undefined1 *)(param_1 + 0x4cb) = 3;
            *(undefined1 *)(param_1 + 0x4ca) = 0;
            uVar6 = func_0055696C(*piVar2,0xe);
            if (1 < uVar6) {
              *param_2 = 1;
              *param_3 = 0xffffffff;
            }
            return;
          }
          if (iVar5 != *DAT_001949a0) {
            if (iVar5 != *DAT_001949a4) {
              return;
            }
            *(undefined1 *)(param_1 + 0x4cb) = 2;
            *(undefined1 *)(param_1 + 0x4ca) = 9;
            return;
          }
          *(undefined1 *)(param_1 + 0x4cb) = 2;
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          *(char *)(param_1 + 0x4ce) = (char)*puVar8;
          if ((char)*puVar8 == '\0') {
            uVar4 = 7;
          }
          else {
            uVar4 = 8;
          }
          goto LAB_001948dc;
        }
        uVar4 = 6;
      }
      *(undefined1 *)(param_1 + 0x4cb) = 2;
LAB_001948dc:
      *(undefined1 *)(param_1 + 0x4ca) = uVar4;
      return;
    }
    *(undefined1 *)(param_1 + 0x4cb) = 2;
    *(undefined1 *)(param_1 + 0x4ca) = 3;
    bVar3 = func_00588BF0(param_1,0);
    if ((bVar3) && (iVar5 = func_0055696C(*piVar2,0x1d), iVar5 == 0)) goto LAB_001947bc;
  }
  *param_2 = 2;
  *param_3 = 0xffffffff;
LAB_001947bc:
  *param_4 = 1;
  return;
}

