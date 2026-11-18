#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C0FF8(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_004dcc00;
extern float DAT_004dcc04;
extern float DAT_004dcc08;
extern float DAT_004dcc0c;
extern float DAT_004dcc10;
extern float DAT_004dcc14;
extern float DAT_004dcc18;
extern undefined DAT_004dcc1c;
extern char s__Splash_004dcc1f[];
extern char s_cf_004dcc1f[];
extern undefined4 _DAT_004dcc1c;

// USA 004DCAF4 <- EU 004DCACC (Ghidra, non-matching)
// GLOBAL DAT_004dcc00 float
// GLOBAL DAT_004dcc04 float
// GLOBAL DAT_004dcc08 float
// GLOBAL DAT_004dcc0c float
// GLOBAL DAT_004dcc10 float
// GLOBAL DAT_004dcc14 float
// GLOBAL DAT_004dcc18 float
// GLOBAL DAT_004dcc1c undefined
// GLOBAL s_cf_004dcc1f string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004DCAF4(int param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x9bc) == '\x01') {
    if (param_2 == 0) {
      pfVar4 = (float *)(param_1 + 0x99c);
      if (*(short *)(param_1 + 0x95a) == 0) {
        *pfVar4 = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_1 + 0x3d8);
        pfVar1 = (float *)func_00520FC0();
        func_00115C70(&local_24,pfVar1,(float *)(param_1 + 0x3d0));
        local_30 = local_24;
        uStack_2c = uStack_20;
        uStack_28 = uStack_1c;
        uVar2 = func_0068C690(&local_30);
        func_004D8054(pfVar4,uVar2,DAT_004dcc00);
        *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
      }
      uVar2 = func_004C0FF8(param_1,DAT_004dcc0c,DAT_004dcc08,DAT_004dcc04);
      uVar3 = func_004D838C((float *)(param_1 + 0x3d0),pfVar4,DAT_004dcc18,DAT_004dcc14,DAT_004dcc10
                           );
      if ((uVar3 & uVar2) == 0) {
        return 0;
      }
    }
    else if ((param_2 == 1) && (*(int *)(param_1 + 0x7ac) != 0)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = _DAT_004dcc1c;
    }
  }
  else if (((*(char *)(param_1 + 0x9bc) == '\x02') && (param_2 == 0)) &&
          (*(int *)(param_1 + 0x344) != 0)) {
    func_004A1B9C((int *)&local_30,*(int *)(param_1 + 0x344),(uint *)(s__Splash_004dcc1f + 1));
  }
  *(undefined2 *)(param_1 + 0x95a) = 0;
  return 1;
}

