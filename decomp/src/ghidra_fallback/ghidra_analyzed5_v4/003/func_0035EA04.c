#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_0035ECD4(int *param_1);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0035eb6c;
extern float DAT_0035eb70;
extern float DAT_0035eb74;
extern float DAT_0035eb78;
extern float DAT_0035eb7c;
extern float DAT_0035eb80;
extern float DAT_0035eb84;
extern float DAT_0035eb88;
extern float DAT_0035eb8c;
extern float DAT_0035eb90;
extern int *DAT_0035eb94;
extern float DAT_0035eb98;
extern float DAT_0035eb9c;

// USA 0035EA04 <- EU 0035E9E0 (Ghidra, non-matching)
// GLOBAL DAT_0035eb6c int *
// GLOBAL DAT_0035eb70 float
// GLOBAL DAT_0035eb74 float
// GLOBAL DAT_0035eb78 float
// GLOBAL DAT_0035eb7c float
// GLOBAL DAT_0035eb80 float
// GLOBAL DAT_0035eb84 float
// GLOBAL DAT_0035eb88 float
// GLOBAL DAT_0035eb8c float
// GLOBAL DAT_0035eb90 float
// GLOBAL DAT_0035eb94 int *
// GLOBAL DAT_0035eb98 float
// GLOBAL DAT_0035eb9c float

undefined4 func_0035EA04(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 in_d8;
  float in_s18;
  
  if ((char)param_1[0x104] == '\x06' || (char)param_1[0x104] == '\x03') {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x2c) != 0) &&
       (cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1), cVar1 == '\x05' || cVar1 == '\x0e')) {
      pfVar4 = (float *)func_00520FC0();
      piVar2 = DAT_0035eb6c;
      iVar5 = func_0052FBA0(*DAT_0035eb6c + 0x3dbbc,param_1[0x14]);
      if (iVar5 != 0) {
        iVar5 = func_0052FBA0(*piVar2 + 0x3dbbc,param_1[0x14]);
        if (iVar5 != 0) {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x40c) + 0x24) + 0x14) +
                  *(int *)(iVar5 + 0xb88) * 0x30;
          in_d8 = CONCAT44(*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0xc));
          in_s18 = *(float *)(iVar5 + 0x2c);
        }
        fVar7 = ALBW_AS_F32(in_d8) - *pfVar4;
        fVar6 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20)) - pfVar4[1];
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + (in_s18 - pfVar4[2]) * (in_s18 - pfVar4[2]));
        if (*(char *)((int)param_1 + 0x512) == '\0') {
          fVar7 = DAT_0035eb88;
          if ((DAT_0035eb70 < fVar6) && (fVar7 = DAT_0035eb8c, fVar6 < DAT_0035eb90)) {
            fVar7 = (DAT_0035eb9c * (fVar6 - DAT_0035eb70)) / DAT_0035eb98 + DAT_0035eb88;
          }
        }
        else {
          fVar7 = DAT_0035eb78;
          if ((DAT_0035eb70 < fVar6) && (fVar7 = DAT_0035eb74, fVar6 < DAT_0035eb7c)) {
            fVar7 = (DAT_0035eb84 * (fVar6 - DAT_0035eb70)) / DAT_0035eb80 + DAT_0035eb78;
          }
        }
        func_002917A4(*DAT_0035eb94,param_1 + 0xf4,0,fVar7);
      }
      func_0035ECD4(param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

