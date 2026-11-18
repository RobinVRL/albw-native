#include "ghidra_types.h"

extern int func_00156528(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_0058AB90(int param_1);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001568a4;
extern float DAT_001568a8;
extern float DAT_001568ac;
extern int DAT_001568b0;
extern float DAT_001568b4;
extern float DAT_001568b8;
extern float DAT_001568bc;

// USA 001566F4 <- EU 001566F8 (Ghidra, non-matching)
// GLOBAL DAT_001568a4 float
// GLOBAL DAT_001568a8 float
// GLOBAL DAT_001568ac float
// GLOBAL DAT_001568b0 int
// GLOBAL DAT_001568b4 float
// GLOBAL DAT_001568b8 float
// GLOBAL DAT_001568bc float

undefined4 func_001566F4(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x246])) * DAT_001568a4 * DAT_001568a8;
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_001568ac <= fVar8) << 0x1d;
  fVar9 = DAT_001568ac;
  if ((SUB41(uVar7 >> 0x1d,0)) && (fVar9 = fVar8, DAT_001568b0 < (int)ALBW_AS_U32(fVar8))) {
    fVar9 = DAT_001568b4;
  }
  param_1[0x13c] = (int)ALBW_AS_U32((fVar9 + DAT_001568b8));
  func_00156528((int)param_1);
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((((char)param_1[0x230] != '\x04' && (char)param_1[0x230] != '\x05') &&
        (iVar1 = func_0058AB90((int)param_1), iVar1 == 0)) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00657E5C(piVar6,4);
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
      fVar9 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(uVar7 >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar9);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    param_1[0x245] =
         (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[0xda])) *
               (ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[0xda])) +
              (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[0xdc])) *
              (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[0xdc]))));
    if ((char)param_1[0x230] == '\x01' || (char)param_1[0x230] == '\x02') {
      return func_004F86FC((int)param_1,2,DAT_001568bc);
    }
  }
  return 0;
}

