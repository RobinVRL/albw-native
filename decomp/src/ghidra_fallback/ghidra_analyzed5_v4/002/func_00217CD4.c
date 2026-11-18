#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00217A0C(int *param_1);
extern int func_00275438(int param_1);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065DB40(undefined4 *param_1,undefined1 param_2);
extern float DAT_00217db0;
extern float DAT_00217db4;
extern float DAT_00217db8;
extern float DAT_00217dbc;

// USA 00217CD4 <- EU 00217CD4 (Ghidra, non-matching)
// GLOBAL DAT_00217db0 float
// GLOBAL DAT_00217db4 float
// GLOBAL DAT_00217db8 float
// GLOBAL DAT_00217dbc float

undefined4 func_00217CD4(int *param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  func_00275438(param_1[0x22f]);
  func_0053B0D0((int *)param_1[0x22f],(float *)0x0,(float *)0x0,(float *)(param_1 + 0xf4));
  func_00115C70(&local_18,(float *)(param_1 + 0xf4),(float *)(param_1 + 0xda));
  param_1[0x140] =
       (int)(((SQRT(local_18 * local_18 + local_14 * local_14 + fStack_10 * fStack_10) *
              DAT_00217db4) /
             (ALBW_AS_F32(param_1[5]) * ALBW_AS_F32(param_1[0x139]) * DAT_00217db0 * DAT_00217db8)) *
            DAT_00217dbc) + param_1[0x140];
  bVar1 = func_00588BF0((int)param_1,0);
  if (bVar1) {
    return func_0065DB40(param_1 + 0x230,2);
  }
  return func_00217A0C(param_1);
}

