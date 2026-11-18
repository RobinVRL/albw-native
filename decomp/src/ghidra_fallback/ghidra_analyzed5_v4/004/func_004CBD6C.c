#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CA48C(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058AB90(int param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004cbfa4;
extern uint *DAT_004cbfa8;
extern int *DAT_004cbfac;
extern int *DAT_004cbfb0;
extern float DAT_004cbfb4;

// USA 004CBD6C <- EU 004CBD44 (Ghidra, non-matching)
// GLOBAL DAT_004cbfa4 int *
// GLOBAL DAT_004cbfa8 uint *
// GLOBAL DAT_004cbfac int *
// GLOBAL DAT_004cbfb0 int *
// GLOBAL DAT_004cbfb4 float

undefined4 func_004CBD6C(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  iVar1 = func_00581D60(*DAT_004cbfa4);
  piVar7 = param_1 + 0x22f;
  if (iVar1 != (short)param_1[0x15]) {
    func_0066A284(piVar7,5);
  }
  param_1[0x268] = param_1[0x268] + 1;
  func_004CA48C((int)param_1);
  if (*(char *)((int)param_1 + 0x991) != '\0') {
    *(char *)((int)param_1 + 0x991) = *(char *)((int)param_1 + 0x991) + -1;
  }
  if ((char)param_1[0x249] == '\0') {
    uVar2 = param_1[0x243];
    if (uVar2 < (uint)param_1[0x244]) {
      uVar2 = uVar2 + 1;
      param_1[0x243] = uVar2;
    }
    if ((uint)param_1[0x244] <= uVar2) {
      param_1[0x167] = param_1[0x167] | 4;
      func_004FD038((int)(param_1 + 0x16a),1);
      param_1[0x167] = param_1[0x167] | 0x80;
      *(undefined1 *)(param_1 + 0x249) = 1;
    }
  }
  if ((char)param_1[0x242] != '\0') {
    if (param_1[0xd1] != 0) {
      func_004A1B9C(aiStack_20,param_1[0xd1],DAT_004cbfa8);
    }
    *(undefined1 *)(param_1 + 0x242) = 0;
  }
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    if (((((char)param_1[0x230] != '\x01' && (char)param_1[0x230] != '\x02') &&
         (iVar1 = func_0058AB90((int)param_1), iVar1 == 0)) &&
        ((iVar1 = param_1[0x10f], iVar1 == 0 ||
         (((iVar3 = func_0052FBA0(*DAT_004cbfac + 0x3dbbc,*(uint *)(iVar1 + 4)), iVar3 == 0 ||
           (iVar3 = func_00588BE4(iVar3), iVar3 != *DAT_004cbfb0)) ||
          (*(char *)(iVar1 + 0x21) != -1 && *(char *)(iVar1 + 0x21) != '\x1f')))))) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_0066A284(piVar7,1);
    }
    pfVar6 = (float *)param_1[0x234];
    piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar2 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar5 = (int *)((int)pfVar6 + ((int)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar5);
    }
    (*(code *)*piVar4)(piVar5);
    iVar1 = *piVar7;
    *piVar7 = iVar1 + 1;
    if (param_1[0x233] != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fparam_0);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
    if ((char)param_1[0x25e] == '\0') {
      return func_004F86FC((int)param_1,2,DAT_004cbfb4);
    }
  }
  return 0;
}

