// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_005568F4(int param_1);
extern int func_005569A4();
extern int func_00556E64(int param_1);
extern int *DAT_001844dc;
extern float DAT_001844e0;
extern int DAT_001844e4;

// USA 00184440 <- EU 00184440 (Ghidra, non-matching)
// GLOBAL DAT_001844dc int *
// GLOBAL DAT_001844e0 float
// GLOBAL DAT_001844e4 int

undefined4 func_00184440(void)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_001844dc;
  uVar4 = 1;
  bVar2 = func_00556E64(*DAT_001844dc);
  if (bVar2) {
    local_18 = DAT_001844e0;
    local_14 = DAT_001844e0;
    local_10 = DAT_001844e0;
    func_005569A4(*piVar1,&local_18);
    if ((int)ALBW_AS_U32((local_18 * local_18 + local_10 * local_10)) < DAT_001844e4) {
      uVar4 = 0;
    }
  }
  bVar2 = func_00556E64(*piVar1);
  if (bVar2) {
    uVar4 = 0;
  }
  bVar2 = func_00556E64(*piVar1);
  if ((!bVar2) && (uVar3 = func_005568F4(*piVar1), uVar3 == 0)) {
    uVar4 = 0;
  }
  return uVar4;
}

