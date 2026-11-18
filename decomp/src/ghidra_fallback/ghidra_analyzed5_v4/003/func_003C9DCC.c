#include "ghidra_types.h"

extern int func_003C8968(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5, undefined4 param_6,undefined4 param_7);

// USA 003C9DCC <- EU 003C9DA8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

undefined1 * func_003C9DCC(uint *param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((uint *)(albw_frame + 0x4))
  iVar3 = 0;
  if (param_4 != 0) {
    while( true ) {
      if (param_5 == 0) {
        uVar2 = *param_1 | 1;
      }
      else {
        uVar2 = *param_1 & 0xfffffffe;
      }
      *param_1 = uVar2;
      puVar1 = func_003C8968((int)local_2c,(int *)(uVar2 & 0xfffffffe),param_1[1],param_1[2],param_3
                             ,param_4,param_5);
      if ((int)puVar1 < 0) {
        return puVar1;
      }
      uVar2 = param_1[1];
      iVar3 = iVar3 + local_2c[0];
      param_1[1] = uVar2 + local_2c[0];
      param_1[2] = param_1[2] + ((int)local_2c[0] >> 0x1f) + (uint)CARRY4(uVar2,local_2c[0]);
      if ((local_2c[0] == param_4) || (local_2c[0] == 0)) break;
      param_3 = param_3 + local_2c[0];
      param_4 = param_4 - local_2c[0];
    }
  }
  *param_2 = iVar3;
  return (undefined1 *)0x0;
}

