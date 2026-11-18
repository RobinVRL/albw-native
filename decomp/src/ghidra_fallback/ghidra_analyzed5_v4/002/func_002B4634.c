#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_002B3C88(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);
extern int func_0066277C(undefined4 *param_1,int param_2);
extern uint DAT_002b48cc;
extern float *DAT_002b48d0;
extern int DAT_002b48d4;
extern float DAT_002b48d8;
extern float DAT_002b48dc;
extern float DAT_002b48e0;
extern float DAT_002b48e4;
extern int *DAT_002b48e8;

// USA 002B4634 <- EU 002B4610 (Ghidra, non-matching)
// GLOBAL DAT_002b48cc uint
// GLOBAL DAT_002b48d0 float *
// GLOBAL DAT_002b48d4 int
// GLOBAL DAT_002b48d8 float
// GLOBAL DAT_002b48dc float
// GLOBAL DAT_002b48e0 float
// GLOBAL DAT_002b48e4 float
// GLOBAL DAT_002b48e8 int *

/* WARNING: Variable defined which should be unmapped: objStack_28 */

void func_002B4634(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  if (*(char *)((int)param_1 + 0x989) != '\0') {
    *(undefined1 *)((int)param_1 + 0x829) = 1;
  }
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar8 = param_1 + 0x23b;
    if (*(char *)((int)param_1 + 0x986) != '\0') {
      *(undefined1 *)((int)param_1 + 0x986) = 0;
      func_0066277C(piVar8,7);
    }
    if (((char)param_1[0x23c] != '\x06' && (char)param_1[0x23c] != '\a') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00662638(piVar8,6);
    }
    pfVar7 = (float *)param_1[0x240];
    piVar2 = (int *)(param_1[0x242] + (char)param_1[0x23c] * 8);
    uVar5 = *(uint *)(param_1[0x242] + (char)param_1[0x23c] * 8 + 4);
    piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
    if ((uVar5 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar6);
    }
    (*(code *)*piVar2)(piVar6);
    iVar3 = *piVar8;
    iVar1 = param_1[0x23f];
    *piVar8 = iVar3 + 1;
    if (iVar1 != 0) {
      fVar9 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(iVar1,1,fVar9);
    }
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    fVar9 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar9);
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    uVar4 = extraout_r1;
    if ((char)param_1[0x23c] == '\0' || (char)param_1[0x23c] == '\x02') {
      objStack_28[0] = param_1[599] - param_1[0xfa];
      func_0051D37C((int *)objStack_28,~DAT_002b48cc,DAT_002b48cc);
      iVar1 = DAT_002b48d4;
      pfVar7 = DAT_002b48d0;
      func_0051D2F4(param_1 + 0x24a,objStack_28[0],DAT_002b48d4,(int)DAT_002b48d0,DAT_002b48d8);
      func_0051D2F4(param_1 + 0x24b,param_1[0x24a],iVar1,(int)pfVar7,DAT_002b48dc);
      func_0051D2F4(param_1 + 0x24c,param_1[0x24b],iVar1,(int)pfVar7,DAT_002b48e0);
      uVar4 = extraout_r1_00;
    }
    func_00169A80((int *)param_1[0x256],uVar4,iVar1,(int *)pfVar7);
    func_00168E9C((int *)param_1[0x256],param_1[0x103],(int *)0x0);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
    if ((param_1[0x167] & 0x80U) != 0) {
      objStack_28[0] = 0;
      objStack_28[1] = 0;
      iVar1 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x200,0,0);
      piVar8 = DAT_002b48e8;
      fVar9 = DAT_002b48e4;
      if (iVar1 != 0) {
        func_002917A4(*DAT_002b48e8,param_1 + 0xf4,0,DAT_002b48e4);
      }
      objStack_28[0] = 0;
      objStack_28[1] = 0;
      iVar1 = func_0014E2A0((int)param_1,param_1[0x10c],0,0x400,0,0);
      if (iVar1 != 0) {
        func_00291A38(*piVar8,param_1 + 0xf4,fVar9);
      }
    }
    func_002B3C88((int)param_1);
    if ((char)param_1[0x194] == '\0') {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[0x16a];
    }
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x90000;
  }
  return;
}

