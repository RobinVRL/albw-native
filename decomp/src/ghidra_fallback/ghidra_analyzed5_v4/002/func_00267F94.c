#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_00520EF0(int param_1,int *param_2);
extern int *DAT_00268084;
extern float DAT_00268088;
extern undefined DAT_0026808c;
extern int DAT_002680a0;
extern char s_cf_00268090[];
extern undefined4 _DAT_0026808c;

// USA 00267F94 <- EU 00267FBC (Ghidra, non-matching)
// GLOBAL DAT_00268084 int *
// GLOBAL DAT_00268088 float
// GLOBAL DAT_0026808c undefined
// GLOBAL DAT_002680a0 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00267F94(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = *DAT_00268084;
  if (param_2 == 5) {
    fVar2 = DAT_00268088;
    if (param_3 == 0) {
      fVar2 = ALBW_AS_F32(_DAT_0026808c);
    }
    func_002917A4(iVar1,param_1 + 0xf4,0,fVar2);
  }
  else if (param_2 == 8) {
    fVar2 = DAT_00268088;
    if (param_3 == 0) {
      fVar2 = ALBW_AS_F32(_DAT_0026808c);
    }
    func_00291A38(iVar1,param_1 + 0xf4,fVar2);
  }
  else if (param_2 == 0xe) {
    fVar2 = DAT_00268088;
    if (param_3 == 0) {
      fVar2 = ALBW_AS_F32(_DAT_0026808c);
    }
    func_00291FE0(iVar1,param_1 + 0xf4,fVar2);
  }
  local_14 = s_cf_00268090;
  local_18 = DAT_002680a0;
  iVar1 = func_00520EF0((int)param_1,&local_18);
  if (iVar1 != 1) {
    func_004FA124(param_1,param_2,0);
  }
  return;
}

