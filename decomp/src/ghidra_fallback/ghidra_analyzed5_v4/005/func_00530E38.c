#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00520FC0(void);
extern undefined4 DAT_00530f10;
extern float DAT_00530f14;
extern int DAT_00530f18;

// USA 00530E38 <- EU 00530E10 (Ghidra, non-matching)
// GLOBAL DAT_00530f10 undefined4
// GLOBAL DAT_00530f14 float
// GLOBAL DAT_00530f18 int

undefined4 func_00530E38(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fparam_0;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 ((float *)(albw_frame + 0x2c))
  #define local_2c (*(float *)(albw_frame + 0x34))
  iVar1 = DAT_00530f18;
  uVar4 = 1;
  uVar5 = *(uint *)(param_1 + 0x960);
  uVar6 = DAT_00530f10;
  fparam_0 = DAT_00530f14;
  if (1 < uVar5) {
    do {
      iVar3 = param_1 + uVar4 * 0xc;
      local_40 = *(float *)(iVar3 + 0x900);
      local_3c = *(undefined4 *)(iVar3 + 0x904);
      uStack_38 = *(undefined4 *)(iVar3 + 0x908);
      iVar3 = func_00520FC0();
      local_3c = *(undefined4 *)(iVar3 + 4);
      func_00115C70(local_58,&local_40,(float *)(param_1 + 0x900));
      local_4c = local_58[0];
      uStack_44 = uStack_50;
      local_48 = uVar6;
      func_00115DC8(&local_4c);
      func_00115D70(&local_4c,&local_4c,fparam_0);
      func_00115C54(local_34,&local_40,&local_4c);
      fVar7 = local_34[0];
      fVar8 = local_2c;
      pfVar2 = (float *)func_00520FC0();
      if ((int)ALBW_AS_U32(SQRT((fVar7 - *pfVar2) * (fVar7 - *pfVar2) +
                    (fVar8 - pfVar2[2]) * (fVar8 - pfVar2[2]))) < iVar1) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

