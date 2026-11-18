#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern uint DAT_003928dc;
extern float DAT_003928e0;
extern float *DAT_003928e4;
extern float DAT_003928e8;
extern undefined DAT_003928ec;
extern int DAT_00392914;
extern int *DAT_00392918;
extern char s__SE_S_CROSS_RESULT_GAUGE_FIN_ZER_003928ef[];
extern undefined4 _DAT_003928ec;

// USA 00392850 <- EU 0039282C (Ghidra, non-matching)
// GLOBAL DAT_003928dc uint
// GLOBAL DAT_003928e0 float
// GLOBAL DAT_003928e4 float *
// GLOBAL DAT_003928e8 float
// GLOBAL DAT_003928ec undefined
// GLOBAL DAT_00392914 int
// GLOBAL DAT_00392918 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00392850(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  undefined2 *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  fVar2 = DAT_003928e8;
  pfVar1 = DAT_003928e4;
  fVar5 = DAT_003928e0;
  if (DAT_003928dc <= param_2) {
    param_2 = DAT_003928dc;
  }
  *(uint *)(param_1 + 0x40) = param_2;
  fVar4 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * fVar5;
  fVar5 = *pfVar1;
  if (fVar4 <= fVar2) {
    if (fVar5 < fVar2) {
      fVar5 = fVar2;
    }
  }
  else if (fVar5 < fVar4) {
    fVar5 = fVar4;
  }
  *pfVar1 = fVar5;
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 0x1c) < 2) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      puVar3 = *(undefined2 **)(*(int *)(param_1 + 0x24) + 4);
    }
    func_002317C0(puVar3,ALBW_AS_F32(_DAT_003928ec));
    local_c = s__SE_S_CROSS_RESULT_GAUGE_FIN_ZER_003928ef + 1;
    local_10 = DAT_00392914;
    func_00587F74(*DAT_00392918,&local_10,0);
  }
  return;
}

