#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);

// USA 0048ADE4 <- EU 0048ADBC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

undefined4 func_0048ADE4(int param_1,byte param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 * *)(albw_frame + 0x0))
  local_20 = param_4;
  func_006003D8(0x208,(int *)&local_20);
  puVar1 = local_20;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 2;
  }
  if (param_4 == (undefined4 *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 4;
  }
  if (param_5 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)(param_1 + 0xa4) = bVar2 | param_2 | bVar3 | bVar4;
  local_20 = func_00562280((int *)(param_1 + 0xd0),local_20,1);
  return func_00601378((int)local_20 - (int)puVar1 & 0xfffffffc);
}

