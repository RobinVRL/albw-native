#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001B47B0(int param_1);
extern int func_001B4D70(int param_1);
extern int func_001B55BC(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005291BC(int param_1,float *param_2,float fparam_0);
extern int func_005292FC(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b5dd4;
extern int DAT_001b5dd8;
extern int DAT_001b5ddc;
extern float DAT_001b5de0;
extern undefined4 DAT_001b5de4;
extern float DAT_001b5de8;
extern int DAT_001b5dec;
extern int DAT_001b5df0;
extern float DAT_001b5df4;
extern undefined4 DAT_001b5df8;
extern int *DAT_001b5dfc;

// USA 001B5AF4 <- EU 001B5AF4 (Ghidra, non-matching)
// GLOBAL DAT_001b5dd4 float
// GLOBAL DAT_001b5dd8 int
// GLOBAL DAT_001b5ddc int
// GLOBAL DAT_001b5de0 float
// GLOBAL DAT_001b5de4 undefined4
// GLOBAL DAT_001b5de8 float
// GLOBAL DAT_001b5dec int
// GLOBAL DAT_001b5df0 int
// GLOBAL DAT_001b5df4 float
// GLOBAL DAT_001b5df8 undefined4
// GLOBAL DAT_001b5dfc int *

undefined4 func_001B5AF4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  float fparam_0;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  fVar13 = DAT_001b5de8;
  fparam_0 = DAT_001b5dd4;
  puVar11 = (undefined4 *)(param_1 + 0x8bc);
  if (*(int *)(param_1 + 0x93c) == 0) {
    iVar9 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x954),DAT_001b5ddc,
                          DAT_001b5dd8,DAT_001b5de0);
    if (iVar9 != 0) {
      *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x93c) == 1) {
    *(undefined4 *)(param_1 + 0x950) = DAT_001b5de4;
    uVar7 = *(uint *)(param_1 + 1000);
    pfVar4 = (float *)(DAT_001b5dec + (uVar7 >> 0x18) * 0x10);
    fVar12 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_28 = *pfVar4 + pfVar4[1] * fVar12 * fVar13;
    fVar12 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_24 = fparam_0;
    local_20 = pfVar4[2] + pfVar4[3] * fVar12 * fVar13;
    func_00115C54(&local_28,&local_28,(float *)(param_1 + 0x3d0));
    func_001B55BC(param_1,&local_28,DAT_001b5df0,*(float *)(param_1 + 0x950));
    uVar7 = *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
    puVar5 = (undefined2 *)(param_1 + 0x958);
    puVar8 = puVar5;
    if (uVar7 < 4) {
      puVar8 = puVar5 + uVar7;
    }
    *puVar8 = 0x78;
    iVar9 = 0;
    do {
      psVar10 = puVar5 + iVar9;
      iVar9 = iVar9 + 1;
      sVar1 = *psVar10;
      if (0 < sVar1) {
        *psVar10 = sVar1 + -1;
      }
      piVar3 = DAT_001b5dfc;
    } while (iVar9 != 4);
    if ((*(char *)(param_1 + 0x984) != '\0') &&
       (*(uint *)(param_1 + 0x964) <= *(uint *)(param_1 + 0x960))) {
      *(undefined1 *)(param_1 + 0x984) = 0;
      uVar2 = DAT_001b5df8;
      *(undefined4 *)(param_1 + 0x964) = 0x3c;
      *(undefined4 *)(param_1 + 0x968) = uVar2;
      *(undefined4 *)(param_1 + 0x960) = 0;
      iVar9 = func_001B47B0(param_1);
      *(int *)(param_1 + 0x954) = iVar9 << 0x1e;
      return func_001B4D70(param_1);
    }
    if (*(uint *)(param_1 + 0x930) < *(uint *)(param_1 + 0x934)) {
      *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) + 1;
    }
    else {
      fVar13 = DAT_001b5df4;
      uVar7 = func_00111A64((uint *)(*DAT_001b5dfc + 0x660));
      if ((uint)((ulonglong)uVar7 * 100 >> 0x20) < 0x3c) {
        uVar7 = func_00111A64((uint *)(*piVar3 + 0x660));
        iVar9 = (int)((ulonglong)uVar7 * 0x78 >> 0x20) + 0x78;
        *(int *)(param_1 + 0x934) = iVar9;
        if (iVar9 == 0) {
          *(float *)(param_1 + 0x938) = fparam_0;
        }
        else {
          fVar12 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x938) = fVar13 / fVar12;
        }
        *(undefined4 *)(param_1 + 0x930) = 0;
        iVar9 = func_001B47B0(param_1);
        *(int *)(param_1 + 0x954) = iVar9 << 0x1e;
        func_0065B29C(puVar11,1);
      }
      else {
        func_0065B29C(puVar11,0);
      }
    }
  }
  pfVar4 = (float *)func_00520FC0();
  iVar9 = func_005291BC(param_1,pfVar4,fparam_0);
  if (iVar9 != 0) {
    return func_0065B29C(puVar11,2);
  }
  puVar6 = func_005292FC(param_1);
  if ((puVar6 != (undefined4 *)0x0) &&
     (iVar9 = func_005291BC(param_1,(float *)(puVar6 + 0xf4),fparam_0), iVar9 != 0)) {
    return func_0065B29C(puVar11,4);
  }
  return 0;
}

