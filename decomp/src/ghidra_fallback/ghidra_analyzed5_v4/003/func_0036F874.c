#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00588CFC(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4, float *param_5,int param_6,float fparam_0,float fparam_1,float fparam_2);
extern float fRam0036f9f0;
extern int *DAT_0036f9d4;
extern float DAT_0036f9d8;
extern int *DAT_0036f9dc;
extern float DAT_0036f9e0;
extern float DAT_0036f9e4;
extern float DAT_0036f9e8;
extern undefined4 *DAT_0036f9ec;
extern float *DAT_0036f9f4;

// USA 0036F874 <- EU 0036F850 (Ghidra, non-matching)
// GLOBAL DAT_0036f9d4 int *
// GLOBAL DAT_0036f9d8 float
// GLOBAL DAT_0036f9dc int *
// GLOBAL DAT_0036f9e0 float
// GLOBAL DAT_0036f9e4 float
// GLOBAL DAT_0036f9e8 float
// GLOBAL DAT_0036f9ec undefined4 *
// GLOBAL DAT_0036f9f4 float *
// GLOBAL UNK_0036f9f0 float

undefined4 func_0036F874(float *param_1,float *param_2,undefined4 *param_3,float fparam_0)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define fStack_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(float *)(albw_frame + 0x30))
  pfVar5 = *(float **)(*DAT_0036f9d4 + 0x1c);
  local_24 = *pfVar5;
  fStack_1c = pfVar5[2];
  local_20 = pfVar5[1] + fparam_0;
  cVar2 = *(char *)(*DAT_0036f9dc + 0x18);
  cVar1 = *(char *)(param_1 + 4);
  fVar6 = DAT_0036f9e0;
  fVar7 = DAT_0036f9d8;
  if ((cVar1 == '\x04' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\b')) {
    if (cVar2 == '\a' || cVar2 == '%') {
      fVar6 = fRam0036f9f0;
    }
  }
  else if (cVar2 == '\a' || cVar2 == '%') {
    fVar7 = DAT_0036f9e4;
  }
  iVar4 = func_00588CFC(*DAT_0036f9ec,&local_38,param_2,param_3,&local_24,
                        *(int *)(*DAT_0036f9d4 + 0x20),DAT_0036f9e8,fVar6,fVar7);
  if (iVar4 == 0) {
    if ((local_38 == *DAT_0036f9f4) && (local_34 == DAT_0036f9f4[1])) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      func_00115C70(&local_30,&local_24,param_2);
      local_18 = local_30;
      uStack_14 = uStack_2c;
      local_10 = local_28;
      local_30 = local_30 * local_38;
      local_28 = local_28 * local_34;
      func_00115C70(&local_18,&local_18,&local_30);
      *param_1 = *param_1 + local_18;
      param_1[2] = param_1[2] + local_10;
      return 0;
    }
  }
  return 1;
}

