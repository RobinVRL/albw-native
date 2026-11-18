#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern int DAT_002040a4;
extern undefined DAT_002040a8;
extern int DAT_002040c0;
extern char s__SE_EN_APPEAR_GROUND_002040ab[];
extern char s_cf_002040ab[];
extern undefined4 _DAT_002040a8;

// USA 00204018 <- EU 00204018 (Ghidra, non-matching)
// GLOBAL DAT_002040a4 int
// GLOBAL DAT_002040a8 undefined
// GLOBAL DAT_002040c0 int
// GLOBAL s_cf_002040ab string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00204018(int *param_1)

{
  int iVar1;
  longlong lVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)((int)param_1 + 0x829) = 1;
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 == 0) {
    lVar2 = func_0058ACC8((int)param_1,ALBW_AS_F32(_DAT_002040a8));
    local_10 = DAT_002040c0;
    if ((int)lVar2 != 0) {
      param_1[0x167] = param_1[0x167] | 2;
      local_c = s__SE_EN_APPEAR_GROUND_002040ab + 1;
      return func_00150A84(param_1,&local_10,0);
    }
  }
  else {
    func_0065D3A8(param_1 + 0x23c,4);
    param_1[0xf8] = DAT_002040a4;
  }
  return 0;
}

