#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002B614C(int param_1,float fparam_0);
extern int func_002B91C0(int param_1,float *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EA17C(int param_1,int *param_2,undefined4 *param_3);
extern int func_004FB208(int param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_00542D84(int param_1);
extern float DAT_003b34f0;
extern undefined4 DAT_003b34f4;
extern float DAT_003b34f8;
extern undefined DAT_003b34fc;
extern int DAT_003b350c;
extern int *DAT_003b3510;
extern char s_SE_SL_DASH_FOOTSTEPS_003b3514[];
extern char s___SE_PL_DASH_003b34fe[];
extern char s_cf_003b34fe[];
extern undefined4 _DAT_003b34fc;

// USA 003B3360 <- EU 003B333C (Ghidra, non-matching)
// GLOBAL DAT_003b34f0 float
// GLOBAL DAT_003b34f4 undefined4
// GLOBAL DAT_003b34f8 float
// GLOBAL DAT_003b34fc undefined
// GLOBAL DAT_003b350c int
// GLOBAL DAT_003b3510 int *
// GLOBAL s_cf_003b34fe string
// GLOBAL s_SE_SL_DASH_FOOTSTEPS_003b3514 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003B3360(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x30))
  iVar3 = param_1[0x12];
  if ((*(char *)(iVar3 + 0xb34) != '\0') && (*(short *)(iVar3 + 0xaf0) == 0)) {
    func_004D80A4(&fStack_24,*(uint *)(iVar3 + 1000),DAT_003b34f0);
    local_20 = DAT_003b34f4;
    func_00115D70(&local_18,&fStack_24,DAT_003b34f8);
    local_30 = local_18;
    uStack_2c = uStack_14;
    uStack_28 = uStack_10;
    func_002B91C0(param_1[0x12],&local_30);
  }
  puVar4 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
  if (((*puVar4 < 0x1e) || (bVar2 = func_00542D84(param_1[0x12]), !bVar2)) &&
     (0 < (short)param_1[0x18])) {
    iVar3 = param_1[0x12];
    if ((*(char *)(iVar3 + 0xb38) == '\0') && (*(char *)(iVar3 + 0xb39) != '\0')) {
      return (**(code **)(*param_1 + 0x138))(param_1,10,1);
    }
    bVar2 = func_002B614C(iVar3,ALBW_AS_F32(_DAT_003b34fc));
    if (!bVar2) {
      if (*(char *)(param_1[0x12] + 0xb34) == '\0') {
        iVar3 = func_004FB208(param_1[0x12],0,(float *)0x0,0,0);
        if (iVar3 == 0) goto LAB_003b34d0;
        (**(code **)(*param_1 + 0x138))(param_1,3,1);
      }
      piVar1 = DAT_003b3510;
      iVar3 = DAT_003b350c;
      local_34 = s___SE_PL_DASH_003b34fe + 2;
      local_38 = DAT_003b350c;
      func_004EA17C(*DAT_003b3510,&local_38,(undefined4 *)0x0);
      local_34 = s_SE_SL_DASH_FOOTSTEPS_003b3514;
      local_38 = iVar3;
      return func_004EA17C(*piVar1,&local_38,(undefined4 *)0x0);
    }
  }
LAB_003b34d0:
  return (**(code **)(*param_1 + 0x138))(param_1,0xb,1);
}

