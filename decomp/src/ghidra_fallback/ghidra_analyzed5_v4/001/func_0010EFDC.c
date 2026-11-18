#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010F228(undefined4 *param_1,undefined4 param_2);
extern int func_0010F88C(int param_1);
extern int func_0010F8E8(undefined4 *param_1,int param_2,int *param_3);
extern int func_0010F924(undefined4 *param_1);
extern int DAT_0010f09c;
extern int DAT_0010f0a0;
extern int DAT_0010f0a4;

// USA 0010EFDC <- EU 0010EFDC (Ghidra, non-matching)
// GLOBAL DAT_0010f09c int
// GLOBAL DAT_0010f0a0 int
// GLOBAL DAT_0010f0a4 int

undefined4 * func_0010EFDC(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  local_20 = param_4;
  piVar1 = func_0010CE7C(param_1);
  iVar4 = DAT_0010f09c;
  piVar1[4] = DAT_0010f0a0;
  piVar1[5] = iVar4;
  iVar4 = DAT_0010f0a4 + 0x4c;
  *piVar1 = DAT_0010f0a4;
  piVar1[6] = iVar4;
  puVar2 = func_0010F924(piVar1 + 7);
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined1 *)(puVar2 + 0x14) = 1;
  puVar2[0x15] = 0x7fffffff;
  puVar2[0x16] = param_4;
  puVar2[0x17] = 1;
  puVar2[0x18] = param_3;
  puVar2[0x19] = 0;
  puVar3 = func_0010F228(&local_20,*param_3);
  if ((int)puVar3 < 0) {
    func_0010A98C((uint)puVar3);
  }
  iVar4 = func_0010F88C(local_20);
  puVar2[0x1a] = iVar4;
  puVar2[0x1b] = 0xfffffffe;
  puVar2[0x11] = puVar2 + -7;
  func_0010F8E8(puVar2,0x20,param_2);
  return puVar2 + -7;
}

