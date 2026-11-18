#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0019B04C(uint param_1);
extern int func_001DA1F0(int param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00385EE0(uint param_1);
extern int func_003867E4(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_005430D4(int param_1);
extern uint *DAT_0038658c;
extern uint *DAT_00386590;
extern int *DAT_00386594;

// USA 003863E8 <- EU 003863C4 (Ghidra, non-matching)
// GLOBAL DAT_0038658c uint *
// GLOBAL DAT_00386590 uint *
// GLOBAL DAT_00386594 int *

undefined4 func_003863E8(uint param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(short *)(albw_frame + 0x28))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  if (cVar1 == '\x04') {
    uVar5 = 1;
  }
  else if (cVar1 == '\x05') {
    uVar5 = 2;
  }
  else if (cVar1 == '\x06') {
    uVar5 = 3;
  }
  else {
    uVar5 = 0;
  }
  func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar5);
  puVar2 = DAT_0038658c;
  iVar3 = *(int *)(param_1 + 4);
  piVar6 = (int *)(param_1 + 0x1bc);
  if (*(int *)(iVar3 + 0x344) == 0) {
    *piVar6 = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  else {
    iVar4 = *piVar6;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x1c0))) {
      func_00110848(iVar4);
    }
    func_004A1B9C(&local_2e0,*(int *)(iVar3 + 0x344),puVar2);
    *piVar6 = local_2e0;
    *(undefined4 *)(param_1 + 0x1c0) = local_2dc;
  }
  func_003867E4(param_1);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  if (*(char *)(param_1 + 0x35) == '\0') {
    if ((*(short *)(param_1 + 0x134) < 1) &&
       (iVar3 = func_005430D4(*(int *)(param_1 + 4)), iVar3 != 0)) {
      *(undefined2 *)(param_1 + 0x134) = 0x1e;
      local_2c0 = 0;
      local_2bc = 0;
      local_2c4 = 0;
      local_298 = 0;
      local_294 = 0;
      local_20 = 0;
      func_002DFF7C(&local_2e0);
      local_2e0 = func_0019B04C(*DAT_00386590);
      iVar3 = *(int *)(param_1 + 4);
      local_2d4 = *(undefined4 *)(iVar3 + 0x3d8);
      local_2dc = *(undefined4 *)(iVar3 + 0x3d0);
      uStack_2d8 = *(undefined4 *)(iVar3 + 0x3d4);
      local_2c0 = *(undefined4 *)(*(int *)(param_1 + 4) + 1000);
      local_2b8 = (short)*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 9);
      local_294 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc);
      piVar6 = func_004C4AF4(*DAT_00386594,&local_2e0,0);
      if (piVar6 != (int *)0x0) {
        func_001DA1F0((int)piVar6);
      }
    }
    return func_00385EE0(param_1);
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar3 + 0x936) = 1;
  piVar6 = *(int **)(*(int *)(iVar3 + 0x93c) + 4);
                    /* WARNING: Could not recover jumptable at 0x003864b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar6 + 0x138))(piVar6,2,1);
}

