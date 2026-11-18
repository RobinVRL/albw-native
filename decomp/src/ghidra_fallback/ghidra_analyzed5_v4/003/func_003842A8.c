#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern float DAT_00384450;

// USA 003842A8 <- EU 00384284 (Ghidra, non-matching)
// GLOBAL DAT_00384450 float

/* WARNING: Removing unreachable block (ram,0x0038433c) */
/* WARNING: Removing unreachable block (ram,0x00384360) */
/* WARNING: Removing unreachable block (ram,0x003842f0) */
/* WARNING: Removing unreachable block (ram,0x00384310) */

undefined4 func_003842A8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define aiStack_d0 ((int *)(albw_frame + 0x0))
  #define aiStack_74 ((int *)(albw_frame + 0x5c))
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = iVar2 + 0x8c0;
  iVar4 = *(int *)(*(int *)(iVar2 + 0x8dc) + 0x14);
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    if (*(float *)(iVar4 + 0x10) < DAT_00384450) {
      if (*(float *)(iVar4 + 8) <= DAT_00384450) goto LAB_003843b8;
    }
    else if (*(float *)(iVar4 + 8) == *(float *)(iVar4 + 0x14)) goto LAB_003843b8;
  }
  bVar1 = func_003840A0(iVar3,0x6a);
  if (bVar1) {
    return 0;
  }
LAB_003843b8:
  iVar4 = func_003838A8(iVar3,0x6a);
  iVar3 = func_003838A8(iVar3,0x87);
  if (((**(int **)(*(int *)(iVar2 + 0x8dc) + 0x14) != iVar3) || (iVar4 < 0)) || (0xe < iVar4)) {
    puVar5 = (uint *)func_002C11E8(aiStack_74,iVar4,10,0);
    func_0016898C(*(int *)(iVar2 + 0x8dc),puVar5);
  }
  puVar5 = (uint *)func_002C11E8(aiStack_d0,iVar4,10,0);
  return func_0016898C(*(int *)(iVar2 + 0x8e0),puVar5);
}

