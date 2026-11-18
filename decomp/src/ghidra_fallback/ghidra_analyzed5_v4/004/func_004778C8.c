#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00231340(short *param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BEE00(int param_1);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_00478CB8(int param_1,uint param_2,int param_3,int param_4);
extern int func_005228A4(int param_1,int param_2);
extern int func_0066BE5C(undefined4 *param_1,char param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_00477c04;
extern int *DAT_00477c08;
extern float DAT_00477c0c;

// USA 004778C8 <- EU 004778A0 (Ghidra, non-matching)
// GLOBAL DAT_00477c04 int *
// GLOBAL DAT_00477c08 int *
// GLOBAL DAT_00477c0c float

/* WARNING: Removing unreachable block (ram,0x00477bb4) */
/* WARNING: Removing unreachable block (ram,0x00477bb0) */
/* WARNING: Removing unreachable block (ram,0x00477bbc) */

uint func_004778C8(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint in_r3;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fparam_0;
  
  iVar11 = 0;
  iVar10 = *(int *)(param_1 + 0x10);
  iVar3 = func_005228A4(*DAT_00477c04,iVar10);
  fparam_0 = DAT_00477c0c;
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = *DAT_00477c08 + (uint)*(byte *)(iVar10 + 0x70) * 400;
  puVar8 = (uint *)(iVar3 + 0x20);
  cVar1 = *(char *)(param_1 + 0x308);
  uVar4 = (uint)cVar1;
  if ((int)uVar4 < 0) {
    if ((*puVar8 & 0xff0000) == 0) {
      return 0xffffffff;
    }
    uVar9 = 0x10;
  }
  else {
    in_r3 = (uint)*(byte *)(param_1 + 0x229);
    uVar5 = param_1 + 0x21c;
    if (in_r3 == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x22a);
    }
    uVar6 = *puVar8;
    uVar9 = uVar4;
    if (in_r3 == 0 && uVar5 == 0) {
      if ((uVar6 & 0xff0000) == 0) {
        return 0xffffffff;
      }
    }
    else {
      if ((uVar6 & 8) != 0) {
        uVar5 = *(uint *)(param_1 + 500);
        bVar12 = *(char *)(uVar5 + 0xf7) != '\0';
        if (bVar12) {
          uVar5 = (uint)*(byte *)(uVar5 + 0x3c);
        }
        if (bVar12 && uVar5 != 0xb) {
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          if (*(char *)(*piVar7 + 0xe1) == '\0') {
            return 0xffffffff;
          }
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          if (*(char *)(*piVar7 + 0x3c) == '\x02' || *(char *)(*piVar7 + 0x3c) == '\x03') {
            return 0xffffffff;
          }
          *(char *)(param_1 + 0x30a) = cVar1;
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          iVar3 = *piVar7;
          func_0066BE5C((undefined4 *)(iVar3 + 0x38),'\x02');
          func_00231340((short *)(iVar3 + 0xd4));
          piVar7 = (int *)(param_1 + 0x168);
          iVar3 = *(int *)(param_1 + 0x200);
          if ((uint)(int)*(char *)(param_1 + 0x30a) < 0x14) {
            piVar7 = piVar7 + *(char *)(param_1 + 0x30a);
          }
          iVar10 = *piVar7;
          cVar1 = *(char *)(iVar10 + 0xe0);
          func_0031B6A0(iVar3 + 0x44,(int)cVar1,0);
          *(char *)(iVar3 + 0xb4) = cVar1;
          iVar10 = *(int *)(**(int **)(iVar10 + 0x1c) + 0x10);
          *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar10 + 0x54);
          *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar10 + 100);
          func_0066BF2C((undefined4 *)(iVar3 + 0x20),'\x01');
          *(undefined1 *)(param_1 + 0x308) = 0x14;
          func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x03');
          func_002BEE00(*(int *)(param_1 + 0x1fc));
          if (*(char *)(param_1 + 0x294) == '\0') {
            uVar2 = 7;
          }
          else {
            uVar2 = 5;
          }
          goto LAB_00477a4c;
        }
      }
      if ((uVar6 & 0x10) != 0) {
        uVar5 = *(uint *)(param_1 + 0x1f8);
        bVar12 = *(char *)(uVar5 + 0xf7) != '\0';
        if (bVar12) {
          uVar5 = (uint)*(byte *)(uVar5 + 0x3c);
        }
        if (bVar12 && uVar5 != 0xb) {
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          if (*(char *)(*piVar7 + 0xe1) == '\0') {
            return 0xffffffff;
          }
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          if (*(char *)(*piVar7 + 0x3c) == '\x02' || *(char *)(*piVar7 + 0x3c) == '\x03') {
            return 0xffffffff;
          }
          piVar7 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar7 = piVar7 + uVar4;
          }
          *(char *)(param_1 + 0x30a) = cVar1;
          iVar3 = *piVar7;
          func_0066BE5C((undefined4 *)(iVar3 + 0x38),'\x02');
          func_00231340((short *)(iVar3 + 0xd4));
          piVar7 = (int *)(param_1 + 0x168);
          iVar3 = *(int *)(param_1 + 0x200);
          if ((uint)(int)*(char *)(param_1 + 0x30a) < 0x14) {
            piVar7 = piVar7 + *(char *)(param_1 + 0x30a);
          }
          iVar10 = *piVar7;
          cVar1 = *(char *)(iVar10 + 0xe0);
          func_0031B6A0(iVar3 + 0x44,(int)cVar1,0);
          *(char *)(iVar3 + 0xb4) = cVar1;
          iVar10 = *(int *)(**(int **)(iVar10 + 0x1c) + 0x10);
          *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar10 + 0x54);
          *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar10 + 100);
          func_0066BF2C((undefined4 *)(iVar3 + 0x20),'\x01');
          *(undefined1 *)(param_1 + 0x308) = 0x15;
          func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x03');
          func_002BEE00(*(int *)(param_1 + 0x1fc));
          *(undefined1 *)(param_1 + 0x295) = 0;
          cVar1 = *(char *)(param_1 + 0x229);
          bVar12 = cVar1 == '\0';
          if (bVar12) {
            cVar1 = *(char *)(param_1 + 0x22a);
          }
          if (!bVar12 || cVar1 != '\0') {
            func_00231448(param_1 + 0x278);
            func_00167E04(*(int *)(param_1 + 0x238),*(int *)(param_1 + 0x290),0);
          }
          if (*(char *)(param_1 + 0x294) == '\0') {
            uVar2 = 8;
          }
          else {
            uVar2 = 6;
          }
