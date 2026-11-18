#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00393270(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00588BE4(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001b59bc;
extern int *DAT_001b59c0;
extern int *DAT_001b59c4;

// USA 001B5794 <- EU 001B5794 (Ghidra, non-matching)
// GLOBAL DAT_001b59bc int *
// GLOBAL DAT_001b59c0 int *
// GLOBAL DAT_001b59c4 int *

undefined4 func_001B5794(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  
  piVar2 = DAT_001b59c4;
  piVar7 = DAT_001b59c0;
  if (*(char *)((int)param_1 + 0x985) == '\0') {
    puVar6 = *(undefined4 **)(*DAT_001b59bc + 0x3dbc0);
    puVar9 = *(undefined4 **)(*DAT_001b59bc + 0x3dbc8);
    if (puVar6 != puVar9) {
      piVar4 = param_1 + 0x263;
      do {
        piVar8 = (int *)*puVar6;
        if (((piVar8 != (int *)0x0) &&
            (((iVar1 = func_00588BE4((int)piVar8), iVar1 == *piVar7 ||
              (iVar1 = func_00588BE4((int)piVar8), iVar1 == *piVar2)) && (piVar8 != param_1)))) &&
           (iVar1 = piVar8[0xb3], *piVar4 < param_1[0x264])) {
          piVar8 = (int *)param_1[0x266];
          if (piVar8 != (int *)0x0) {
            param_1[0x266] = *piVar8;
            *piVar8 = iVar1;
          }
          if (*piVar4 < param_1[0x264]) {
            *(int **)(param_1[0x265] + *piVar4 * 4) = piVar8;
            *piVar4 = *piVar4 + 1;
          }
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar9);
    }
    *(undefined1 *)((int)param_1 + 0x985) = 1;
  }
  iVar1 = func_004F70A8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\a' && (char)param_1[0x230] != '\b') &&
     (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
    func_0065B29C(piVar7,7);
  }
  pfVar5 = (float *)param_1[0x234];
  piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar4 = (int *)((int)pfVar5 + ((int)uVar3 >> 1));
  if ((uVar3 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar4);
  }
  (*(code *)*piVar2)(piVar4);
  iVar1 = *piVar7;
  *piVar7 = iVar1 + 1;
  if (param_1[0x233] != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar10);
  }
  if ((char)param_1[0x230] != '\a') {
    func_00393270((int)(param_1 + 0x238));
    if ((uint)param_1[600] < (uint)param_1[0x259]) {
      param_1[600] = param_1[600] + 1;
    }
  }
  fVar10 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar10);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  *(undefined1 *)((int)param_1 + 0x987) = 0;
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
}

