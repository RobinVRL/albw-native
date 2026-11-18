#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_0058AB90(int param_1);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0019e3c0;
extern float DAT_0019e3c4;
extern float DAT_0019e3c8;
extern float DAT_0019e3cc;
extern float DAT_0019e3d0;
extern int DAT_0019e3d4;
extern float DAT_0019e3d8;

// USA 0019E218 <- EU 0019E218 (Ghidra, non-matching)
// GLOBAL DAT_0019e3c0 float
// GLOBAL DAT_0019e3c4 float
// GLOBAL DAT_0019e3c8 float
// GLOBAL DAT_0019e3cc float
// GLOBAL DAT_0019e3d0 float
// GLOBAL DAT_0019e3d4 int
// GLOBAL DAT_0019e3d8 float

undefined4 func_0019E218(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = DAT_0019e3d4;
  fVar10 = (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x23c])) * DAT_0019e3c0;
  fVar11 = DAT_0019e3c4;
  if ((DAT_0019e3c4 <= fVar10) && (fVar11 = fVar10, 0x3f800000 < (int)ALBW_AS_U32(fVar10))) {
    fVar11 = DAT_0019e3c8;
  }
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar11 == DAT_0019e3c4) << 0x1e |
          (uint)(DAT_0019e3c4 <= fVar11) << 0x1d;
  bVar2 = (byte)(uVar9 >> 0x18);
  fVar10 = DAT_0019e3c8;
  if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
     (fVar10 = DAT_0019e3cc, (int)ALBW_AS_U32(fVar11) < 0x3f800000)) {
    fVar10 = DAT_0019e3c8 + DAT_0019e3d0 * fVar11;
  }
  param_1[0x13c] = (int)ALBW_AS_U32(fVar10);
  param_1[0x239] = iVar3 + param_1[0x239];
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar8 = param_1 + 0x22f;
    if ((((char)param_1[0x230] != '\a' && (char)param_1[0x230] != '\b') &&
        (iVar3 = func_0058AB90((int)param_1), iVar3 == 0)) &&
       (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
      func_0065A1EC(piVar8,7);
    }
    pfVar7 = (float *)param_1[0x234];
    piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar5 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar6);
    }
    (*(code *)*piVar4)(piVar6);
    iVar3 = *piVar8;
    *piVar8 = iVar3 + 1;
    if (param_1[0x233] != 0) {
      fVar11 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(uVar9 >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar11);
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
    cVar1 = (char)param_1[0x230];
    if ((cVar1 != '\0' && cVar1 != '\x06') && (cVar1 != '\b')) {
      return func_004F86FC((int)param_1,2,DAT_0019e3d8);
    }
  }
  return 0;
}

