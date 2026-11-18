#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00111A64(uint *param_1);
extern int func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern int DAT_00262ea0;
extern float DAT_00262ea4;
extern int *DAT_00262ea8;
extern float DAT_00262eac;

// USA 00262D1C <- EU 00262D44 (Ghidra, non-matching)
// GLOBAL DAT_00262ea0 int
// GLOBAL DAT_00262ea4 float
// GLOBAL DAT_00262ea8 int *
// GLOBAL DAT_00262eac float

undefined4 func_00262D1C(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  if (*(int *)(param_1 + 0x8bc) == 0x21) {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    if ((uVar2 & 1) == 0) {
      iVar3 = (*(int *)(param_1 + 0xa38) - *(int *)(param_1 + 0xa3c)) * -0x5555555;
    }
    else {
      iVar3 = (*(int *)(param_1 + 0xa38) - *(int *)(param_1 + 0xa3c)) * DAT_00262ea0;
    }
    iVar4 = *(int *)(param_1 + 1000) + iVar3 * 2;
    func_001119F4(auStack_60,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                  *(int *)(param_1 + 0xa40) * 0x30));
    local_24 = local_54;
    local_20 = local_44 + DAT_00262ea4;
    local_1c = local_34;
    iVar3 = func_00588BE4(param_1);
    if (iVar3 == *DAT_00262ea8) {
      func_00188BE4(&local_24,iVar4,2,*(undefined4 *)(param_1 + 0x2cc),DAT_00262eac);
    }
    else {
      func_00188BE4(&local_24,iVar4,5,*(undefined4 *)(param_1 + 0x2cc),DAT_00262eac);
    }
    *(int *)(param_1 + 0xa3c) = *(int *)(param_1 + 0xa3c) + -1;
  }
  iVar3 = func_0058A8F0(param_1);
  if (iVar3 != 0) {
    if (0 < *(int *)(param_1 + 0xa3c)) {
      return func_00660490((undefined4 *)(param_1 + 0x8bc),6);
    }
    func_00660490((undefined4 *)(param_1 + 0x8bc),4);
  }
  return 0;
}

