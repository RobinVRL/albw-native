#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_004ECF6C(int param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_003a0418;
extern undefined4 *DAT_003a041c;
extern undefined4 DAT_003a0420;
extern undefined4 DAT_003a0424;
extern undefined4 DAT_003a0428;

// USA 003A035C <- EU 003A0338 (Ghidra, non-matching)
// GLOBAL DAT_003a0418 undefined4
// GLOBAL DAT_003a041c undefined4 *
// GLOBAL DAT_003a0420 undefined4
// GLOBAL DAT_003a0424 undefined4
// GLOBAL DAT_003a0428 undefined4

undefined4 * func_003A035C(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  puVar2 = func_004ED00C(param_1,param_2);
  puVar3 = DAT_003a041c;
  *puVar2 = DAT_003a0418;
  puVar2[0xca] = 0;
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  puVar2[0xcc] = puVar2;
  uVar1 = DAT_003a0420;
  puVar2[0xcd] = uVar5;
  puVar2[0xce] = uVar6;
  puVar2[0xcb] = uVar1;
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  puVar2[0xd0] = puVar2;
  puVar2[0xd1] = uVar5;
  puVar2[0xd2] = uVar6;
  puVar2[0xcf] = uVar1;
  *(undefined1 *)(puVar2 + 0xd3) = 0;
  *(undefined1 *)((int)puVar2 + 0x34d) = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x108);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_14 = DAT_003a0424;
    local_18 = DAT_003a0428;
    iVar4 = func_001663BC(puVar3,&local_18,puVar2[0xb3],0,1);
  }
  puVar2[0xca] = iVar4;
  *(undefined4 **)(iVar4 + 0x14) = puVar2 + 0xcb;
  *(undefined4 **)(puVar2[0xca] + 0x18) = puVar2 + 0xcf;
  puVar2[0xb8] = puVar2[0xb8] | 2;
  func_004ECF6C((int)puVar2);
  puVar2[0xc9] = 0;
  *(undefined1 *)(puVar2 + 200) = 0;
  *(undefined1 *)(puVar2 + 0xd3) = 1;
  return puVar2;
}

