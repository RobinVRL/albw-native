#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0027CDD4(int param_1,uint param_2);
extern int func_0027D288(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int DAT_0027d5fc;
extern char s_SE_GuruGuruBar_BURNING_0027d5e4[];

// USA 0027D464 <- EU 0027D48C (Ghidra, non-matching)
// GLOBAL DAT_0027d5fc int
// GLOBAL s_SE_GuruGuruBar_BURNING_0027d5e4 string

undefined4 func_0027D464(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint extraout_r1;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  func_0027D288(param_1);
  uVar1 = extraout_r1;
  if (*(char *)(param_1 + 0x5bc) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x5b0);
    if (uVar1 < *(uint *)(param_1 + 0x5b4)) {
      uVar1 = uVar1 + 1;
      *(uint *)(param_1 + 0x5b0) = uVar1;
    }
    uVar1 = *(uint *)(param_1 + 0x5b4) - uVar1;
    if ((int)uVar1 < 0x28) {
      if ((uVar1 & 4) == 0) {
        iVar2 = *(int *)(param_1 + 0x5a8) + -0x4000000;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x5a8) + 0x4000000;
      }
      *(int *)(param_1 + 0x5a8) = iVar2;
    }
    uVar1 = *(uint *)(param_1 + 0x5b4);
    if (uVar1 <= *(uint *)(param_1 + 0x5b0)) {
      *(undefined1 *)(param_1 + 0x5bc) = 0;
      func_0014F4EC(*(int *)(param_1 + 0x430));
      uVar1 = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x570) + 0x61) = 1;
    }
  }
  func_0027CDD4(param_1,uVar1);
  local_18 = DAT_0027d5fc;
  if (*(uint *)(param_1 + 0x434) < *(uint *)(param_1 + 0x438)) {
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) + 1;
  }
  if (*(uint *)(param_1 + 0x59c) < *(uint *)(param_1 + 0x5a0)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) + 1;
  }
  local_14 = s_SE_GuruGuruBar_BURNING_0027d5e4;
  return func_001507D8(param_1,&local_18,0);
}

