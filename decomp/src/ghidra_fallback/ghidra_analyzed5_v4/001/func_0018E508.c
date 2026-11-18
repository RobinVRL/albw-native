#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern float DAT_0018e5d0;
extern float DAT_0018e5d4;
extern undefined4 DAT_0018e5d8;

// USA 0018E508 <- EU 0018E508 (Ghidra, non-matching)
// GLOBAL DAT_0018e5d0 float
// GLOBAL DAT_0018e5d4 float
// GLOBAL DAT_0018e5d8 undefined4

undefined4 func_0018E508(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_1 + 0x4a0);
  if (cVar1 == '\0') {
LAB_0018e5b4:
    func_00659688((undefined4 *)(param_1 + 0x49c),1);
    *(undefined1 *)(param_1 + 0x55d) = 1;
    return 1;
  }
  if (cVar1 == '\x01') {
    if ((*(char *)(param_1 + 0x55d) == '\0') && (*(int *)(param_1 + 0x49c) < 2)) {
      *(undefined1 *)(param_1 + 0x55d) = 1;
      return 1;
    }
  }
  else if (cVar1 == '\x06') {
    func_00115154(&local_20,local_1c,*(uint *)(param_1 + 1000));
    uVar2 = DAT_0018e5d8;
    fVar3 = DAT_0018e5d0;
    if (*(char *)(param_1 + 0x55e) == '\0') {
      fVar3 = DAT_0018e5d4;
    }
    *(float *)(param_1 + 0x3e4) = local_1c[0] * fVar3;
    *(float *)(param_1 + 0x3dc) = local_20 * fVar3;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    goto LAB_0018e5b4;
  }
  return 0;
}