LAB_00477a4c:
          *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x238);
          *(undefined2 *)(param_1 + 0x286) = uVar2;
          *(undefined2 *)(param_1 + 0x284) = 0;
          func_002317C0((undefined2 *)(param_1 + 0x284),fparam_0);
          return 0xffffffff;
        }
      }
      uVar5 = *(uint *)(iVar3 + 0x28) | uVar6;
      if ((uVar5 & 0x880000) == 0) {
        if ((uVar5 & 0x440000) == 0) {
          if ((uVar5 & 0x110000) == 0) {
            if (((uVar5 & 0x220000) != 0) && (uVar9 = uVar4 + 1, (uVar9 & 3) == 0)) {
              uVar9 = uVar4 - 3;
            }
          }
          else {
            uVar9 = uVar4 - 1;
            if ((~uVar9 & 3) == 0) {
              uVar9 = uVar4 + 3;
            }
          }
        }
        else {
          uVar9 = uVar4 + 4;
          if (0x13 < (int)uVar9) {
            uVar9 = uVar4 - 0x10;
          }
        }
      }
      else {
        uVar9 = uVar4 - 4;
        if ((int)uVar9 < 0) {
          uVar9 = uVar4 + 0x10;
        }
      }
      if (uVar4 == uVar9) {
        return 0xffffffff;
      }
      in_r3 = uVar4;
      if ((uVar6 & 0xff0000) == 0) {
        iVar11 = 1;
      }
    }
    if ((int)uVar9 < 0) {
      return uVar9;
    }
  }
  func_00478CB8(param_1,uVar9,iVar11,in_r3);
  *(char *)(param_1 + 0x308) = (char)uVar9;
  *(char *)(param_1 + 0x309) = (char)uVar9;
  return uVar9;
}

