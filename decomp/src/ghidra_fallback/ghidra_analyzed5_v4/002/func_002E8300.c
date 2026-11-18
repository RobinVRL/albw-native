#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002E8870(int param_1,int *param_2);
extern int func_0033C188(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00552C88(int param_1);
extern int func_00687EA0(undefined4 *param_1);
extern int *DAT_002e83d8;

// USA 002E8300 <- EU 002E82DC (Ghidra, non-matching)
// GLOBAL DAT_002e83d8 int *

undefined4 func_002E8300(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define aiStack_88 ((int *)(albw_frame + 0x8))
  #define local_2c (*(float *)(albw_frame + 0x64))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  #define afStack_20 ((float *)(albw_frame + 0x70))
  if (*(char *)(param_2 + 0x410) == '\x04' || *(char *)(param_2 + 0x410) == '\x03') {
    uVar2 = 0;
  }
  else {
    local_2c = *(float *)(param_2 + 0x3d0);
    uStack_28 = *(undefined4 *)(param_2 + 0x3d4);
    uStack_24 = *(undefined4 *)(param_2 + 0x3d8);
    func_00115C70(afStack_20,&local_2c,(float *)(param_1 + 0xe30));
    bVar1 = func_0033C188(param_2);
    uVar2 = 0;
    if (bVar1) {
      iVar3 = **(int **)(*(int *)(param_1 + 0xdb4) + 0x14);
      if ((iVar3 == 0 || iVar3 == 3) || iVar3 == 6) {
        puVar4 = (uint *)func_002C11E8(aiStack_88,3,0,0);
        func_0016898C(*(int *)(param_1 + 0xdb4),puVar4);
      }
      if (*(uint *)(param_1 + 0xca0) != 0) {
        puVar5 = (undefined4 *)func_0052FBA0(*DAT_002e83d8 + 0x3dbbc,*(uint *)(param_1 + 0xca0));
        piVar6 = func_00687EA0(puVar5);
        if (piVar6 != (int *)0x0) {
          func_002E8870(param_1,piVar6);
        }
      }
      *(undefined4 *)(param_1 + 0xca0) = *(undefined4 *)(param_2 + 0x2cc);
      fVar7 = func_00552C88(param_2);
      uVar2 = 1;
      *(float *)(param_1 + 0xca4) = fVar7;
      *(undefined1 *)(param_1 + 0xd44) = 1;
    }
  }
  return uVar2;
}

