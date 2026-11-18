#include "ghidra_types.h"

extern int func_004BDB20(int param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0030e6ec;
extern float DAT_0030e6f0;
extern float DAT_0030e6f4;
extern int *DAT_0030e6f8;
extern uint *DAT_0030e6fc;

// USA 0030E604 <- EU 0030E5E0 (Ghidra, non-matching)
// GLOBAL DAT_0030e6ec int *
// GLOBAL DAT_0030e6f0 float
// GLOBAL DAT_0030e6f4 float
// GLOBAL DAT_0030e6f8 int *
// GLOBAL DAT_0030e6fc uint *

undefined4 func_0030E604(int param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  bVar2 = func_00584B94(*DAT_0030e6ec,0x3b4);
  if (bVar2) {
    return 0;
  }
  pfVar3 = (float *)func_00520FC0();
  piVar1 = DAT_0030e6f8;
  fVar6 = pfVar3[2] - (*(float *)(param_1 + 0x3d8) + DAT_0030e6f0);
  if (fVar6 <= DAT_0030e6f4) {
    fVar6 = -fVar6;
  }
  if ((int)ALBW_AS_U32(fVar6) < 0x3f000000) {
    fVar6 = *pfVar3 - *(float *)(param_1 + 0x3d0);
    if (fVar6 <= DAT_0030e6f4) {
      fVar6 = -fVar6;
    }
    if ((int)ALBW_AS_U32(fVar6) < 0x3f800000) {
      if (*(char *)(param_1 + 0x9bd) != '\x01') {
        return 0;
      }
      iVar5 = **(int **)(*DAT_0030e6f8 + 0x24);
      pfVar3 = (float *)func_00520FC0();
      local_18 = func_004D80EC(pfVar3,(float *)(param_1 + 0x3d0),**(int **)(*piVar1 + 0x24));
      local_18 = iVar5 - local_18;
      uVar4 = func_0058E2B8(&local_18);
      if (*DAT_0030e6fc <= uVar4) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x9bd) = 0;
      return func_004BDB20(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x9bd) = 1;
  return 0;
}

