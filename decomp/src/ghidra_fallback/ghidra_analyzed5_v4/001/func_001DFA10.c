#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_004090A0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_0040C58C(int *param_1);
extern void func_0040C5C0(int *param_1,int *param_2,float fparam_0);
extern int func_0040D80C(int param_1);
extern int func_00410260(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_0048BD10(int *param_1,float fparam_0);
extern int func_0048BD2C(int *param_1,undefined4 param_2,float fparam_0);
extern int func_0056A120(int param_1);
extern float func_0056A138(int param_1);
extern int func_0057D86C(int *param_1);

// USA 001DFA10 <- EU 001DFA10 (Ghidra, non-matching)

uint func_001DFA10(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int *in_r3;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  uVar3 = (uint)*(byte *)(param_1 + 0x10c);
  if (uVar3 == 0) {
    if (**(int **)(param_1 + 0x24) != 0) {
      bVar1 = func_0056A120(**(int **)(param_1 + 0x24));
      if (bVar1 != 0) {
        return (uint)bVar1;
      }
    }
    if (*(char *)(param_1 + 0x108) == '\0') {
      uVar3 = 0;
      if ((*(char *)(param_1 + 0x109) != '\0') &&
         (uVar3 = (uint)*(byte *)(param_1 + 0x10a), uVar3 == 0)) {
        if (*(int *)(param_1 + 0xf0) < 1) {
          uVar3 = *(int *)(param_1 + 0xe8) - 1;
          *(uint *)(param_1 + 0xe8) = uVar3;
          if (0 < (int)uVar3) {
            return uVar3;
          }
        }
        else {
          uVar3 = *(int *)(param_1 + 0xf0) - 1;
          bVar1 = uVar3 != 0;
          *(uint *)(param_1 + 0xf0) = uVar3;
          if (!bVar1) {
            uVar3 = *(uint *)(param_1 + 0xe8);
          }
          if (bVar1 || uVar3 != 0) {
            return uVar3;
          }
        }
        *(undefined4 *)(param_1 + 0xfc) = 0;
        if (*(char *)(param_1 + 0x109) != '\0') {
          piVar4 = *(int **)(param_1 + 0x114);
          *(undefined1 *)(param_1 + 0x108) = 1;
          *(undefined1 *)(param_1 + 0x109) = 0;
          if (piVar4 != (int *)0x0) {
            if (*(char *)(param_1 + 0x110) == '\0') {
              in_r2 = *(undefined4 *)(param_1 + 0xe0);
              if (*(int *)(param_1 + 0x34) == 0) {
                in_r3 = (int *)0x0;
                cVar2 = func_004090A0(piVar4,*(int **)(param_1 + 0x24),in_r2,0);
                *(char *)(param_1 + 0x30) = cVar2;
              }
              else {
                in_r3 = (int *)(param_1 + 0x34);
                cVar2 = func_004090A0(piVar4,*(int **)(param_1 + 0x24),in_r2,in_r3);
                *(char *)(param_1 + 0x30) = cVar2;
              }
              if (cVar2 != '\0') {
                return 0;
              }
              fVar6 = *(float *)(param_1 + 0x100);
              if (*(char *)(param_1 + 0x110) != '\0') {
                fVar6 = fVar6 * fVar6;
              }
              *(float *)(param_1 + 0x104) = fVar6;
              bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
              if (bVar1) {
                fVar6 = *(float *)(param_1 + 0x104);
                func_0048BD2C(*(int **)(param_1 + 0x24),0,fVar6);
              }
              fVar7 = *(float *)(param_1 + 0x118);
              bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
              if (bVar1) {
                func_0048BD10(*(int **)(param_1 + 0x24),fVar7);
                fVar6 = fVar7;
              }
            }
            else {
              if (**(int **)(param_1 + 0x24) != 0) {
                func_0040D80C(**(int **)(param_1 + 0x24));
              }
              bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
              if (bVar1) {
                fVar6 = func_0056A138(**(int **)(param_1 + 0x24));
              }
              else {
                fVar6 = *(float *)(param_1 + 0x104);
              }
              fVar6 = fVar6 * *(float *)(param_1 + 0x100);
              *(float *)(param_1 + 0x100) = fVar6;
              func_0048BD2C(*(int **)(param_1 + 0x24),0,fVar6);
            }
            fVar7 = *(float *)(param_1 + 0x11c);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              if (*(int *)(param_1 + 0x7c) == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = **(int **)(param_1 + 0x84);
              }
              func_0010C7F8(iVar5,0,fVar7);
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x120);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              if (*(uint *)(param_1 + 0x7c) < 2) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 4);
              }
              func_0010C7F8(iVar5,0,fVar7);
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x124);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              if (*(uint *)(param_1 + 0x7c) < 3) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 8);
              }
              func_0010C7F8(iVar5,0,fVar7);
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x128);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if ((bVar1) && (fVar6 = fVar7, **(int **)(param_1 + 0x24) != 0)) {
              *(float *)(**(int **)(param_1 + 0x24) + 0xd8) = fVar7;
            }
            fVar7 = *(float *)(param_1 + 300);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              if (*(uint *)(param_1 + 0x7c) < 4) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 0xc);
              }
              func_0010C7F8(iVar5,0,fVar7);
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x130);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              if (*(uint *)(param_1 + 0x7c) < 5) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 0x10);
              }
              func_0010C7F8(iVar5,0,fVar7);
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x134);
            bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
            if (bVar1) {
              func_0040C5C0(aiStack_20,*(int **)(param_1 + 0x24),fVar6);
              if (aiStack_20[0] != 0) {
                func_00410260(aiStack_20[0],extraout_r1,in_r2,in_r3,fVar7);
              }
              func_0040C58C(aiStack_20);
            }
            *(undefined4 *)(param_1 + 0xe8) = 0;
            *(undefined4 *)(param_1 + 0xec) = 0;
            *(undefined4 *)(param_1 + 0xf0) = 0;
            return 1;
          }
        }
        return 0;
      }
    }
    else {
      if ((*(int *)(param_1 + 0xf4) != 0xffffff) &&
         (iVar5 = *(int *)(param_1 + 0xf4) + -1, *(int *)(param_1 + 0xf4) = iVar5, iVar5 < 1)) {
        iVar5 = *(int *)(param_1 + 0xf8);
        if (*(char *)(param_1 + 0x109) != '\0') {
          *(undefined1 *)(param_1 + 0x109) = 0;
        }
        *(undefined4 *)(param_1 + 0xf4) = 0xffffff;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        func_00110DDC(*(undefined4 **)(param_1 + 0x24),iVar5);
      }
      uVar3 = 0;
      do {
        if (uVar3 < *(uint *)(param_1 + 0x7c)) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x84) + uVar3 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 5);
      uVar3 = *(int *)(param_1 + 0xfc) + 1;
      *(uint *)(param_1 + 0xfc) = uVar3;
    }
  }
  return uVar3;
}

