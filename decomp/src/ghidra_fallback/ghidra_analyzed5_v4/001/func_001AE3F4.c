#include "ghidra_types.h"

extern int func_00141A3C(int *param_1,float *param_2,float *param_3);
extern int func_001428D0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00520FC0(void);
extern int func_00549010(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065AD50(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ae504;
extern float DAT_001ae508;
extern undefined4 DAT_001ae50c;

// USA 001AE3F4 <- EU 001AE3F4 (Ghidra, non-matching)
// GLOBAL DAT_001ae504 float
// GLOBAL DAT_001ae508 float
// GLOBAL DAT_001ae50c undefined4

undefined4 func_001AE3F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  lVar6 = func_0058ACC8(param_1,DAT_001ae504);
  if ((int)lVar6 == 0) {
    lVar6 = func_0058ACC8(param_1,DAT_001ae508);
    uVar1 = DAT_001ae50c;
    if ((int)lVar6 != 0) {
      *(undefined1 *)(param_1 + 0x9e0) = 1;
      *(undefined4 *)(param_1 + 0x9d8) = uVar1;
      *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(*(int *)(param_1 + 0x994) + 8);
      if (*(int *)(param_1 + 0x9a0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x9a0) + 0x61) = 1;
      }
      return 0;
    }
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      return func_0065AD50((undefined4 *)(param_1 + 0x90c),9);
    }
  }
  else {
    iVar2 = func_00549010(param_1);
    local_20 = *(undefined4 *)(iVar2 + 0xc);
    local_1c = *(undefined4 *)(iVar2 + 0x1c);
    local_18 = *(undefined4 *)(iVar2 + 0x2c);
    piVar3 = (int *)func_001428D0(&local_20,*(undefined4 *)(param_1 + 1000),
                                  *(undefined4 *)(param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x9d0))
    ;
    if (piVar3 != (int *)0x0) {
      pfVar4 = (float *)func_00549010(param_1);
      pfVar5 = (float *)func_00520FC0();
      func_00141A3C(piVar3,pfVar5,pfVar4);
      *(undefined1 *)(param_1 + 0x9e0) = 0;
      if (*(int *)(param_1 + 0x9a0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x9a0) + 0x61) = 0;
      }
    }
  }
  return 0;
}

