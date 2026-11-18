#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00334474(int param_1,undefined4 param_2);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_003346d4;
extern int DAT_003346d8;
extern undefined DAT_003346dc;
extern float DAT_003346fc;
extern float DAT_00334700;
extern float DAT_00334704;
extern float DAT_00334708;
extern float DAT_0033470c;
extern int DAT_00334710;
extern float DAT_0033472c;
extern char s_SE_HeartContainer_BOUND_00334714[];
extern char s__SE_HeartContainer_APPEAR_003346df[];
extern char s_cf_003346df[];
extern undefined4 _DAT_003346dc;

// USA 0033456C <- EU 00334548 (Ghidra, non-matching)
// GLOBAL DAT_003346d4 float
// GLOBAL DAT_003346d8 int
// GLOBAL DAT_003346dc undefined
// GLOBAL DAT_003346fc float
// GLOBAL DAT_00334700 float
// GLOBAL DAT_00334704 float
// GLOBAL DAT_00334708 float
// GLOBAL DAT_0033470c float
// GLOBAL DAT_00334710 int
// GLOBAL DAT_0033472c float
// GLOBAL s_cf_003346df string
// GLOBAL s_SE_HeartContainer_BOUND_00334714 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0033456C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  fVar4 = DAT_00334708;
  fVar3 = DAT_00334704;
  iVar2 = DAT_003346d8;
  fVar6 = DAT_003346d4;
  cVar1 = (char)param_1[0x104];
  if (cVar1 == '\0') {
    fVar5 = ALBW_AS_F32(param_1[0x109]);
    fVar5 = fVar5 + (DAT_003346fc - fVar5) * DAT_00334700;
    param_1[0x109] = (int)ALBW_AS_U32(fVar5);
    param_1[0x10a] = (int)ALBW_AS_U32(fVar5);
    param_1[0x10b] = (int)ALBW_AS_U32(fVar5);
    param_1[0x10c] = (int)ALBW_AS_U32(fVar5);
    fVar7 = ALBW_AS_F32(param_1[0xf5]);
    fVar5 = ALBW_AS_F32(param_1[0xf8]) - fVar3;
    if (ALBW_AS_F32(param_1[0xf8]) - fVar3 < fVar4) {
      fVar5 = fVar4;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar5);
    param_1[0xf5] = (int)ALBW_AS_U32((fVar7 + fVar5));
    if (fVar7 + fVar5 < ALBW_AS_F32(param_1[3]) && fVar5 < fVar6) {
      if ((uint)ALBW_AS_U32(DAT_0033470c) <= (uint)ALBW_AS_U32(fVar5)) {
        local_24 = s_SE_HeartContainer_BOUND_00334714;
        local_28 = iVar2;
        func_00150A84(param_1,&local_28,0);
        fVar6 = ALBW_AS_F32(param_1[0xf8]) * DAT_0033472c;
        param_1[0xf5] = param_1[3];
        param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
        return 0;
      }
      param_1[0xf5] = param_1[3];
      param_1[0xf8] = DAT_00334710;
      return func_00334474((int)param_1,2);
    }
  }
  else {
    *(char *)(param_1 + 0x104) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined1 *)((int)param_1 + 0x411) = 1;
      if (param_1[0x119] != 0) {
        func_00151148(param_1[0x119],1);
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
      func_004CF478(param_1[0x10f],1);
      fVar6 = ALBW_AS_F32(_DAT_003346dc);
      param_1[0x109] = (int)ALBW_AS_U32(_DAT_003346dc);
      param_1[0x10a] = (int)ALBW_AS_U32(fVar6);
      param_1[0x10b] = (int)ALBW_AS_U32(fVar6);
      param_1[0x10c] = (int)ALBW_AS_U32(fVar6);
      local_24 = s__SE_HeartContainer_APPEAR_003346df + 1;
      local_28 = iVar2;
      func_00150A84(param_1,&local_28,0);
    }
  }
  return 0;
}

