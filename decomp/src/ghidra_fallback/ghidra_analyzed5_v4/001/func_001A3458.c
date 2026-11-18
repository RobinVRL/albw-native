#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001A31A8(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003C3230(int *param_1);
extern int func_004356B4(int *param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);

// USA 001A3458 <- EU 001A3458 (Ghidra, non-matching)

void func_001A3458(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = (short)param_1[0x272] + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(short *)(param_1 + 0x272) = (short)iVar1;
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    if (*(char *)(param_1[0x25a] + 0x44) != '\0') {
      func_0014E2A0((int)param_1,param_1[0x259],param_1 + 0x269,0x1600,0,0);
    }
    piVar6 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\x05' && (char)param_1[0x230] != '\x06') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_0065A474(piVar6,5);
    }
    pfVar5 = (float *)param_1[0x234];
    piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar4 = (int *)((int)pfVar5 + ((int)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar4);
    }
    (*(code *)*piVar2)(piVar4);
    iVar1 = *piVar6;
    *piVar6 = iVar1 + 1;
    if (param_1[0x233] != 0) {
      fVar7 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar7);
    }
    fVar7 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar7);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_004F48F0((int)param_1);
    iVar1 = param_1[0x259];
    iVar10 = param_1[0xf4];
    fVar7 = func_0054DE3C(param_1,0,1);
    fVar8 = ALBW_AS_F32(param_1[0xf5]);
    iVar9 = param_1[0xf6];
    *(int *)(iVar1 + 4) = iVar10;
    *(float *)(iVar1 + 8) = fVar7 + fVar8;
    *(int *)(iVar1 + 0xc) = iVar9;
    func_004356B4((int *)param_1[0x259]);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    func_001A31A8((int)param_1);
    func_003C3230(param_1 + 0x23e);
    param_1[0x23d] = param_1[0x250];
  }
  return;
}

