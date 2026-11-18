#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058AB90(int param_1);
extern int func_00658748(undefined4 *param_1,undefined1 param_2);
extern float *DAT_001655f8;
extern int *DAT_001655fc;
extern int DAT_00165600;
extern float DAT_00165604;

// USA 00165470 <- EU 00165474 (Ghidra, non-matching)
// GLOBAL DAT_001655f8 float *
// GLOBAL DAT_001655fc int *
// GLOBAL DAT_00165600 int
// GLOBAL DAT_00165604 float

void func_00165470(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((uint *)(albw_frame + 0x0))
  #define afStack_40 ((float *)(albw_frame + 0x10))
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((((char)param_1[0x230] != '\x05' && (char)param_1[0x230] != '\x06') &&
        (iVar1 = func_0058AB90((int)param_1), iVar1 == 0)) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00658748(piVar6,5);
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
      fparam_0 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fparam_0);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    if ((char)param_1[0x230] == '\x02') {
      local_50[2] = param_1[0x23c];
      local_50[0] = 0;
      local_50[1] = 0;
      func_00491A18(afStack_40,local_50,DAT_001655f8);
      iVar1 = param_1[0x103];
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      func_001157FC((float *)(iVar1 + 0x80),(float *)(param_1[0x103] + 0x80),afStack_40);
      func_004CEAF0(param_1[0x103]);
      func_0051D2F4(param_1 + 0x23c,*DAT_001655fc,DAT_00165600,0x7fffffff,DAT_00165604);
    }
  }
  return;
}

