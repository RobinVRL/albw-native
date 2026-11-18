#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern float DAT_0018ec10;
extern float DAT_0018ec14;
extern undefined4 DAT_0018ec18;

// USA 0018EB94 <- EU 0018EB94 (Ghidra, non-matching)
// GLOBAL DAT_0018ec10 float
// GLOBAL DAT_0018ec14 float
// GLOBAL DAT_0018ec18 undefined4

undefined4 func_0018EB94(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x4a0) == '\a') {
    func_00115154(&local_10,&local_c,*(uint *)(param_1 + 1000));
    uVar1 = DAT_0018ec18;
    fVar2 = DAT_0018ec10;
    if (*(char *)(param_1 + 0x55e) == '\0') {
      fVar2 = DAT_0018ec14;
    }
    *(float *)(param_1 + 0x3dc) = local_10 * fVar2;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(float *)(param_1 + 0x3e4) = local_c * fVar2;
    func_00659688((undefined4 *)(param_1 + 0x49c),1);
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x55d) = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

