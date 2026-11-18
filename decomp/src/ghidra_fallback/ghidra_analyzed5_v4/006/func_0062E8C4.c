#include "ghidra_types.h"

extern int func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_004C0350(int param_1);
extern int func_004C1388(int param_1);
extern int func_0062DDF8(int param_1,int param_2,undefined1 param_3);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0062ea40;
extern float DAT_0062ea44;
extern float DAT_0062ea48;
extern float DAT_0062ea4c;
extern float DAT_0062ea50;

// USA 0062E8C4 <- EU 0062E89C (Ghidra, non-matching)
// GLOBAL DAT_0062ea40 float
// GLOBAL DAT_0062ea44 float
// GLOBAL DAT_0062ea48 float
// GLOBAL DAT_0062ea4c float
// GLOBAL DAT_0062ea50 float

undefined4 func_0062E8C4(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fparam_0;
  float fparam_3;
  float fparam_2;
  float fparam_1;
  
  if (*(uint *)(param_1 + 0x7c0) == 0) {
    return 0;
  }
  bVar6 = *(char *)(param_1 + 0x914) != '\0';
  sVar1 = 0;
  if (bVar6) {
    sVar1 = *(short *)(param_1 + 0x848);
  }
  if (bVar6 && sVar1 != 0) {
    *(short *)(param_1 + 0x848) = sVar1 + -1;
  }
  cVar2 = *(char *)(param_1 + 0x85b);
  iVar3 = func_004BFE7C(param_1,(float *)(param_1 + 0x3d0),(int *)(param_1 + 1000),
                        (uint *)(param_1 + 0x85b),*(uint *)(param_1 + 0x7c0),
                        *(float *)(param_1 + 0x834));
  fparam_0 = DAT_0062ea4c;
  fparam_1 = DAT_0062ea48;
  fparam_2 = DAT_0062ea44;
  fparam_3 = DAT_0062ea40;
  if (iVar3 == 2 || iVar3 == 4) {
    uVar4 = *(uint *)(param_1 + 0x7c0);
    iVar5 = *(int *)(uVar4 + 0x28);
    if (iVar5 != 0) {
      uVar4 = *(uint *)(uVar4 + 0x20);
    }
    if ((iVar5 == 0 || uVar4 <= (uint)(int)cVar2) ||
       (iVar5 = *(int *)(iVar5 + cVar2 * 4), iVar5 == 0)) goto LAB_0062e968;
    iVar5 = *(int *)(iVar5 + 0x4c);
    if (iVar5 < 1) {
      if (iVar5 != -1) goto LAB_0062e968;
      *(float *)(param_1 + 0x834) = DAT_0062ea4c;
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(undefined1 *)(param_1 + 0x857) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(short *)(param_1 + 0x84a) = (short)iVar5;
    }
  }
  else {
LAB_0062e968:
    if ((*(short *)(param_1 + 0x848) != 0) && (iVar5 = func_004C1388(param_1), iVar5 == 0)) {
      if ((*(char *)(param_1 + 0x914) == '\0') || (*(char *)(*(int *)(param_1 + 0x7c0) + 4) != '\0')
         ) {
LAB_0062e9ec:
        return func_004C0350(param_1);
      }
      if (iVar3 != 4) {
        if (iVar3 == 3) {
          return func_0068C794((float *)(param_1 + 0x834),DAT_0062ea50,fparam_1,fparam_2,fparam_3);
        }
        goto LAB_0062e9ec;
      }
      goto LAB_0062ea00;
    }
  }
  iVar3 = func_0068C794((float *)(param_1 + 0x834),fparam_0,fparam_1,fparam_2,fparam_3);
  if (iVar3 == 0) {
    return 0;
  }
LAB_0062ea00:
  return func_0062DDF8(param_1,*(int *)(param_1 + 0x984),0);
}

