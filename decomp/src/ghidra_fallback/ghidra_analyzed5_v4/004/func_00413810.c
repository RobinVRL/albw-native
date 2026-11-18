#include "ghidra_types.h"

extern int DAT_0041386c;
extern float DAT_00413870;
extern float DAT_00413874;
extern int DAT_00413878;
extern float DAT_0041387c;
extern float DAT_00413880;
extern int DAT_00413884;

// USA 00413810 <- EU 004137F0 (Ghidra, non-matching)
// GLOBAL DAT_0041386c int
// GLOBAL DAT_00413870 float
// GLOBAL DAT_00413874 float
// GLOBAL DAT_00413878 int
// GLOBAL DAT_0041387c float
// GLOBAL DAT_00413880 float
// GLOBAL DAT_00413884 int

undefined2 func_00413810(float fparam_0)

{
  float fVar1;
  undefined2 uVar2;
  
  fVar1 = DAT_00413870;
  if ((DAT_00413870 < fparam_0) ||
     ((DAT_00413874 <= fparam_0 && (fVar1 = fparam_0, DAT_0041386c <= (int)ALBW_AS_U32(fparam_0))))) {
    if ((int)ALBW_AS_U32(fVar1) < DAT_00413878) {
      return *(undefined2 *)(DAT_00413884 + (int)((fVar1 - DAT_0041387c) * DAT_00413880) * 2);
    }
    uVar2 = 16000;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}

