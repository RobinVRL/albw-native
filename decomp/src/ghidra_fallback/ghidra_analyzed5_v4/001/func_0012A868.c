#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004F4A68();
extern int func_0058E2B8(int *param_1);
extern float DAT_0012a918;
extern int DAT_0012a91c;
extern uint DAT_0012a920;

// USA 0012A868 <- EU 0012A868 (Ghidra, non-matching)
// GLOBAL DAT_0012a918 float
// GLOBAL DAT_0012a91c int
// GLOBAL DAT_0012a920 uint

undefined4 func_0012A868(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 <= DAT_0012a918) {
    fVar4 = -fVar4;
  }
  if ((*(char *)(param_1 + 0x97a) == '\0') && ((int)ALBW_AS_U32(fVar4) < DAT_0012a91c)) {
    local_18 = func_004904CC(*(float *)(param_2 + 4),*(float *)(param_2 + 0xc));
    iVar3 = *(int *)(param_1 + 1000) + -0x80000000;
    local_18 = iVar3 - local_18;
    iVar1 = func_0058E2B8(&local_18);
    if (iVar1 < 0x60000000) {
      local_14 = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x930);
      uVar2 = func_0058E2B8(&local_14);
      if (uVar2 < DAT_0012a920) {
        *(int *)(param_1 + 0x930) = iVar3;
        *(undefined1 *)(param_1 + 0x97a) = 1;
      }
    }
  }
  return func_004F4A68(param_1,param_2);
}

