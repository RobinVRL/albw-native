#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int func_00664740(undefined4 *param_1,undefined1 param_2);
extern int DAT_003036ec;
extern int *DAT_003036f0;
extern int DAT_003036f4;
extern int DAT_003036f8;
extern int DAT_003036fc;
extern int DAT_00303700;
extern int DAT_00303704;

// USA 003035D4 <- EU 003035B0 (Ghidra, non-matching)
// GLOBAL DAT_003036ec int
// GLOBAL DAT_003036f0 int *
// GLOBAL DAT_003036f4 int
// GLOBAL DAT_003036f8 int
// GLOBAL DAT_003036fc int
// GLOBAL DAT_00303700 int
// GLOBAL DAT_00303704 int

undefined4 func_003035D4(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_003036f0;
  bVar2 = func_00584B94(*DAT_003036f0,DAT_003036ec);
  puVar3 = (undefined4 *)(param_1 + 0x498);
  if ((bVar2) && (bVar2 = func_00584B94(*piVar1,DAT_003036f4), !bVar2)) {
    *(undefined1 *)(param_1 + 0x4e9) = 1;
    *(undefined1 *)(param_1 + 0x4d4) = 0;
    return func_00664740(puVar3,1);
  }
  bVar2 = func_00584B94(*piVar1,0x2c8);
  if ((bVar2) && (bVar2 = func_00584B94(*piVar1,DAT_003036f8), !bVar2)) {
    *(undefined1 *)(param_1 + 0x4e9) = 1;
    *(undefined1 *)(param_1 + 0x4d4) = 1;
    return func_00664740(puVar3,1);
  }
  bVar2 = func_00584B94(*piVar1,DAT_003036fc);
  if ((bVar2) && (bVar2 = func_00584B94(*piVar1,DAT_00303700), !bVar2)) {
    *(undefined1 *)(param_1 + 0x4e9) = 1;
    *(undefined1 *)(param_1 + 0x4d4) = 2;
    return func_00664740(puVar3,1);
  }
  bVar2 = func_00584B94(*piVar1,0x2cc);
  if ((bVar2) && (bVar2 = func_00584B94(*piVar1,DAT_00303704), !bVar2)) {
    *(undefined1 *)(param_1 + 0x4e9) = 1;
    *(undefined1 *)(param_1 + 0x4d4) = 3;
    func_00664740(puVar3,1);
  }
  return 0;
}

