#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00512E74(int param_1);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052F654(int param_1);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00513294;
extern float DAT_00513298;
extern float DAT_0051329c;
extern float DAT_005132a0;
extern undefined DAT_005132a4;
extern int DAT_005132b8;
extern char s_cf_005132a8[];
extern undefined4 _DAT_005132a4;

// USA 0051318C <- EU 00513164 (Ghidra, non-matching)
// GLOBAL DAT_00513294 float
// GLOBAL DAT_00513298 float
// GLOBAL DAT_0051329c float
// GLOBAL DAT_005132a0 float
// GLOBAL DAT_005132a4 undefined
// GLOBAL DAT_005132b8 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0051318C(int *param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fVar5 = DAT_0051329c;
  param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - DAT_00513294));
  fVar4 = DAT_00513298;
  param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) + -ALBW_AS_F32(param_1[0xf7]) * DAT_00513298));
  param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf9]) + -ALBW_AS_F32(param_1[0xf9]) * fVar4));
  pfVar3 = (float *)param_1[0x146];
  fVar4 = func_0051CF68(pfVar3 + 3,*pfVar3,pfVar3[1],pfVar3[2]);
  pfVar3[4] = fVar4;
  iVar2 = func_0052F654(param_1[0x146]);
  param_1[0x131] = iVar2;
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  if (0x19 < param_1[0x123]) {
    func_00512E74((int)param_1);
    bVar1 = func_00521018((int)param_1);
    if (bVar1) {
      bVar1 = func_0052107C((int)param_1);
      fVar4 = DAT_005132a0;
      if (bVar1) {
        param_1[0xf8] = (int)ALBW_AS_U32(DAT_005132a0);
      }
      else {
        fVar4 = ALBW_AS_F32(param_1[0xf8]);
      }
      if (fVar5 < fVar4) {
        param_1[0xf8] = (int)ALBW_AS_U32((fVar4 * ALBW_AS_F32(_DAT_005132a4)));
      }
      param_1[0xf7] = (int)ALBW_AS_U32(fVar5);
      param_1[0xf9] = (int)ALBW_AS_U32(fVar5);
    }
    bVar1 = func_0052107C((int)param_1);
    if (bVar1) {
      func_0066B94C(param_1 + 0x123,4);
      local_1c = s_cf_005132a8;
      local_20 = DAT_005132b8;
      func_00150A84(param_1,&local_20,0);
    }
  }
  return;
}

