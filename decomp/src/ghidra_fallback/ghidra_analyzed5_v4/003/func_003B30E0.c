#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004EA17C(int param_1,int *param_2,undefined4 *param_3);
extern float DAT_003b3164;
extern int DAT_003b3168;
extern undefined DAT_003b316c;
extern int DAT_003b3184;
extern int *DAT_003b3188;
extern char s__SE_SL_DASH_BRAKE_003b316f[];
extern char s_cf_003b316f[];
extern undefined4 _DAT_003b316c;

// USA 003B30E0 <- EU 003B30BC (Ghidra, non-matching)
// GLOBAL DAT_003b3164 float
// GLOBAL DAT_003b3168 int
// GLOBAL DAT_003b316c undefined
// GLOBAL DAT_003b3184 int
// GLOBAL DAT_003b3188 int *
// GLOBAL s_cf_003b316f string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003B30E0(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_18 = DAT_003b3184;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((int)ALBW_AS_U32(SQRT(*(float *)(iVar1 + 0x3dc) * *(float *)(iVar1 + 0x3dc) + DAT_003b3164 * DAT_003b3164
                + *(float *)(iVar1 + 0x3e4) * *(float *)(iVar1 + 0x3e4))) < DAT_003b3168) {
    piVar2 = *(int **)(iVar1 + 0x93c);
    iVar1 = func_003ABB24(piVar2,1,1);
    if (iVar1 != 0) {
      func_003B147C((int *)piVar2[1],1,1);
    }
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xa5c) = _DAT_003b316c;
  local_14 = s__SE_SL_DASH_BRAKE_003b316f + 1;
  return func_004EA17C(*DAT_003b3188,&local_18,(undefined4 *)0x0);
}

