#include "ghidra_types.h"

extern int func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_004C0350(int param_1);
extern int func_004C1388(int param_1);
extern int func_0061B210(int param_1,int param_2,undefined1 param_3);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0061be58;
extern float DAT_0061be5c;
extern float DAT_0061be60;
extern float DAT_0061be64;
extern float DAT_0061be68;

// USA 0061BCDC <- EU 0061BCB4 (Ghidra, non-matching)
// GLOBAL DAT_0061be58 float
// GLOBAL DAT_0061be5c float
// GLOBAL DAT_0061be60 float
// GLOBAL DAT_0061be64 float
// GLOBAL DAT_0061be68 float

undefined4 func_0061BCDC(int param_1)

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
  fparam_0 = DAT_0061be64;
  fparam_1 = DAT_0061be60;
  fparam_2 = DAT_0061be5c;
  fparam_3 = DAT_0061be58;
  if (iVar3 == 2 || iVar3 == 4) {
    uVar4 = *(uint *)(param_1 + 0x7c0);
    iVar5 = *(int *)(uVar4 + 0x28);
    if (iVar5 != 0) {
      uVar4 = *(uint *)(uVar4 + 0x20);
    }
    if ((iVar5 == 0 || uVar4 <= (uint)(int)cVar2) ||
       (iVar5 = *(int *)(iVar5 + cVar2 * 4), iVar5 == 0)) goto LAB_0061bd80;
    iVar5 = *(int *)(iVar5 + 0x4c);
    if (iVar5 < 1) {
      if (iVar5 != -1) goto LAB_0061bd80;
      *(float *)(param_1 + 0x834) = DAT_0061be64;
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(undefined1 *)(param_1 + 0x857) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x848) = 0;
      *(short *)(param_1 + 0x84a) = (short)iVar5;
    }
  }
  else {
LAB_0061bd80:
    if ((*(short *)(param_1 + 0x848) != 0) && (iVar5 = func_004C1388(param_1), iVar5 == 0)) {
      if ((*(char *)(param_1 + 0x914) == '\0') || (*(char *)(*(int *)(param_1 + 0x7c0) + 4) != '\0')
         ) {
LAB_0061be04:
        return func_004C0350(param_1);
      }
      if (iVar3 != 4) {
        if (iVar3 == 3) {
          return func_0068C794((float *)(param_1 + 0x834),DAT_0061be68,fparam_1,fparam_2,fparam_3);
        }
        goto LAB_0061be04;
      }
      goto LAB_0061be18;
    }
  }
  iVar3 = func_0068C794((float *)(param_1 + 0x834),fparam_0,fparam_1,fparam_2,fparam_3);
  if (iVar3 == 0) {
    return 0;
  }
LAB_0061be18:
  return func_0061B210(param_1,*(int *)(param_1 + 0x984),0);
}

