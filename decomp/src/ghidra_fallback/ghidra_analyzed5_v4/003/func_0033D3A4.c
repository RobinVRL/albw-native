#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0033CA24(int param_1,int *param_2,float fparam_0);
extern int func_005811E8(int *param_1);
extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern float DAT_0033d448;
extern undefined4 DAT_0033d44c;
extern undefined4 DAT_0033d450;
extern undefined DAT_0033d454;
extern int DAT_0033d46c;
extern char s__SE_LightArrow_FLY_0033d457[];
extern char s_cf_0033d457[];
extern undefined4 _DAT_0033d454;

// USA 0033D3A4 <- EU 0033D380 (Ghidra, non-matching)
// GLOBAL DAT_0033d448 float
// GLOBAL DAT_0033d44c undefined4
// GLOBAL DAT_0033d450 undefined4
// GLOBAL DAT_0033d454 undefined
// GLOBAL DAT_0033d46c int
// GLOBAL s_cf_0033d457 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0033D3A4(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  fVar1 = DAT_0033d448;
  uVar3 = DAT_0033d44c;
  if (*(float *)(param_1 + 0x464) <= DAT_0033d448) {
    uVar3 = DAT_0033d450;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  if (*(uint *)(param_1 + 0x520) < *(uint *)(param_1 + 0x524)) {
    *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) + 1;
  }
  else {
    *(float *)(param_1 + 0x3e0) = fVar1;
  }
  iVar2 = func_005811E8((int *)(param_1 + 0x4fc));
  if (iVar2 != 0) {
    func_0033CA24(param_1,(int *)(param_1 + 0x4fc),ALBW_AS_F32(_DAT_0033d454));
  }
  if (*(uint *)(param_1 + 0x474) < *(uint *)(param_1 + 0x478)) {
    *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) + 1;
    local_14 = s__SE_LightArrow_FLY_0033d457 + 1;
    local_18 = DAT_0033d46c;
    return func_001507D8(param_1,&local_18,0);
  }
  return func_00665E08((undefined4 *)(param_1 + 0x40c),5);
}

