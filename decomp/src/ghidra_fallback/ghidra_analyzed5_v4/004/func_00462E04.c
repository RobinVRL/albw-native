#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00463E98(int param_1,int *param_2,undefined4 param_3,undefined1 *param_4);
extern int func_005228A4(int param_1,int param_2);
extern int func_0058D768(int param_1);
extern float DAT_00463050;
extern int *DAT_00463054;
extern int *DAT_00463058;
extern int *DAT_0046305c;
extern int DAT_00463060;

// USA 00462E04 <- EU 00462DDC (Ghidra, non-matching)
// GLOBAL DAT_00463050 float
// GLOBAL DAT_00463054 int *
// GLOBAL DAT_00463058 int *
// GLOBAL DAT_0046305c int *
// GLOBAL DAT_00463060 int

void func_00462E04(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  uVar6 = 0;
  do {
    fVar9 = DAT_00463050;
    if (*(uint *)(param_1 + 0x130) != uVar6) {
      piVar3 = (int *)(param_1 + 200);
      if (uVar6 < 0x1a) {
        piVar3 = piVar3 + uVar6;
      }
      if (*(char *)(*piVar3 + 0x54) != '\0') {
        piVar3 = (int *)(param_1 + 200);
        if (uVar6 < 0x1a) {
          piVar3 = piVar3 + uVar6;
        }
        func_00463E98(*piVar3,(int *)0x1,param_3,param_4);
        uVar4 = *(uint *)(param_1 + 0x130);
        if ((int)uVar4 < 0) goto LAB_00463044;
        piVar3 = (int *)(param_1 + 200);
        if (uVar4 < 0x1a) {
          piVar3 = piVar3 + uVar4;
        }
        iVar7 = *piVar3;
        cVar1 = *(char *)(iVar7 + 0x55);
        goto joined_r0x00462e5c;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x1a);
  iVar7 = func_005228A4(*DAT_00463054,*(int *)(param_1 + 0x10));
  if (iVar7 != 0) {
    uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x70);
    iVar7 = uVar6 * 9;
    iVar8 = *DAT_00463058 + uVar6 * 400;
    if ((((*(uint *)(iVar8 + 0x20) | *(uint *)(iVar8 + 0x28)) & 0xff0000) != 0) &&
       ((*(uint *)(iVar8 + 300) & 0x8000) == 0)) {
      bVar2 = func_0058D768(*DAT_0046305c);
      if (bVar2) {
        uVar5 = *(uint *)(iVar8 + 0x20);
        uVar6 = 0xffffffff;
        uVar4 = *(uint *)(iVar8 + 0x28) | uVar5;
        if ((uVar4 & 0x110000) == 0) {
          if ((uVar4 & 0x220000) == 0) {
            if ((uVar4 & 0x440000) == 0) {
              if ((uVar4 & 0x880000) != 0) {
                uVar6 = *(uint *)(DAT_00463060 + *(int *)(param_1 + 0x130) * 0x10 + 0xc);
              }
            }
            else {
              uVar6 = *(uint *)(DAT_00463060 + *(int *)(param_1 + 0x130) * 0x10 + 8);
            }
          }
          else {
            uVar6 = *(uint *)(DAT_00463060 + *(int *)(param_1 + 0x130) * 0x10 + 4);
          }
        }
        else {
          uVar6 = *(uint *)(DAT_00463060 + *(int *)(param_1 + 0x130) * 0x10);
        }
        if (-1 < (int)uVar6) {
          piVar3 = (int *)(param_1 + 200);
          if (uVar6 < 0x1a) {
            piVar3 = piVar3 + uVar6;
          }
          func_00463E98(*piVar3,(int *)(uint)((uVar5 & 0xff0000) != 0),uVar5,param_4);
          uVar4 = *(uint *)(param_1 + 0x130);
          if (-1 < (int)uVar4) {
            piVar3 = (int *)(param_1 + 200);
            if (uVar4 < 0x1a) {
              piVar3 = piVar3 + uVar4;
            }
            iVar7 = *piVar3;
            cVar1 = *(char *)(iVar7 + 0x55);
joined_r0x00462e5c:
            if (cVar1 == '\0') {
              func_00231448(iVar7 + 0x20);
              func_00231448(iVar7 + 0x2c);
              *(undefined2 *)(iVar7 + 0x38) = 2;
              func_002317C0((undefined2 *)(iVar7 + 0x38),fVar9);
            }
            *(undefined1 *)(iVar7 + 0x54) = 0;
            *(undefined1 *)(iVar7 + 0x55) = 0;
          }
LAB_00463044:
          *(uint *)(param_1 + 0x130) = uVar6;
          return;
        }
      }
      else {
        func_00463E98(*(int *)(param_1 + 200),(int *)0x1,iVar7,param_4);
        uVar6 = *(uint *)(param_1 + 0x130);
        if (-1 < (int)uVar6) {
          piVar3 = (int *)(param_1 + 200);
          if (uVar6 < 0x1a) {
            piVar3 = piVar3 + uVar6;
          }
          iVar7 = *piVar3;
          if (*(char *)(iVar7 + 0x55) == '\0') {
            func_00231448(iVar7 + 0x20);
            func_00231448(iVar7 + 0x2c);
            *(undefined2 *)(iVar7 + 0x38) = 2;
            func_002317C0((undefined2 *)(iVar7 + 0x38),fVar9);
          }
          *(undefined1 *)(iVar7 + 0x54) = 0;
          *(undefined1 *)(iVar7 + 0x55) = 0;
        }
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
    }
  }
  return;
}

