#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001282AC(int param_1,float *param_2);
extern int func_001283A8(int param_1);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00127b3c;
extern int DAT_00127b40;
extern float DAT_00127b44;
extern int DAT_00127b48;
extern float DAT_00127b4c;

// USA 0012799C <- EU 0012799C (Ghidra, non-matching)
// GLOBAL DAT_00127b3c float
// GLOBAL DAT_00127b40 int
// GLOBAL DAT_00127b44 float
// GLOBAL DAT_00127b48 int
// GLOBAL DAT_00127b4c float

undefined4 func_0012799C(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fparam_1 = DAT_00127b3c;
  fVar4 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x3d4);
  if (fVar4 <= DAT_00127b3c) {
    fVar4 = -fVar4;
  }
  puVar3 = (undefined4 *)(param_1 + 0x8bc);
  if ((int)ALBW_AS_U32(fVar4) < DAT_00127b40) {
    iVar1 = *(int *)(param_1 + 0x8ec);
    if (iVar1 == 0) {
      pfVar2 = (float *)func_00520FC0();
      return func_001282AC(param_1,pfVar2);
    }
    if (iVar1 == 1) {
      return func_001283A8(param_1);
    }
    if (iVar1 != 2) {
      return 0;
    }
    fVar4 = *(float *)(param_1 + 0x3e4) * DAT_00127b44;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_00127b44;
    *(float *)(param_1 + 0x3e4) = fVar4;
    if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
      *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
      return 0;
    }
    if (*(char *)(param_1 + 0x90c) == '\0') {
      *(float *)(param_1 + 0x3dc) = fparam_1;
      *(float *)(param_1 + 0x3e0) = fparam_1;
      *(float *)(param_1 + 0x3e4) = fparam_1;
      return func_006568D8(puVar3,5);
    }
    func_00115C70(local_20,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    if ((int)ALBW_AS_U32(SQRT(local_20[0] * local_20[0] + local_18 * local_18)) < DAT_00127b48) {
      iVar1 = func_005211F4(param_1,DAT_00127b4c,fparam_1);
      if (iVar1 != 0) {
        return func_006568D8(puVar3,2);
      }
      return func_006568D8(puVar3,7);
    }
  }
  return func_006568D8(puVar3,6);
}

