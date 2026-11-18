#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003C29D8(int *param_1);
extern int func_003C2D00(int param_1,float *param_2,undefined4 **param_3);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F9594(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_002166bc;
extern float DAT_002166c0;
extern int DAT_002166c4;

// USA 002164E4 <- EU 002164E4 (Ghidra, non-matching)
// GLOBAL DAT_002166bc float
// GLOBAL DAT_002166c0 float
// GLOBAL DAT_002166c4 int

void func_002164E4(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar6 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\v' && (char)param_1[0x230] != '\f') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_0065D9FC(piVar6,0xb);
    }
    param_1[0x28e] = param_1[0xf4];
    param_1[0x28f] = param_1[0xf5];
    param_1[0x290] = param_1[0xf6];
    piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar4 = (int *)(param_1[0x234] + ((int)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar4);
    }
    (*(code *)*piVar2)(piVar4);
    iVar1 = *piVar6;
    ppuVar5 = (undefined4 **)param_1[0x233];
    *piVar6 = iVar1 + 1;
    if (ppuVar5 != (undefined4 **)0x0) {
      fVar7 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210((int)ppuVar5,1,fVar7);
    }
    fVar8 = func_004F9594();
    fVar7 = DAT_002166c0;
    param_1[0xf8] = (int)ALBW_AS_U32((fVar8 * DAT_002166bc));
    if ((uint)param_1[0x2b7] < (uint)param_1[0x2b8]) {
      param_1[0x2b7] = param_1[0x2b7] + 1;
    }
    if ((uint)param_1[0x2ba] < (uint)param_1[699]) {
      param_1[0x2ba] = param_1[0x2ba] + 1;
    }
    fVar8 = ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x28f]);
    if (fVar8 <= fVar7) {
      fVar8 = -fVar8;
    }
    if (DAT_002166c4 < (int)ALBW_AS_U32(fVar8)) {
      uVar3 = param_1[0x167] & 0xfffffffb;
    }
    else {
      uVar3 = param_1[0x167] | 4;
    }
    param_1[0x167] = uVar3;
    func_003C29D8(param_1 + 0x238);
    if (param_1[0x244] < 3) {
      uVar3 = param_1[0x167] & 0xffffffef;
    }
    else {
      uVar3 = param_1[0x167] | 0x10;
    }
    param_1[0x167] = uVar3;
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_003C2D00((int)(param_1 + 0x238),(float *)(param_1 + 0xf7),ppuVar5);
    if ((char)param_1[0x2ce] != '\0') {
      if ((uint)param_1[0x2a8] < (uint)param_1[0x2a9]) {
        param_1[0x2a8] = param_1[0x2a8] + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x2ce) = 0;
      }
    }
  }
  return;
}

