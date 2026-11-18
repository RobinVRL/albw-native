#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_004F4A68();
extern int func_0058E2B8(int *param_1);
extern float DAT_0026c574;
extern int DAT_0026c578;

// USA 0026C3A0 <- EU 0026C3C8 (Ghidra, non-matching)
// GLOBAL DAT_0026c574 float
// GLOBAL DAT_0026c578 int

undefined4 func_0026C3A0(int param_1,int param_2)

{
  int iVar1;
  int in_r3;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  fVar2 = *(float *)(param_2 + 8);
  if (fVar2 <= DAT_0026c574) {
    fVar2 = -fVar2;
  }
  local_18 = in_r3;
  if (((*(char *)(param_1 + 0x90c) != '\0') && (*(short *)(param_1 + 0x8fc) == 0)) &&
     ((int)ALBW_AS_U32(fVar2) < DAT_0026c578)) {
    fVar3 = *(float *)(param_2 + 0xc);
    fVar2 = *(float *)(param_2 + 4);
    if (fVar3 == DAT_0026c574 && fVar2 == DAT_0026c574) {
      local_18 = 0;
    }
    else if (fVar3 < DAT_0026c574) {
      if (fVar2 < DAT_0026c574) {
        if (fVar2 < fVar3) {
          local_18 = func_004905E0(fVar3 / fVar2);
          local_18 = -0x40000000 - local_18;
        }
        else {
          local_18 = func_004905E0(fVar2 / fVar3);
          local_18 = local_18 + -0x80000000;
        }
      }
      else {
        fVar3 = -fVar3;
        if (fVar3 < fVar2) {
          local_18 = func_004905E0(fVar3 / fVar2);
          local_18 = local_18 + 0x40000000;
        }
        else {
          local_18 = func_004905E0(fVar2 / fVar3);
          local_18 = -0x80000000 - local_18;
        }
      }
    }
    else if (fVar2 < DAT_0026c574) {
      fVar2 = -fVar2;
      if (fVar3 < fVar2) {
        local_18 = func_004905E0(fVar3 / fVar2);
        local_18 = local_18 + -0x40000000;
      }
      else {
        local_18 = func_004905E0(fVar2 / fVar3);
        local_18 = -local_18;
      }
    }
    else if (fVar3 < fVar2) {
      local_18 = func_004905E0(fVar3 / fVar2);
      local_18 = 0x40000000 - local_18;
    }
    else {
      local_18 = func_004905E0(fVar2 / fVar3);
    }
    local_18 = (*(int *)(param_1 + 0x904) + -0x80000000) - local_18;
    iVar1 = func_0058E2B8(&local_18);
    if (iVar1 < 0x60000000) {
      iVar1 = *(int *)(param_1 + 0x900);
      *(int *)(param_1 + 0x900) = iVar1 + -0x80000000;
      *(uint *)(param_1 + 0x904) = iVar1 + 0xa0000000U & 0xc0000000;
      *(undefined2 *)(param_1 + 0x8fc) = 10;
    }
  }
  return func_004F4A68(param_1,param_2);
}

