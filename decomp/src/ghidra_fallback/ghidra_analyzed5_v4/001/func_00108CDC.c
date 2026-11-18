#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AFF8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5, undefined4 *param_6);

// USA 00108CDC <- EU 00108CDC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4 *

uint func_00108CDC(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4,
                  int param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 ((undefined4 *)(albw_frame + 0x8))
  local_30 = 0;
  local_2c = 0;
  func_00108DF8();
  if ((param_4 == (undefined4 *)0x0) || (puVar2 = param_4, iVar3 = param_5, param_5 == 0)) {
    puVar2 = &local_2c;
    iVar3 = 1;
  }
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    param_3 = 1;
    param_2 = &local_30;
  }
  uVar1 = func_0010AFF8(param_1,param_2,param_3,puVar2,iVar3,local_28);
  if ((int)uVar1 < 0) {
    func_0010873C(uVar1,0x108d6c);
  }
  if (param_4 == (undefined4 *)0x0 || param_5 == 0) {
    local_28[0] = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_28[0];
  }
  func_00108F4C();
  return uVar1;
}

