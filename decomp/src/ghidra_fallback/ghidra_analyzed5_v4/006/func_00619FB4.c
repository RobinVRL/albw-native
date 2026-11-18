#include "ghidra_types.h"

extern int func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_004C0350(int param_1);
extern int func_004C1388(int param_1);
extern int func_006194E8(int param_1,int param_2,undefined1 param_3);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0061a130;
extern float DAT_0061a134;
extern float DAT_0061a138;
extern float DAT_0061a13c;
extern float DAT_0061a140;

// USA 00619FB4 <- EU 00619F8C (Ghidra, non-matching)
// GLOBAL DAT_0061a130 float
// GLOBAL DAT_0061a134 float
// GLOBAL DAT_0061a138 float
// GLOBAL DAT_0061a13c float
// GLOBAL DAT_0061a140 float

undefined4 func_00619FB4(int param_1)

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
  fparam_0 = DAT_0061a13c;
  fparam_1 = DAT_0061a138;
  fparam_2 = DAT_0061a134;
  fparam_3 = DAT_0061a130;
  if (iVar3 == 2 || iVar3 == 4) {
    uVar4 = *(uint *)(param_1 + 0x7c0);
    iVar5 = *(int *)(uVar4 + 0x28);
    if (iVar5 != 0) {
      uVar4 = *(uint *)(uVar4 + 0x20);
    }
    if ((iVar5 == 0 || uVar4 <= (uint)(int)cVar2) ||
       (iVar5 = *(int *)(iVar5 + cVar2 * 4), iVar5 == 0)) goto LAB_0061a058;
    iVar5 = *(int *)(iVar5 + 0x4c);
    if (iVar5 < 1) {
      if (iVar5 != -1) goto LAB_0061a058;
      *(float *)(param_1 + 0x834) = DAT_0061a13c;
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(undefined1 *)(param_1 + 0x857) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(short *)(param_1 + 0x84a) = (short)iVar5;
    }
  }
  else {
LAB_0061a058:
    if ((*(short *)(param_1 + 0x848) != 0) && (iVar5 = func_004C1388(param_1), iVar5 == 0)) {
      if ((*(char *)(param_1 + 0x914) == '\0') || (*(char *)(*(int *)(param_1 + 0x7c0) + 4) != '\0')
         ) {
LAB_0061a0dc:
        return func_004C0350(param_1);
      }
      if (iVar3 != 4) {
        if (iVar3 == 3) {
          return func_0068C794((float *)(param_1 + 0x834),DAT_0061a140,fparam_1,fparam_2,fparam_3);
        }
        goto LAB_0061a0dc;
      }
      goto LAB_0061a0f0;
    }
  }
  iVar3 = func_0068C794((float *)(param_1 + 0x834),fparam_0,fparam_1,fparam_2,fparam_3);
  if (iVar3 == 0) {
    return 0;
  }
LAB_0061a0f0:
  return func_006194E8(param_1,*(int *)(param_1 + 0x984),0);
}

